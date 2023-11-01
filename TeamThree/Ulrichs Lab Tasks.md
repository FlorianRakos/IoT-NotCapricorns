# Teamfolder

Here we store all the exercises, pictures and projects Jorrit, Luca and Cristina did in the exercise lectures from Ulrich.
 
## Index
1. [Git and Kit](#1-git-and-kit)
   * [1.a Partner, team git repo setup](#1a-partner-team-git-repo-setup)
   * [1.b The Kit](#1b-the-kit)
2. [Breadboard, Blink, and Stories](#2-breadboard-blink-and-stories)
   * [2.b Breadboard and Electronic Prototyping](#2b-breadboard-and-electronic-prototyping)
   * [2.c Blink on the Wemos D1 Mini](#2c-blink-on-the-wemos-d1-mini)
   * [2.d Toggle Led With Button](#2d-toggle-led-with-button)
3. [IoTempower Gateway Actors and Sensors](#3-iotempower-gateway-actors-and-sensors)
   * [3.a Actors and Sensors with Web Requests](#3a-actors-and-sensors-with-web-requests)
   * [3.b Stories and Scenario](#3b-stories-and-scenario)
4. [MQTT Introduction and Simulators](#4-mqtt-introduction-and-simulators)
   * [4.a MQTT Basics](#4a-mqtt-basics)
   * [4.b MQTT Integration](#4b-mqtt-integration)
   * [4.c MQTT simulators](#c-mqtt-simulators)
   * [4.d MQTT on microcontroller](#4d-mqtt-on-microcontroller)
5. [More Hardware and Integration with Node-RED](#5-more-hardware-and-integration-with-node-red)
   * [5.a Node-RED intro](#5a-node-red-intro)
   * [5.b Emergency Button](#5b-emergency-button)
   * [5.c Remote Control an Interval Device](#5c-remote-control-and-interval-device)
6. [Device Control with IoTempower](#6-device-control-with-iotempower)
   * [6.a Exploring IoTempower Services and Commands](#6a-exploring-iotempower-services-and-commands)
   * [6.b First Node](#6b-first-node)
   * [6.c Second Node](#6c-second-node)
   * [6.d Button to sound and notification](#6d-button-to-sound-and-notification)
   * [6.e Text receiver](#6e-text-receiver)
   * [6.f RFID Reader](#6f-rfid-reader)
7. [Acces Control System](#7-access-control-system)
   * [7.a1 New Actors](#7a1-new-actors)
   * [7.a2 Project 1 (Group)](#7a2-project-1-(group))
   * [7.b Analog Touch Sensor](#7b-analog-touch-sensor)
   * [7.c Moisture Sensor](#7c-moisture-sensor)
   * [7.d Optional](#7d-optional)
8. [Final IOT Project](#8-final-iot-project)
9. [Volkers Part](#9-volkers-part)
10. [Presentation](#10-presentation)

## 1. Git and Kit
### 1.a Partner, team git repo setup
Jorrit, Luca and Cristina partned up and with the rest of the group created this Git Repo. We downloaded the example provided on the documentation and decided on doing a similar organisation. We created different folders for each member of the group as well as the smaller groups and we all cloned the repository.

### 1.b The Kit     
We got one Kit, unpacked it and made a list with all the parts we found. We also identified what every piece is good for and added the bus system they use as an interface. Afterwards we googled tome properties of the respective bus on the respective device.
All this information can be seen in this table:

## 2. Breadboard, Blink, and Stories
### 2.a Feedback
We got feedback on repository and personal portfolio from one instructor.

### 2.b Breadboard and Electronic Prototyping
1. We connected the Wemos D1 Mini to our computer using a USB cable for testing.

2. We established a 5V and Ground (G) connection from the Wemos D1 Mini to the breadboard, deviating from the video instructions. Instead, we successfully connected Jorrit's ESP32 to the laptop.

3. We followed the video instructions to wire up the yellow and red LEDs with a 330-Ohm resistor. We took a photo as proof of the illuminated LEDs for our portfolio (<a href="https://github.com/FlorianRakos/IoT-NotCapricorns/assets/148061546/98668160-db2b-46b5-919b-148b9e33240b
" target="_blank">See picture here</a>). During this step, Cristina and Luca, with limited prior experience, conducted the task with Jorrit's guidance. Initially, only the red LED lit up while the yellow one remained off due to an incomplete circuit. Eventually, we all succeeded in lighting up both LEDs simultaneously by completing the circuit (<a href="https://github.com/FlorianRakos/IoT-NotCapricorns/assets/148061546/cbaed91c-b59d-44fe-9103-939511387c8d" target="_blank">See picture here</a>)

4. We added the button as demonstrated in the video. We documented the steps, confirmed its functionality, and captured a photo of the setup for our portfolio. Initially, we encountered an issue with an incomplete circuit, but we resolved it. Now, the button works, allowing both lights to be activated simultaneously. In a subsequent attempt, we placed the button in a different location. Initially, only the red LED lit up, but we discovered that the yellow LED was inserted incorrectly with the long and short legs reversed. After making the adjustment, both LEDs now function as intended (<a href="https://github.com/FlorianRakos/IoT-NotCapricorns/assets/148061546/a11244e0-5afe-48b2-ac59-61101e0a18ea
" target="_blank">See picture here</a>).

### 2.c Blink on the Wemos D1 Mini
Blink on the Wemos D1 Mini Exercise:

1. We connected D5 to the positive (as the ESP32 doesn't have D6). We then inserted the LED with its positive leg connected and a resistor in the negative leg. Additionally, we added a wire going from the negative leg to the ground.

2. To determine the correct pin number to use instead of D6, we referred to the ESP32 pinout. This reference indicated that we needed to use Pin 5.

3. To create non-synchronized blinking, we used a built-in command to control one of the onboard LEDs and added another LED on Pin 5. Initially, our code resulted in the built-in LED blinking, but the additional one did not (<a href="https://github.com/FlorianRakos/IoT-NotCapricorns/assets/148061546/83d095a7-00aa-4790-83b9-5ce4986efee8
" target="_blank">See picture 1 here</a>), (<a href="https://github.com/FlorianRakos/IoT-NotCapricorns/assets/148061546/8ee8f736-3b24-44e8-b6bb-6ead05b08066" target="_blank">See picture 2 here</a>). We realized that we used a different pin number. We corrected it to Pin 5, and now both LEDs blinked, but not in sync.

4. To make the LEDs blink in sync, we kept the same setup but switched the High and Low voltage. This adjustment made both LEDs blink in perfect synchronization (<a href="https://github.com/FlorianRakos/IoT-NotCapricorns/assets/148061546/4a5a858d-dd20-44d5-b659-88307596b9a3" target="_blank">See picture 1 here</a>), (<a href="https://github.com/FlorianRakos/IoT-NotCapricorns/assets/148061546/1ec2ecf8-6864-40cf-a140-72f3ea6bf8be" target="_blank">See picture 2 here</a>).

## 2.d Toggle Led With Button 
- Add a button to the breadboard, connecting the button to ground and a GPIO port like D5.
  * We correctly placed the button in the right spot (<a href="https://github.com/FlorianRakos/IoT-NotCapricorns/assets/148061546/6743522d-ca32-48b9-a11f-5559176af15c" target="_blank">See picture here</a>).

- Test out the DigitalReadSerial example.
  * We tried it, and the example worked as expected (<a href="https://github.com/FlorianRakos/IoT-NotCapricorns/assets/148061546/952be337-14f4-4c65-a2cb-6c8251380858" target="_blank">See picture here</a>).

- Adjust the pushButton to D5 (or the respective GPIO port number).
  * We made the adjustment as required, and it worked properly.

- Replace pinMode INPUT with INPUT_PULLUP (consider why this is better and what the alternative would be).
  * We incorporated the change in the code, as specified (<a href="https://github.com/FlorianRakos/IoT-NotCapricorns/assets/148061546/952be337-14f4-4c65-a2cb-6c8251380858" target="_blank">See picture here</a>).

- Flash and check the serial monitor. Taking a screenshot when this is functioning correctly is a good addition to your portfolio. Remember to capture photos during your setup.
  * We implemented the change in the code and confirmed the functionality. We took a screenshot to provide proof for our portfolio.

- Write an Arduino sketch that allows you to toggle the LED on D6 with a push of the button.
  * We successfully created the code. However, we encountered a problem where the LED continued blinking if we held the button briefly. This issue relates to hysteresis, a delay between input and output when a system changes direction. Jorrit had previously faced this problem, so we were aware of it.

- Outcome: We now have a functional LED that can toggle on and off with a button press, but it keeps blinking if the button is held down.

## 3. IoTempower Gateway Actors and Sensors

### 3.a Actors and Sensors with Web Requests

### 3.b Stories and Scenario
Foot Mouse & Accessibility Software Scenario

Company: LoudWhisper, Project Manager: Roberto, Employee: Matthijs, CEO: Pieter

At LoudWhisper's Amsterdam office, Roberto struggles during a presentation due to hand tremors from Parkinson's. Every attempt to highlight a key point results in the mouse pointer jittering across the screen.

Matthijs observes Roberto's difficulties and, after the presentation, approaches Pieter with concerns about Roberto's challenges with the traditional mouse.

Pieter introduces Roberto to a mouse smoothing software specifically designed for individuals with hand tremors. This software compensates for erratic movements and can be calibrated for individual needs.

Roberto is eager to try any technology that might help him overcome his challenges.

Pieter and Roberto set a day to install and calibrate the software. Pieter guides Roberto through the settings, ensuring the software is tailored to Roberto's unique tremor patterns.

To calibrate the software, Roberto needs to move the mouse in a big circle shown on the screen, a square and a triangle, allowing the software to record and analyze the tremor patterns. Then Roberto has to press some points shown on the screen, and finally follow a moving circle for 15 seconds. A machine learning algorithm observes the patterns of Roberto’s tremors from the movements Roberto makes. It uses these to set parameters for the stabilization tool.

Using the data, the software provides initial calibration suggestions. Roberto tests these, making small pointer movements to assess the smoothing's effectiveness.

Roberto notices certain instances where the smoothing is too aggressive, causing a lag in response. An algorithm adjusts the settings to find a balance between smoothing and responsiveness.

After several iterations, Roberto identifies optimal settings that provide him with enhanced control without noticeable lag.

After a week of using the new software, Roberto feels more confident during computer tasks. The pointer now moves smoothly, making his tasks less challenging.

At the next team meeting, Roberto presents with renewed confidence. The noticeable improvement in his mouse control leads to several questions from the team.

Roberto uses this opportunity to share the benefits of the mouse smoothing software, demonstrating its features and the transformative impact it has had on his daily work.

Inspired by this success, WisperTech considers implementing more inclusive tech solutions, with Roberto leading the way in advocating for greater workplace accessibility.

### 23/10/2023 Story Update
Company: LoudWhisper, Project Manager: Roberto, Employee: Roos, CEO: Pieter

At LoudWhisper's Amsterdam office, Roos is working with her footmouse.

Roos is very thirsty and didn’t remember to ask for a glass of water when she arrived. Everyone seems so focused and not noticing her need.

Roos presses the button on her footmouse (or voice command or pull string) a blinking light (buzz or whatever) turns on. 

Roberto’s, watch starts to beep and blink, and he is aware that she needs something.

Roberto goes to her table and she explains her need. He brings her a glass of water with a straw.

Her need is stored in the cloud


## 4. MQTT Introduction and Simulators
### 4.a MQTT Basics
For this task we sent messages to each other using MQTT
To do this activity we simply installed VSMqtt extension in Visual Studio Code and we added a profile. We subscribed to eachothers topic and send messages
(<a href="https://github.com/FlorianRakos/IoT-NotCapricorns/assets/113584087/8f6a73c2-5e5e-4fac-93ba-071a8f8e7f47" target="_blank">See picture here</a>)

We also used wildcards, shown below:
(<a href="https://github.com/FlorianRakos/IoT-NotCapricorns/assets/113584087/17d77b67-114a-4888-a478-3e1164070799" target="_blank">See picture here</a>)

We also used our consoles to talk to each other, shown below:
(<a href="https://github.com/FlorianRakos/IoT-NotCapricorns/assets/113584087/d282b68b-02a1-483b-9b64-efed6a489516" target="_blank">See picture here</a>)

### 4.b MQTT Integration
To rebuild the air conditioning integratior component from the video, we first created a virtual environment in python using the following command: 
```python
-m venv /path/to/new/virtual/environment
```
After that, we download git, because we didn't have it installed. We pasted the iotempire example on how to connect a button node with a switch, changing the host to our raspberry pie number, and followed the tutorial "Knit Your IoT Network with IoTknit". We set a mosquitto pub and a mosquitto sub that were connected to the script. 

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

### 4.c MQTT simulators
We generated two bash scripts on ChatGPT, one for the temperature simulator, and one for the AC simulator, and we installed PuTTY to run them. 


problem: we struggled getting the status of the AC because it only showed OFF
(<a href="https://github.com/FlorianRakos/IoT-NotCapricorns/assets/113584087/ed6f828a-65f9-4be5-8f38-2aa4c8957918" target="_blank">See picture here</a>)

resolved:
(<a href="https://github.com/FlorianRakos/IoT-NotCapricorns/assets/113584087/62a23ca0-b329-4674-836a-e01c2f08a487" target="_blank">See picture here</a>)


#### AC simulator Bash code
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

#### Temperature simulator Bash code
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
### 4.d MQTT on microcontroller
On our first try, Cristina's computer did not recognise the esp32 and when intalling the driver, the computer restarted and all the terminals were closed. Thankfully, all the scrips were saved, but we called it a day and continued the following.
<br><br>
We first started with connecting the wires to the temperature sensor. We needed to work around this because we had no female to male cables, so we used some normal connecting wires and put them in the female output and then in the breadboard. From the breadboard we connected 3 wires to the Esp32.

#### Picture 1 setting up the breadboard
(<a href="https://github.com/FlorianRakos/IoT-NotCapricorns/assets/148061546/63804990-03c4-4fba-a0ac-d36147a75c26" target="_blank">See picture here</a>)

#### Coding
Our steps:
  * We are now going to work on the laptop in Arduino IDE. We got a code from the library and we are editing it so we can work with it. We edited the esp32mqttclient "hellotomyself" code. We use this so we can use mqtt.
  * We are looking for another example. We are selecting the DHT11 example. We don't know if it will work, but we are trying it. We selected the "readtemperature" option from DHT11.
  * We tried to upload, but we forgot that we disconnected the ESP from the laptop. Now we connected it again and uploaded the program.
  * We get a checksum mismatch while reading from DHT11 error code. So we need to change the pin number, we forgot that we were using pin 4 and not the default pin 2.
  * We got an output. It gives us a temperature of 26 degrees (picture).
  * We are trying to heat it up by using our hands. We put our hands around it and the temperature is going up. It went to 27, and even to 28.
  * So now we are going to merge both our codes, and trying to make it 1 working code.
  * We have combined them and are now testing the code. The output gives us the temperature only once. We don't want this.
  * We change the seconds for when it gives us a value every 2 seconds. Somehow this does not really work. It gives us a value each time it changes.
  * So we now change the subscribetopic in the top to "switch /r1/set". We do this because it was not subscribed to anything.
  * Now we have it subscribed to the AC. We get a very weird error message now. It has symbols and text.
  * It now says we can not connect to the internet. It does not send the temperatue anymore.
  * We changed the beginning of the code. We entered a serial_begin so we can use the serial_print command. This made it work. We just had to change the temperature where the device turns on and off to 30 because the device was already hot. This worked.

#### Definitive code
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

#### Picture 2 The temperature getting 30 or above and turning on the device
(<a href="https://github.com/FlorianRakos/IoT-NotCapricorns/assets/148061546/49eb70bf-17e8-402c-be59-9ecf0bb884a5" target="_blank">See picture 1 here</a>)
(<a href="https://github.com/FlorianRakos/IoT-NotCapricorns/assets/148061546/80f616d4-3bad-4c11-9fd5-fec2abe1b6ff " target="_blank">See picture 2 here</a>)
(<a href="https://github.com/FlorianRakos/IoT-NotCapricorns/assets/148061546/9ae0697c-d2f4-440c-beb4-4cbf4c5df763" target="_blank">See picture 3 here</a>)


## 5. More Hardware and Integration with Node RED
### 5.a Node-RED Intro
(<a href="https://github.com/FlorianRakos/IoT-NotCapricorns/assets/148061546/5e60df6c-9696-4c6c-b84a-fd04bb722af2" target="_blank">See picture here</a>)

### 5.b Emergency Button
We created a breadboard that looks like this:
(<a href="https://github.com/FlorianRakos/IoT-NotCapricorns/assets/148061546/52103184-f255-4132-8886-07a39ddcfd8d " target="_blank">See picture here</a>)

We added a LED light so we can see if the button press is registering.

We went on Node-red to look for the package we need and we found it. We checked with the debugging popup if our button presses came through after we made a MQTT start, and it did. So now we can go to work on the chatbot.
Discovering where to create the discord bot was complicated, but after some asking around we found it. We did watch a video on how to install a discord bot because we have never done anything like this and were very confused. (<a href="https://github.com/FlorianRakos/IoT-NotCapricorns/assets/148061546/c92b1478-b3c4-4292-8b91-5f23c015101d" target="_blank">See picture here</a>)

### 5.c Remote Control an Internal Device

## 6. Device Control with IoTempower
### 6.a Exploring IoTempower Services and Commands
We wrote both the tool suport and documentation on a drive document linked [HERE](https://docs.google.com/document/d/1SMFhRlTP5ns-kHlcEid_c506uAFfQpNq/edit?usp=sharing&ouid=107652657307043314785&rtpof=true&sd=true)
### 6.b First Node

### 6.c Second Node

### 6.d Button to sound and notification

### 6.e Text receiver

### 6.f RFID reader
Description
* We first plugged rfid to the breadboard and wired it to the d1 mini following the wiring in the documentation like so:
(<a href="https://github.com/FlorianRakos/IoT-NotCapricorns/assets/113584087/e3db2f98-dafa-405d-be24-ccf9c68afb4b" target="_blank">See RFID Circuit here</a>).
* We initialise the serial 
* It fails probably because of missing ;
* It keeps failing until we realise we forgot to wire the 3.3V to the 3V3.
* We connect the following functions on Node-red:
(<a href="https://github.com/FlorianRakos/IoT-NotCapricorns/assets/113584087/41ff379a-3d12-4377-984c-67f2a94acf82" target="_blank">See RFID NodeRED here</a>).

* when the accept and denied worked, we added the functionality where when pressing the button it is reset and a "scan tag" message is displayed. Proof here:
(<a href="https://github.com/FlorianRakos/IoT-NotCapricorns/assets/113584087/10744393-c6b3-4b78-8677-b52c70d78fbf" target="_blank">See Scan Tag here</a>).

(<a href="https://github.com/FlorianRakos/IoT-NotCapricorns/assets/113584087/56400772-bced-49b7-8711-15dc333b2ff2" target="_blank">See RFID Scan here</a>).

Accept:
(<a href="https://github.com/FlorianRakos/IoT-NotCapricorns/assets/113584087/3698a475-4829-47b7-9324-57c9460c5822" target="_blank">See RFID Accept here</a>).

Denied:
(<a href="https://github.com/FlorianRakos/IoT-NotCapricorns/assets/113584087/fd6d1fc4-7a6a-4236-809d-2a236abdb443" target="_blank">See RFID Deny here</a>).

## 7. Access Control System
### 7.a1 New Actors
On the fisrt part of this task, we used a slider in Node-RED to control the brightness (duty cycle) of the LED. 	
 * We first hooked up a simple LED with a resistor to a GPIO port of a Wemos D1 Mini.
 * The led wouldn't lit up and in the gateway we were receiving an error over and over again. We first thought it was a missing ";" but it still gave us the error
(<a href="https://github.com/FlorianRakos/IoT-NotCapricorns/assets/113584087/c13c3a43-7f82-42b3-a12e-826d5d1ed7d4" target="_blank">See PWM Error here</a>).

 * We figured out that it wasn't finding the ESP32WM so we updated the gateway. The error didn't appear but the light was still off
 * After more attempts, we decided on changing the LED light and it worked.
LED dimm
(<a href="https://github.com/FlorianRakos/IoT-NotCapricorns/assets/113584087/45f5fb92-c5aa-4445-b91d-4cf336a92740" target="_blank">See PWM LED dimm here</a>).
LED Bright
(<a href="https://github.com/FlorianRakos/IoT-NotCapricorns/assets/113584087/d256d24d-a745-4d1a-8308-b5ae41a00441" target="_blank">See PWM LED bright here</a>).

For the next part of the exercise we replaced the LED with the buzzer
 * We did some research and found that our specific buzzer has a frequency of 3.1 kHz so we created the slider from 0 to 3000 and we played different tones
Proff:
(<a href="https://github.com/FlorianRakos/IoT-NotCapricorns/assets/113584087/10cde51b-50a6-4fc0-9620-e5191b8d774d" target="_blank">See PWM Buzzer Sound Low Frequency here</a>).

(<a href="https://github.com/FlorianRakos/IoT-NotCapricorns/assets/113584087/86bcb57b-e11a-48fd-bf05-136f54734037" target="_blank">See PWM Buzzer here</a>).

NodeRED
(<a href="https://github.com/FlorianRakos/IoT-NotCapricorns/assets/113584087/015a0eca-7e2b-4ad7-b8ee-fe61080db199" target="_blank">See PWM Buzzer NodeRED here</a>).

<br><br>
The last part of the task consisted on using the rgb_single IoTempower command to control the RGB led, and using a color-picker in Node-RED to send a color value to the LED.
 * We conected the single rgb led with 3 resistors and could manage to do the serial on the command on the documentation.
 * We tried to do it with the 3 colors seperated and it worked.
 * We had some trouble because of that on node red because we had 3 different variables (R,G,B)
(<a href="https://github.com/FlorianRakos/IoT-NotCapricorns/assets/113584087/0f736e14-f126-4a7b-9200-f77d64707fc7"     target="_blank">See RGB Try here</a>)

 * After many attempts and comments from other people we concluded that The dev_rgb_base.h library doesn't work so we will skip this activity for now
(<a href="https://github.com/FlorianRakos/IoT-NotCapricorns/assets/113584087/f3196d5b-6d7c-45fc-89be-a98c138f9266"     target="_blank">See RGB Error Console here</a>)

 * Nevermind we are on it again
 * Only the blue value works but here is some proof
(<a href="https://github.com/FlorianRakos/IoT-NotCapricorns/assets/113584087/144f5829-39c5-4e11-b023-03a0a5589bb5"     target="_blank">See RGB Light Console here</a>)

### 7.a2 Project 1
On this task we are building an access control system using the RFID reader, the RGB led, the buzzer, the display, and the relay with the solenoid drawer lock. 
 * First we wire up the RFID reader along with the RGB light.
 * We do some connedtions on Node-RED. When it is accepted the red light turns on, when it is denied it is turned off and the green one doesn't light up.
 * We make some changes and when is it accepted the green light turns on and when it is denied it turns off and the red light turns on. We figured that the green light is on but is very very light. It is hard to see.
 * We connect the buzzer to the breadboard and make it that when the red light turns on, we hear a short nasty sound.
   (<a href="https://github.com/FlorianRakos/IoT-NotCapricorns/assets/113584087/4be338d7-de39-448b-b68a-97d5719df2a5"     target="_blank">See RFID System Console here</a>)

 * We tryed to implement the lock but it didn't work.
Code on IoTempower:
(<a href="https://github.com/FlorianRakos/IoT-NotCapricorns/assets/113584087/22056f13-1f3c-4be6-b266-b479ee087b85" target="_blank">See Code on IoTempower here</a>)
Node-RED system:
(<a href="https://github.com/FlorianRakos/IoT-NotCapricorns/assets/113584087/4585904c-cdc6-4b57-a5cd-a690605fbdd9" target="_blank">See NodeRed here</a>)

node-red + bread board + gateway
(<a href="https://github.com/FlorianRakos/IoT-NotCapricorns/assets/113584087/1106a4c7-32e6-477b-91f4-a0a4e45aa0c4" target="_blank">See Accesscontrollsystem Closed here</a>)

(<a href="https://github.com/FlorianRakos/IoT-NotCapricorns/assets/113584087/a6eafdbd-91ad-4f03-baac-49514f6a53ae" target="_blank">See Accesscontrollsystem Open here</a>)

breadboard setup: 
(<a href="https://github.com/FlorianRakos/IoT-NotCapricorns/assets/113584087/67fe49df-166b-4dc4-b963-55f44866678d " target="_blank">See Accesscontrollsystem Circuit here</a>)


### 7.b Analog Touch Sensor
We build a touch sensor based on the analog port with IoTempower on an Wemos D1 Mini and an attached cable that uses a Node-RED flow to generate pressed and released messages on MQTT.
 * We opened the IoTempire gateway and, created a new node folder and wrote "analog(a0)" on the setup.cpp
 * When we deployed it gave us an error. We tried different things and concluded that we missed a ; and we had the wrong device on the node.conf. When we changed the "Wemos D1 Mini" to "esp32minikit", we could deploy it correctly.
 * We connected a cable onto the breadboard:
 
 * In node red we connected a mqtt in node to a debug one and the following data started showing:
(<a href="https://github.com/FlorianRakos/IoT-NotCapricorns/assets/113584087/12c60d3d-4d14-466e-a67c-bbbba2bbfa0e" target="_blank">See Analog response here</a>)

 * We applied a filter in node red so the data only shows when the state changes and a swich to sort out the 0 value from the others
(<a href="https://github.com/FlorianRakos/IoT-NotCapricorns/assets/113584087/d744662a-5944-4103-9384-c34faafacc38" target="_blank">See Analog messages here</a>)
(<a href="https://github.com/FlorianRakos/IoT-NotCapricorns/assets/113584087/dbab11e7-9cc4-409c-9a41-48e6919b12c5" target="_blank">See Analog proff here</a>)

We then used the filter filter_binarize to generate touched/untouched the same. 
 * We had some trouble adding the filter because we were following the format from the video tutorial, but didn't realize that in the documentation the format was different. We were missing a dot "."
 * In node red it wasn't working. I deleted the switch and filter nodes in node-red and it kinda worked but only the pressed were shown.
(<a href="https://github.com/FlorianRakos/IoT-NotCapricorns/assets/113584087/221b369f-00ce-43bd-9346-54f01175ab47" target="_blank">See Analog pressedProblem here</a>)
 * I chandged the code from pressed/released to touched/untouched and added again the filter and switch in red node and it magically worked. 
(<a href="https://github.com/FlorianRakos/IoT-NotCapricorns/assets/113584087/ce2253ad-2cb6-4e76-af68-30e9c03fc79f" target="_blank">See picture here</a>)
(<a href="https://github.com/FlorianRakos/IoT-NotCapricorns/assets/113584087/55cc7a9a-d516-493d-ba99-0faa1949d98c" target="_blank">See Analog 2proff here</a>)

### 7.c Moisture Sensor
In this task we build a voltage divider connected to the capacitive moisture sensor. 
 * First we connected everything to the breadboard and then to the raspberry pie
 * In the gateway, in the setup-cpp document, we wrote the following command: analog(a0);
(<a href="https://github.com/FlorianRakos/IoT-NotCapricorns/assets/113584087/d455641a-c30b-4f1b-87a8-e28636ecdc70" target="_blank">See picture here</a>)
 * In node red we connected a mqtt in node to a debug and a lot of numbers appeared after deploying.
 * We tried to apply a filter in the gateway to filter out the numbers, but it didn't really work, so we applied the filter and a delay in node red because it was easier.
 * We added a switch to translate the numbers to the messages wet/dry
 * We had some truble gettin the dry/wet stats because we didn't know the number that separated what was wet from what was dry. After some trial and error, we found that the turning point was 70.
Nodes in node red:
(<a href="https://github.com/FlorianRakos/IoT-NotCapricorns/assets/113584087/de49a756-fccb-459e-be5a-114bfffd753d" target="_blank">See Moisture nodered here</a>)

Wet:
(<a href="https://github.com/FlorianRakos/IoT-NotCapricorns/assets/113584087/b9df2092-a206-414f-8314-cfec22069612" target="_blank">See Wet Sensor here</a>)
Dry:
(<a href="https://github.com/FlorianRakos/IoT-NotCapricorns/assets/113584087/07027208-4ba3-44e1-b7df-14400225d8c0" target="_blank">See Dry Sensor here</a>)

### 7.d Optional
We did not do the optional exercise.

## 8. Final IOT Project
## 9. Volkers Part
See:
"Link to folder and document is being created"
## 13. Presentation
