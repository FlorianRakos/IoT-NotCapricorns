# Exercise 05
On this day we focused on using The IoTempower and its frameworj.


## Ativities of this day

### Exploring IoTempower Services and Commands
I found it challenging or nearly impossible to determine the precise functions of the commands, so I opted to consult the documentation for clarification. The task related to exploring the documentation server and understanding the Ultrasonic sensors was quite confusing for m


### First Node
At first i watched the you tube tutorial for this exercise and i could not understand it.I went again and watched the tutorial video again for the second time to get clearance i was able to do that and followed my team mate as he was already doing it .Later realised chrome would not open NODE as it as marked as unsafe to exccess it by windows and then i asked the lecture that when he told me to use firefox then i was in.We set up a button on NODE RED that would publish to the broker on this topic"(mytestNode/)b1".On the other hand we had a circuit board ready to record button press on an ESP32
<br><br><img src="/Gift/PicturesGift/exercise05/Circuit_IoTempower.jpg" width="1000"><br><br>
Then, we set up the connection between the ESP32 and the Raspberry Pi to register it on the IoTempower gateway and deploy the code. Initially, it didn't work due to a configuration error where the wrong device was specified in the configuration file."
<br><br><img src="/Gift/PicturesGift/exercise05/Success.JPG" width="1000"><br><br>

Once the code is set up initially, you can send code updates over the Wi-Fi network, and there's no need to keep the device connected to the Raspberry Pi. When we attempted to register the button press, we faced difficulties as it didn't display any button press in the ArduinoIDE's debug. Later, we discovered that it had been working all along when using the 'mqtt_listen' command in the IoTempower shell.
<br><br><img src="/Gift/PicturesGift/exercise05/Button_Up_Down.JPG" width="1000"><br><br>

### Second Node
The following task involved adding a second node and controlling its ESP's LED by pressing the button on the first node. The setup for this node was similar to the first one, and I won't go into specific details about it. To enable this functionality, the 'setup.cpp' file was modified to include an LED, as shown in the picture below.
###
with the help of Floarin and me caught up in the dark florian was able make a NodeRed flow which subscribes to the MQTT topic "myTestNode/b1" which registered the button press. Next I added a switch node which checks for the value "up" as I only want react once on a given button press. Then I add a toggle node to switch between on and off every time.
<br><br><img src="/Gift/PicturesGift/exercise05/NodeRED_SecondNode.JPG" width="1000"><br><br>
 after a while of struggling we were able to oublish a MQTT message to this topic "secondNode/blue/set". The "/set" topic is automatically listened to by IoTempower and sets the value of the LED.
<br><br><img src="/Gift/PicturesGift/exercise05/OnOff_terminal.JPG" width="1000"><br><br>

### Button to sound and notification
The next activity was to induce a sound and a notification by pressing the button on the ESP32 circuit.Then, florian put together a straightforward NodeRED flow. He designed it to recognize button presses, accepting only the 'up' values.we then utilized the 'SoundOut' and 'Show Notification' nodes to generate both sound and notifications
<br><br><img src="/Gift/PicturesGift/exercise05/Sound_Playing.JPG" width="1000"><br><br>

### Text receiver
Finally, we aimed to have a small OLED screen that could receive text from the NodeRED user interface. To achieve this, we attached a 64x48 OLED screen on top of the ESP32. Then, I made changes to the 'setup.cpp' file to include the following code and re-deployed it. 
<br><br><img src="/Gift/PicturesGift/exercise05/Code_OLED.JPG" width="1000"><br><br>
The NodeRED flow was much easier, with a 'text input node' and an MQTT publish node. Input text was displayed in the NodeRED interface, as shown in the picture.
<br><br><img src="/Gift/PicturesGift/exercise05/OLED_Screen.jpg" width="1000"><br><br>


## Problems and Conclusion
At the beggining of the class i was lost it took a while to understand exactly what we were supposed to do because of an unclear scope we had?I build a voltage divider instead of completing what were were required to do that day.My other team mates were already on it so i joined them as one person was able to connect to the PI and initialize changes . At first the team was divided we were all lost but were were able to figure it out after long hours of the day. 