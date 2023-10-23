# Teamfolder

Here we store all the exercises, pictures and projects Jorrit, Luca and Cristina did in the exercise lectures of IoT.
 
# Index
1. [Git and Kit](#1-git-and-kit)
   * 1.a [Partner, team git repo setup](#1a-partner-team-git-repo-setup)
   * 1.b [The Kit](#1b-the-kit)
2. [Breadboard, Blink, and Stories](#2-breadboard-blink-and-stories)
   * [2.b Breadboard and Electronic Prototyping](#2b-breadboard-and-electronic-prototyping)
   * [2.c Blink on the Wemos D1 Mini](#2c-blink-on-the-wemos-d1-mini)
   * [2.d Toggle Led With Button](#2d-toggle-led-with-button)
3. [IoTempower Gateway, Actors and Sensors](#3-iotempower-gateway-our-own-network)
   * [3.a Actors and Sensors with Web Requests](#3a-actors-and-sensors-with-web-requests)
   * [3.b Stories and Scenario](#3b-stories-and-scenario)
4. [MQTT Introduction and Simulators](#4-mqtt-introduction-and-simulators)
   * [4.a MQTT Basics](#4a-mqtt-basics)
   * [4.b MQTT Integration](#4b-mqtt-integration)
   * [4.c MQTT simulators](#c-mqtt-simulators)
   * [4.d MQTT on microcontroller](#4d-mqtt-on-microcontroller)
5. More Hardware and Integration with Node-RED
   * 5.a Node-RED intro
   * 5.b Emergency Button
   * 5.c Remote Control an Interval Device
6. Device Control with IoTempower
   * 6.a Exploring IoTempower Services and COmmands
   * 6.b First Node
   * 6.c Second Node 
   * 6.d Button to sound and notification
   * 6.e Text receiver

# 1. Git and Kit
## 1.a Partner, team git repo setup
Jorrit, Luca and Cristina partned up and with the rest of the group created this Git Repo. We downloaded the example provided on the documentation and decided on doing a similar organisation. We created different folders for each member of the group as well as the smaller groups and we all cloned the repository.

## 1.b The Kit     
We got one Kit, unpacked it and made a list with all the parts we found. We also identified what every piece is good for and added the bus system they use as an interface. Afterwards we googled tome properties of the respective bus on the respective device.
All this information can be seen in this table:

# 2. Breadboard, Blink, and Stories
## 2.a Feedback
We got feedback on repository and personal portfolio from one instructor.

## 2.b Breadboard and Electronic Prototyping
1. We connected the Wemos D1 Mini to our computer using a USB cable for testing.

2. We established a 5V and Ground (G) connection from the Wemos D1 Mini to the breadboard, deviating from the video instructions. Instead, we successfully connected Jorrit's ESP32 to the laptop.

3. We followed the video instructions to wire up the yellow and red LEDs with a 330-Ohm resistor. We took a photo as proof of the illuminated LEDs for our portfolio. During this step, Cristina and Luca, with limited prior experience, conducted the task with Jorrit's guidance. Initially, only the red LED lit up (<a href="https://private-user-images.githubusercontent.com/148061546/275552029-5a01f577-ebca-4f8e-ac2e-445e20e8e681.jpg?jwt=eyJhbGciOiJIUzI1NiIsInR5cCI6IkpXVCJ9.eyJpc3MiOiJnaXRodWIuY29tIiwiYXVkIjoicmF3LmdpdGh1YnVzZXJjb250ZW50LmNvbSIsImtleSI6ImtleTEiLCJleHAiOjE2OTgwNTYyMDUsIm5iZiI6MTY5ODA1NTkwNSwicGF0aCI6Ii8xNDgwNjE1NDYvMjc1NTUyMDI5LTVhMDFmNTc3LWViY2EtNGY4ZS1hYzJlLTQ0NWUyMGU4ZTY4MS5qcGc_WC1BbXotQWxnb3JpdGhtPUFXUzQtSE1BQy1TSEEyNTYmWC1BbXotQ3JlZGVudGlhbD1BS0lBSVdOSllBWDRDU1ZFSDUzQSUyRjIwMjMxMDIzJTJGdXMtZWFzdC0xJTJGczMlMkZhd3M0X3JlcXVlc3QmWC1BbXotRGF0ZT0yMDIzMTAyM1QxMDExNDVaJlgtQW16LUV4cGlyZXM9MzAwJlgtQW16LVNpZ25hdHVyZT0wNmVlNmE1YWI0YmE3NDE3NzUwYTc4NjNiOWY2MzkzNTRjMGFlYzNhYTExNzMxNzc1M2IzZTBhOGYxMDhkMWIyJlgtQW16LVNpZ25lZEhlYWRlcnM9aG9zdCZhY3Rvcl9pZD0wJmtleV9pZD0wJnJlcG9faWQ9MCJ9.YDVaVWP_esKzigIWmwio1y0oKcVmYoyttq_XfHLAWoU" target="_blank">See picture here</a>)
 while the yellow one remained off due to an incomplete circuit. Eventually, we all succeeded in lighting up both LEDs simultaneously by completing the circuit (<a href="https://private-user-images.githubusercontent.com/148061546/275551234-5f232988-ae03-47ed-86b1-913af74a7f50.jpg?jwt=eyJhbGciOiJIUzI1NiIsInR5cCI6IkpXVCJ9.eyJpc3MiOiJnaXRodWIuY29tIiwiYXVkIjoicmF3LmdpdGh1YnVzZXJjb250ZW50LmNvbSIsImtleSI6ImtleTEiLCJleHAiOjE2OTgwNTYyMDUsIm5iZiI6MTY5ODA1NTkwNSwicGF0aCI6Ii8xNDgwNjE1NDYvMjc1NTUxMjM0LTVmMjMyOTg4LWFlMDMtNDdlZC04NmIxLTkxM2FmNzRhN2Y1MC5qcGc_WC1BbXotQWxnb3JpdGhtPUFXUzQtSE1BQy1TSEEyNTYmWC1BbXotQ3JlZGVudGlhbD1BS0lBSVdOSllBWDRDU1ZFSDUzQSUyRjIwMjMxMDIzJTJGdXMtZWFzdC0xJTJGczMlMkZhd3M0X3JlcXVlc3QmWC1BbXotRGF0ZT0yMDIzMTAyM1QxMDExNDVaJlgtQW16LUV4cGlyZXM9MzAwJlgtQW16LVNpZ25hdHVyZT04YzJjNTA4OTFmNGRiZDhjY2IyNWVmOWYzNTM4YWJjZGMzZmM1N2E1ZWNhM2M5MjdiMjEwZjZmOTZmMzIyY2E0JlgtQW16LVNpZ25lZEhlYWRlcnM9aG9zdCZhY3Rvcl9pZD0wJmtleV9pZD0wJnJlcG9faWQ9MCJ9.zNfkOteAuB5lsVqzkuVK5enm8rpBM7T3ckeyqIp_vxc" target="_blank">See picture here</a>)

4. We added the button as demonstrated in the video. We documented the steps, confirmed its functionality, and captured a photo of the setup for our portfolio. Initially, we encountered an issue with an incomplete circuit, but we resolved it. Now, the button works, allowing both lights to be activated simultaneously. In a subsequent attempt, we placed the button in a different location. Initially, only the red LED lit up, but we discovered that the yellow LED was inserted incorrectly with the long and short legs reversed. After making the adjustment, both LEDs now function as intended.

## 2.c Blink on the Wemos D1 Mini
Blink on the Wemos D1 Mini Exercise:

1. We connected D5 to the positive (as the ESP32 doesn't have D6). We then inserted the LED with its positive leg connected and a resistor in the negative leg. Additionally, we added a wire going from the negative leg to the ground.

2. To determine the correct pin number to use instead of D6, we referred to the ESP32 pinout. This reference indicated that we needed to use Pin 5.

3. To create asynchronous blinking (non-synchronized), we utilized a built-in command to control one of the onboard LEDs and added another LED on Pin 5. Initially, our code resulted in the built-in LED blinking, but the additional one did not. We realized that we used a different pin number. We corrected it to Pin 5, and now both LEDs blinked, but not in sync.

4. To make the LEDs blink in sync, we kept the same setup but switched the High and Low voltage. This adjustment made both LEDs blink in perfect synchronization.

## 2.d Toggle Led With Button
Add a button to the breadboard, connecting the button to ground and a GPIO port like D5.
1. We correctly placed the button in the designated spot.

Test out the DigitalReadSerial example.
1. We tried it, and the example worked as expected.

Adjust the pushButton to D5 (or the respective GPIO port number).
1. We made the adjustment as required, and it worked properly.

Replace pinMode INPUT with INPUT_PULLUP (consider why this is better and what the alternative would be).
1. We incorporated the change in the code, as specified.

Flash and check the serial monitor. Taking a screenshot when this is functioning correctly is a good addition to your portfolio. Remember to capture photos during your setup.
1. We implemented the change in the code and confirmed the functionality. We took a screenshot to provide proof for our portfolio.

Write an Arduino sketch that allows you to toggle the LED on D6 with a push of the button.
1. We successfully created the code. However, we encountered a problem where the LED continued blinking if we held the button briefly. This issue relates to hysteresis, a delay between input and output when a system changes direction. Jorrit had previously faced this problem, so we were aware of it.

2. Outcome: We now have a functional LED that can toggle on and off with a button press, but it keeps blinking if the button is held down.
- [exercise01][1]
...

[1]: /Teamfolder/exercises/exercise01
...

### Projects

- [project01][7]
...

[7]: /Teamfolder/project
...

### Pictures
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

# 3. IoTempower Gateway - Our Own Network

## 3.a Actors and Sensors with Web Requests

## 3.b Stories and Scenario

# 4. MQTT Introduction and Simulators
## 4.a MQTT Basics
For this task we sent messages to each other using MQTT
To do this activity we simply installed VSMqtt extension in Visual Studio Code and we added a profile. We subscribed to eachothers topic and send messages
![image](https://github.com/FlorianRakos/IoT-NotCapricorns/assets/113584087/8f6a73c2-5e5e-4fac-93ba-071a8f8e7f47)

We also used wildcards, shown below:
![image](https://github.com/FlorianRakos/IoT-NotCapricorns/assets/113584087/17d77b67-114a-4888-a478-3e1164070799)


## 4.b MQTT Integration
create a virtual environment python -m venv /path/to/new/virtual/environment (download git) i didn't have it installed Paste the iotempire example on how to connect a button node with a switch changing the host to our raspberry pie number and follow tutorial "Knit Your IoT Network with IoTknit" set a mosquitto pub and a mosquitto sub connected to the script. We generated a bash script on ChatGPT and we installed PuTTY to run it. MQTT simulators task complete start the hardware part "MQTT on microcontroller" esp32 not recognisable on computer intalling driver and computer restart terminals closed but scrips saved no time so call it a day

problem: we struggled getting the status of the AC because it only showed OFF

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

## 4.c MQTT simulators
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
## 4.d MQTT on microcontroller
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

## 5.a Node-RED Intro
![Afbeelding van WhatsApp op 2023-10-19 om 12 51 13_34f01c8f](https://github.com/FlorianRakos/IoT-NotCapricorns/assets/148061546/5e60df6c-9696-4c6c-b84a-fd04bb722af2)

## 5.b Emergency Button
We created a breadboard that looks like this:
![Afbeelding van WhatsApp op 2023-10-19 om 14 57 57_ce453a2e](https://github.com/FlorianRakos/IoT-NotCapricorns/assets/148061546/52103184-f255-4132-8886-07a39ddcfd8d)

We added a LED light so we can see if the button press is registering.

We went on Node-red to look for the package we need and we found it. We checked with the debugging popup if our button presses came through after we made a MQTT start, and it did. So now we can go to work on the chatbot.
Discovering where to create the discord bot was complicated, but after some asking around we found it. We did watch a video on how to install a discord bot because we have never done anything like this and were very confused. ![Afbeelding van WhatsApp op 2023-10-19 om 15 53 05_d65df0e4](https://github.com/FlorianRakos/IoT-NotCapricorns/assets/148061546/c92b1478-b3c4-4292-8b91-5f23c015101d)


## 5.c Remote Control an Internal Device

# 6. Device Control with IoTempower
##  - 6.a Exploring IoTempower Services and Commands

##  - 6.b First Node

##  - 6.c Second Node

##  - 6.d Button to sound and notification

##  - 6.e Text receiver

