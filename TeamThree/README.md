# Teamfolder

Here we store all the exercises, pictures and projects Jorrit, Luca and Cristina did in the exercise lectures of IoT.
 

## Exercises

2.b Breadboard and Electronic Prototyping (Pair)
1. We connected the Wemos D1 Mini to our computer using a USB cable for testing.

2. We established a 5V and Ground (G) connection from the Wemos D1 Mini to the breadboard, deviating from the video instructions. Instead, we successfully connected Jorrit's ESP32 to the laptop.

3. We followed the video instructions to wire up the yellow and red LEDs with a 330-Ohm resistor. We took a photo as proof of the illuminated LEDs for our portfolio. During this step, Cristina and Luca, with limited prior experience, conducted the task with Jorrit's guidance. Initially, only the red LED lit up while the yellow one remained off due to an incomplete circuit. Eventually, we all succeeded in lighting up both LEDs simultaneously by completing the circuit.

4. We added the button as demonstrated in the video. We documented the steps, confirmed its functionality, and captured a photo of the setup for our portfolio. Initially, we encountered an issue with an incomplete circuit, but we resolved it. Now, the button works, allowing both lights to be activated simultaneously. In a subsequent attempt, we placed the button in a different location. Initially, only the red LED lit up, but we discovered that the yellow LED was inserted incorrectly with the long and short legs reversed. After making the adjustment, both LEDs now function as intended.

2.c Blink on the Wemos D1 Mini (Pair)
Exercise: Add led on D6 blinking async. Use number instead of D6 (not in video) and make it blink synchronously
Our steps: We connected d5 to the positive (the esp32 has no d6), then put in the light in the positive and the resistance in the negative. We also added a wire that goes from the negative to the ground. For the number we used instead of d5 we look at pinout esp32. This showed us that we needed to use pin 5.
So for the exercise to make them not sync we used the built in command to use one of the built in lights and we added another light on pin 5. We made a code to make them blink but the builtin one is blinking but the other one isnt.
We apparently wrote the different number for the pin. We changed it to 5 so now it works. The are not blinking in sync.
Now we are going to make them blink in sync. We are using the same setup, but we are switchting the High and Low voltage. This makes them blink in sync.

2.d Toggle Led With Button
Exercise: Add button to breadboard (wire button to ground and a GPIO port like D5)
Our steps: We put it in the correct place

Exercise: Test out the DigitalReadSerial example
Our steps: We tried it and it works

Exercise: Adjust pushButton to D5 (or the respective GPIO port number)
Our steps: We dit and it works

Exercise: Replace in pinMode INPUT with INPUT_PULLUP (if you want to learn something try to answer why this is better or what would be the alternative).
Our steps: we wrote it in the code

Exercise: Flash and check serial monitor (taking a screenshot when this is working is good proof for your portfolio - remember to take photos during your setup)
Our steps: We wrote it in the code

Exercise: Write an Arduino sketch that allows you to toggle (switch from turned on to turned off and back) with a push of the button the led on D6.
Our steps: We wrote it. But we have a problem. It checks the button state every 10 miliseconds so even if you press it quick it will still be on. We are lacking Hysteresis (luckily we know this because jorrit already encountered this problem). Hysteresis is a lag between input and output in a system upon a change in direction. 
We now created a light that works but if we hold it, it will keep blinking. 

- [exercise01][1]
...

[1]: /Teamfolder/exercises/exercise01
...

## Projects

- [project01][7]
...

[7]: /Teamfolder/project
...

