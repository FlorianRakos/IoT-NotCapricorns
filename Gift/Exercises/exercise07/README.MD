### Touch sensor(mainly in node-red)
On this task we are building an access control system using the RFID reader, the RGB led, the buzzer, the display, and the relay with the solenoid drawer lock.

First we wire up the RFID reader along with the RGB light.

We do some connedtions on Node-RED. When it is accepted the red light turns on, when it is denied it is turned off and the green one doesn't light up.

We make some changes and when is it accepted the green light turns on and when it is denied it turns off and the red light turns on. We figured that the green light is on but is very very light. It is hard to see.

We connect the buzzer to the breadboard and make it that when the red light turns on, we hear a short nasty sound. 

We tryed to implement the lock but it didn't work

### Touch sensor by using filters

We build a touch sensor based on the analog port with IoTempower on an Wemos D1 Mini and an attached cable that uses a Node-RED flow to generate pressed and released messages on MQTT.

We opened the IoTempire gateway and, created a new node folder and wrote "analog(a0)" on the setup.cpp

When we deployed it gave us an error. We tried different things and concluded that we missed a ; and we had the wrong device on the node.conf. When we changed the "Wemos D1 Mini" to "esp32minikit", we could deploy it correctly.

We connected a cable onto the breadboard:

In node red we connected a mqtt in node to a debug one and the following data started showing.

We applied a filter in node red so the data only shows when the state changes and a swich to sort out the 0 value from the others.

We then used the filter filter  binarize to generate touched/untouched the same.

We had some trouble adding the filter because we were following the format from the video tutorial, but didn't realize that in the documentation the format was different. We were missing a dot "."
In node red it wasn't working. I deleted the switch and filter nodes in node-red and it kinda worked but only the pressed were shown.
I chandged the code from pressed/released to touched/untouched and added again the filter and switch in red node and it magically worked. 

###  Moisture Sensor + Voltage Divider
In this task we build a voltage divider we have already built it before this  day and connected to the capacitive moisture sensor.

First we connected everything to the breadboard and then to the raspberry pie
In the gateway, in the setup-cpp document, we wrote the following command: analog(a0)
In node red we connected a mqtt in node to a debug and a lot of numbers appeared after deploying.
We tried to apply a filter in the gateway to filter out the numbers, but it didn't really work, so we applied the filter and a delay in node red because it was easier.
We added a switch to translate the numbers to the messages wet/dry
We had some truble gettin the dry/wet stats because we didn't know the number that separated what was wet from what was dry. After some trial and error, we found that the turning point was 70. Nodes in node red,