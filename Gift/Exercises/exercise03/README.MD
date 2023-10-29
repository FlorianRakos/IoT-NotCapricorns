# Exercise 03
For this exercise we had to work with MQTT protocol this was my first time woorking with it 


### Activities of the day


### Communicate with MQTT Server
I first installed PUtty in my machine so that i can be able to communicate with the PI which is the broker.After succefully connecting to the broker after several hiccups i was able to find the MQTT SERVER my windows could not find most probably because the server is not secured.
<br><br><img src="../../pictures/Putty.JPG" width="500"><br><br>
Later after connecting to the broker i was able to subscribe to a topic my group randomly created .I published some random text to the topic and the other group members would see it .on my side i was able to texts coming from other subcribers which are my team mates who were publishing to the same topic as mine.
<br><br><img src="../../pictures/SUB_PUB.JPG" width="500"><br><br>

### Use Wildcards
The next activity was to use the Wildcards "#" and "+" publish and recieve messages. This one was i failed to understand if  i managed to complete it or not.There was a time i though it was running only to think about it later that it is not working i was not certain with my conclusion and results.

<br><br><img src="../../pictures/MQTT_Wildcards.JPG" width="500"><br><br>

### Use MQTT_Action
We've employed the 'mqtt_action' command as well. This command allows for the execution of a particular task upon receiving a specific message. In the following instance, we utilized it to relay the received message to a different topic. Completing this task required three separate shell windows: one for registering the action, another for subscribing to the topic to which the action forwards, and a third for publishing the message to the topic that the action is monitoring.
<br><br><img src="../../pictures/MQTT-Action.JPG" width="500"><br><br>

### Make Air conditioning integrator
for this activity i struggled in class to exercute it.Reason being is that i was very well aware that i was using a sort of a linux software to communicate to the PI ,so i had to install Python for this activity but i only managed to do it after class in my res room.By the time we were at class i was able to complete with my team member which guided me into completing it although i struggled to to import an IOKNIT modules on visual code it took me almost 2 hours to figure it out.i know right sad XD. 


## Problems and Conclusion
we burnt one LED so we were stuck thinking something might be wrong with our circuit connection only to find out that the LED died and left us in grieve, but we were able to figure it ou luckily .Rather than that is the is the import that i struggled to import till this day as i am writing this portfolio i do not know how i managed .That drove me nuts for hours.