## Pictures
2.b
1 button 1 light just lighting up:
![Afbeelding van WhatsApp op 2023-10-16 om 15 28 56_b5383109](https://github.com/FlorianRakos/IoT-NotCapricorns/assets/148061546/999e431d-49c7-437f-881f-8a70786a24e3)
![Afbeelding van WhatsApp op 2023-10-16 om 15 28 59_de844371](https://github.com/FlorianRakos/IoT-NotCapricorns/assets/148061546/5a01f577-ebca-4f8e-ac2e-445e20e8e681)

1 button 1 light:
![Afbeelding van WhatsApp op 2023-10-16 om 15 32 09_ee3254b9](https://github.com/FlorianRakos/IoT-NotCapricorns/assets/148061546/d09248ab-fa23-4788-8bbf-51469d90e262)
![Afbeelding van WhatsApp op 2023-10-16 om 15 32 08_d924c623](https://github.com/FlorianRakos/IoT-NotCapricorns/assets/148061546/5e5c9444-31fc-422a-ba78-fb0fb4ac7fc9)

1 button 2 lights version 1:
![Afbeelding van WhatsApp op 2023-10-16 om 15 37 34_fc6412d7](https://github.com/FlorianRakos/IoT-NotCapricorns/assets/148061546/c072ac23-9c19-48b4-bd4e-2feeae02eefc)
![Afbeelding van WhatsApp op 2023-10-16 om 15 37 35_728fc1b9](https://github.com/FlorianRakos/IoT-NotCapricorns/assets/148061546/5f232988-ae03-47ed-86b1-913af74a7f50)

1 button 2 lights version 2:
![Afbeelding van WhatsApp op 2023-10-16 om 15 41 56_45f5b16e](https://github.com/FlorianRakos/IoT-NotCapricorns/assets/148061546/f436057c-86f4-48e1-beb0-0a2b6e89c60f)
![Afbeelding van WhatsApp op 2023-10-16 om 15 41 56_63d2ca0b](https://github.com/FlorianRakos/IoT-NotCapricorns/assets/148061546/1e4a7a83-11ed-4cf4-b25d-b5c821f2f559)

2.c
Not in sync:
![Afbeelding van WhatsApp op 2023-10-16 om 16 17 22_114a1a8f](https://github.com/FlorianRakos/IoT-NotCapricorns/assets/148061546/3628419a-ce7b-4001-a7f4-6263f143599d)
![Afbeelding van WhatsApp op 2023-10-16 om 16 17 22_b3cec146](https://github.com/FlorianRakos/IoT-NotCapricorns/assets/148061546/9001bb9e-a57d-47d5-a9ce-2d74b648b728)

In sync:
![Afbeelding van WhatsApp op 2023-10-16 om 16 17 45_a2a5b926](https://github.com/FlorianRakos/IoT-NotCapricorns/assets/148061546/b1e4a89a-cc1b-4562-b59b-e1eb48bae96b)
![Afbeelding van WhatsApp op 2023-10-16 om 16 17 46_2b4676c7](https://github.com/FlorianRakos/IoT-NotCapricorns/assets/148061546/95c934cc-9b99-40bb-b683-efd6098f442d)

2.d
Digitalreadsignal and input pullup and :
![Afbeelding van WhatsApp op 2023-10-16 om 16 32 17_bd15b30b](https://github.com/FlorianRakos/IoT-NotCapricorns/assets/148061546/2b735b6e-e9d4-456d-8431-096edb0ec825)

Toggle button:
![Afbeelding van WhatsApp op 2023-10-16 om 16 48 56_7457f06a](https://github.com/FlorianRakos/IoT-NotCapricorns/assets/148061546/aa080584-d80d-4639-8c07-57b569e0cd27)

- [pictures](/Teamfolder/pictures)

# Exercise 4: 

## MQTT Integration
```python
from iotknit import *

init("192.168.12.1")  # use a MQTT broker on localhost

prefix("switch")  # all actors below are prefixed with /led

switch = publisher("r1")  # create a Thingi interface that publishes to led/led1

def tempCallback(msg):

    print("received: [temp]", msg)

    try:
        t = int(msg)
    except ValueError:
        return
   
    if (t >= 30):
        switch.publish("set", "on")  # publish updated state
        print("sending: [r1]", "on")
    else:
        switch.publish("set", "off")
        print("sending: [r1]", "off")


prefix("temp-measure")  # all sensors below are prefixed with /button

temp1 = subscriber("temp1")  # create a Thingi interface that can have
                                 # subscribes only to button/button1
temp1.subscribe_change(callback=tempCallback)

run()  # you can also do a while loop here call process() instead
```

## MQTT simulators
### AC simulator Bash code
```
# Use a subshell to run mosquitto_sub in the background
(
    mosquitto_sub -h "$BROKER" -t "$RECEIVE_TOPIC" | while read -r MESSAGE; do
        process_message "$MESSAGE"
    done
) &

# Main loop to publish the state every second
while true; do
    # If there's new data in the PIPE, read it into STATE
    if read -t 0.01 NEW_STATE < "$PIPE"; then
        STATE="$NEW_STATE"
    fi

    mosquitto_pub -h "$BROKER" -t "$SEND_TOPIC" -m "$STATE"
    sleep 1
done
```

### Temperature simulator Bash code
```
#!/bin/bash

BROKER="192.168.12.1"
TOPIC="temp-measure/temp1"

while true; do
    # Generate a random number between 15 and 30
    RAND_NUM=$((RANDOM % 16 + 15))

    # Send the random number using mosquitto_pub
    mosquitto_pub -h "$BROKER" -t "$TOPIC" -m "$RAND_NUM"

    # Wait for 1 seconds
    sleep 1
done
```
## MQTT on microcontroller
We first started with connecting the wires to the temperature sensor. We needed to work around this because we had no female to male cables, so we used some normal connecting wires and put them in the female output and then in the breadboard. From the breadboard we connected 3 wires to the Esp32.

### Picture 1 setting up the breadboard
![Afbeelding van WhatsApp op 2023-10-19 om 12 30 59_8422c7ae](https://github.com/FlorianRakos/IoT-NotCapricorns/assets/148061546/63804990-03c4-4fba-a0ac-d36147a75c26)

### Coding
We are now going to work on the laptop in Arduino IDE. We got a code from the library and we are editing it so we can work with it. We edited the esp32mqttclient "hellotomyself" code. We use this so we can use mqtt.
We are looking for another example. We are selecting the DHT11 example. We don't know if it will work, but we are trying it. We selected the "readtemperature" option from DHT11. We tried to upload, but we forgot that we disconnected the ESP from the laptop. Now we connected it again and uploaded the program. We get a checksum mismatch while reading from DHT11 error code. So we need to change the pin number, we forgot that we were using pin 4 and not the default pin 2. We got an output. It gives us a temperature of 26 degrees (picture). We are trying to heat it up by using our hands. We put our hands around it and the temperature is going up. It went to 27, and even to 28.
So now we are going to merge both our codes, and trying to make it 1 working code. 
We have combined them and are now testing the code. The output gives us the temperature only once. We don't want this. We change the seconds for when it gives us a value every 2 seconds. Somehow this does not really work. It gives us a value each time it changes. 
So we now change the subscribetopic in the top to "switch /r1/set". We do this because it was not subscribed to anything. So now we have it subscribed to the AC. We get a very weird error message now. It has symbols and text. 
It now says we can not connect to the internet. It does not send the temperatue anymore. We changed the beginning of the code. We entered a serial_begin so we can use the serial_print command. This made it work. We just had to change the temperature where the device turns on and off to 30 because the device was already hot. This worked.

### Definitive code
```python
#include "Arduino.h"
#include <WiFi.h>
#include <DHT11.h>
#include "ESP32MQTTClient.h"
const char *ssid = "iotempire-nc";
const char *pass = "bobby123";

DHT11 dht11(4);

// Test Mosquitto server, see: https://test.mosquitto.org
char *server = "mqtt://192.168.12.1:1883";

char *subscribeTopic = "switch/r1/set";
char *publishTopic = "temp-measure/temp1";

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
}

int pubCount = 0;

void loop()
{
    int temperature = dht11.readTemperature();
    String msg = String(temperature);
    Serial.println(temperature);
    mqttClient.publish(publishTopic, msg, 0, false);
    delay(2000);
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
    return ESP_OK;
}
```

### Picture 2 The temperature getting 30 or above and turning on the device
![Afbeelding van WhatsApp op 2023-10-19 om 12 30 06_db478543](https://github.com/FlorianRakos/IoT-NotCapricorns/assets/148061546/49eb70bf-17e8-402c-be59-9ecf0bb884a5)
![Afbeelding van WhatsApp op 2023-10-19 om 15 29 52_b6423ea3](https://github.com/FlorianRakos/IoT-NotCapricorns/assets/148061546/80f616d4-3bad-4c11-9fd5-fec2abe1b6ff)
![Afbeelding van WhatsApp op 2023-10-19 om 15 29 52_f864ab8f](https://github.com/FlorianRakos/IoT-NotCapricorns/assets/148061546/9ae0697c-d2f4-440c-beb4-4cbf4c5df763)

# Exercise 5
## Node-RED Intro
![Afbeelding van WhatsApp op 2023-10-19 om 12 51 13_34f01c8f](https://github.com/FlorianRakos/IoT-NotCapricorns/assets/148061546/5e60df6c-9696-4c6c-b84a-fd04bb722af2)

## Emergency Button
We created a breadboard that looks like this:
![Afbeelding van WhatsApp op 2023-10-19 om 14 57 57_ce453a2e](https://github.com/FlorianRakos/IoT-NotCapricorns/assets/148061546/52103184-f255-4132-8886-07a39ddcfd8d)

We added a LED light so we can see if the button press is registering.

We went on Node-red to look for the package we need and we found it. We checked with the debugging popup if our button presses came through after we made a MQTT start, and it did. So now we can go to work on the chatbot.
Discovering where to create the discord bot was complicated, but after some asking around we found it. We did watch a video on how to install a discord bot because we have never done anything like this and were very confused. ![Afbeelding van WhatsApp op 2023-10-19 om 15 53 05_d65df0e4](https://github.com/FlorianRakos/IoT-NotCapricorns/assets/148061546/c92b1478-b3c4-4292-8b91-5f23c015101d)


## Remote Control an Internal Device

