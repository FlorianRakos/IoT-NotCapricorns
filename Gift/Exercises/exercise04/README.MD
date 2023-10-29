# Exercise 04
on this day of exercises we continued working with microcintrollers and ESP32.

## Activities of today


### Emergency Button
in this task, our objective is to send a message to the IoTempire Discord server with a single button press. To achieve this, we started by configuring an ESP32 to detect a button press and transmit it to our local MQTT server. To capture the button input, we utilized the circuit described below (excluding the LED).
<br><br><img src="../../pictures/Circuit_NodeRED.jpg" width="500"><br><br>

After that, we flashed the following [script](/Team/code/ButtonBlinkHTTP/ButtonBlinkHTTP.ino) on the ESP32, to publish a Message to the MQTT server with the topic "status". After that we did we used NodeRED to subscribe to this topic and recieve the message. We also installed the node-red-contrib-discord-advanced module on NodeRED so we could communicate with discords API. 

Afterward, we established a Discord bot and obtained a token, along with a link to grant our teacher the necessary permissions for the bot to post messages in the IoTempire Discord server's sandbox thread. Unfortunately, when attempting to send the received message to the Discord server using the 'discordMessageManager' Node, we consistently encountered an 'Used disallowed intents' error. This suggests that our bot may not have received the necessary access rights from our teacher. We plan to address this issue tomorrow."
<br><br><img src="/Gift/PicturesGift/NodeRed-Button-Discord.jpg" width="500"><br><br>

while i was multi tasking i was able to do NODE-RED flow activity as the session was going it was quite difficult and confusing but with the help of the fellow group mate who was already familiar with NODE-Red i was able to put a meaningful result to the follow and we compile our work to our final work of the day.
<br><br><img src="/Gift/PicturesGift/node red flow day 4.jpg" width="500"><br><br>



## Problems and Conclusion
On this day my windows could not read the ESP32,apparantly some windows do not have drivers installed for ESP32 i had to ask the lecture to know if the he knows the suitable drives for my case sadly he had nothing for me.I kept serching for the driver up until i found it ,fortunetly enough it was a privalege for windows users inmy class as they encountered the same problem as mine and luckly fir them it was they were set and ready for them to install.