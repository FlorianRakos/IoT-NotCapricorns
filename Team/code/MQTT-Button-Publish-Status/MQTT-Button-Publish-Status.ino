#include "Arduino.h"
#include <WiFi.h>
#include "ESP32MQTTClient.h"
const char *ssid = "iotempire-nc";
const char *pass = "bobby123";



// Test Mosquitto server, see: https://test.mosquitto.org
char *server = "mqtt://192.168.12.1:1883";

char *subscribeTopic = "switch/r1/set";
char *publishTopic = "status";

ESP32MQTTClient mqttClient; // all params are set later

void setup()
{
    Serial.begin(115200);
    log_i();
    log_i("setup, ESP.getSdkVersion(): ");
    log_i("%s", ESP.getSdkVersion());

    mqttClient.enableDebuggingMessages();

    mqttClient.setURI(server);
    mqttClient.enableLastWillMessage("lwt", "I am going offline");
    mqttClient.setKeepAlive(30);
    WiFi.begin(ssid, pass);
    WiFi.setHostname("c3test");
    mqttClient.loopStart();

    pinMode(4, INPUT_PULLUP);
}

int pubCount = 0;

void loop()
{
    Serial.println(digitalRead(4));
    if (digitalRead(4)) {
      Serial.println("Publishing message");
      String msg = "Status message.";

      mqttClient.publish(publishTopic, msg, 0, false);
      delay(2000);
    } else {
      
    }
}

void onConnectionEstablishedCallback(esp_mqtt_client_handle_t client)
{
    if (mqttClient.isMyTurn(client)) // can be omitted if only one client
    {
        mqttClient.subscribe(subscribeTopic, [](const String &payload)
                             { Serial.println(String(subscribeTopic) + String(payload)); });

        mqttClient.subscribe("bar/#", [](const String &topic, const String &payload)
                             { Serial.println(String(topic) +  String(payload)); });
    }
}

esp_err_t handleMQTT(esp_mqtt_event_handle_t event)
{
    mqttClient.onEventCallback(event);
    return ESP_OK;
}

