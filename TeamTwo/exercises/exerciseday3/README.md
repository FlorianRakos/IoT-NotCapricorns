### selection of exchange formats
-TEXT
Suitability :Text based formats,such as plain text or CSV,can be suitable for IOT systems inn some cases .for instance,,when the data human readable , and simplicity is a priority ,text formats can work well.they can used at various level
why:Tect formats are lightweight and easy to parse.They are well-suitated for scenarios where human interaction and debugging is necessary
-XML
suitability: XML can b esuitable for iot systems when there’s is no need for sturcture data with well-defined schemas.it can be used for configurationsn files, devices profiles and metadata.
why:XML provides a standardized 
JSON (JavaScript Object Notation): JSON is a text-based data interchange format, easy for humans and machines, commonly used for data exchange and configuration.
YAML (YAML Ain't Markup Language): YAML is a human-readable text format using indentation to represent data structures, favored for configuration and readability.
Binary: Binary data is non-textual information, designed for efficiency rather than human readability, suitable for various data types like images, audio, and compiled code.


_what is especially suitable for IoT systems (where in the arthitecture)?and why?
-what is especially unsuitable?why?
tEXT 
XML >uses a lot of tags and attributes to represent data, which can make it more difficult to parse and understand.

### IOT protocols (not doing,no time)

Research in team
-example
-porpose/challenge
software support

### cover at least one
-HTTP
(Hypertext Transfer Protocol) is commonly used in IoT for device communication as it enables web-based interactions and data exchange, allowing IoT devices to provide status updates and receive commands through standard web browsers.
-COAP
-MQTT
**MQTT** (Message Queuing Telemetry Transport) is a publish-subscribe messaging protocol ideal for IoT, ensuring efficient, real-time data transmission between devices, servers, and applications, which is crucial for scenarios like remote monitoring and control.
-OSC
-BLE

publish subscribe:
Pub-Sub is a messaging pattern in distributed systems where publishers send data or events to topics, and subscribers listen to specific topics to receive these messages. It fosters flexibility and decoupling among components, making it ideal for scenarios where multiple components need to react to shared data or events without tight integration.

listener:
 In Pub-Sub, listeners respond to events or messages published on topics they've subscribed to, enabling them to take actions or trigger processes based on incoming data or events.

observer pattern:
The Observer Pattern in software engineering allows objects (observers) to react to changes in another object (subject). In Pub-Sub, this pattern is crucial, with the message broker as the subject and subscribers as observers.


### why do we want this?

mqtt has hieraarchical topics
-ulno_home/living_room/projector
-ulno_home/living_room/temperature

-karlis_home/bed_room
-karlis_home//+/temparature

### QTT -M2M communicaton

mq telemetry transport
or message queue telemetry transport
MQTT gateway/broker,star topology
publish subscribe 
iso standard invented in 1999

### Runs over tcp/any other streamed based protocol

very ligh weight
many implementations
built in security
>allows layered
MQTT
– What are the main CLI commands for MQTT?
mosquito> provides a lightweight method of carrying out messagaing using a publish
– What stands out for you/question?

### Motivationn MQTT simulators in IoT
.valuable tools for testing and Development
.Simulation of Different scenraios
.use for training and education

##  Practical work on this day
For this exercise we had to work with MQTT protocol this was my first time woorking with it 


### Activities of the day


### Communicate with MQTT Server
I first installed PUtty in my machine so that i can be able to communicate with the PI which is the broker.After succefully connecting to the broker after several hiccups i was able to find the MQTT SERVER my windows could not find most probably because the server is not secured.
<br><br><img src="/Gift/PicturesGift/puttyDay3.png" width="500"><br><br>
Later after connecting to the broker i was able to subscribe to a topic my group randomly created .I published some random text to the topic and the other group members would see it .on my side i was able to texts coming from other subcribers which are my team mates who were publishing to the same topic as mine.
<br><br><img src="/Gift/PicturesGift/Day 3.2.2.png" width="500"><br><br>

### Use Wildcards
The next activity was to use the Wildcards "#" and "+" publish and recieve messages. This one was i failed to understand if  i managed to complete it or not.There was a time i though it was running only to think about it later that it is not working i was not certain with my conclusion and results.

<br><br><img src="/Gift/PicturesGift/Day.3.1(MQTT-WILDCARDS).png" width="500"><br><br>

### Use MQTT_Action
We've employed the 'mqtt_action' command as well. This command allows for the execution of a particular task upon receiving a specific message. In the following instance, we utilized it to relay the received message to a different topic. Completing this task required three separate shell windows: one for registering the action, another for subscribing to the topic to which the action forwards, and a third for publishing the message to the topic that the action is monitoring.
<br><br><img src="/Gift/PicturesGift/Day 3.3(MQTT-Action).png" width="500"><br><br>

### Make Air conditioning integrator
for this activity i struggled in class to exercute it.Reason being is that i was very well aware that i was using a sort of a linux software to communicate to the PI ,so i had to install Python for this activity but i only managed to do it after class in my res room.By the time we were at class i was able to complete with my team member which guided me into completing it although i struggled to to import an IOKNIT modules on visual code it took me almost 2 hours to figure it out.i know right sad XD. 


## Problems and Conclusion
we burnt one LED so we were stuck thinking something might be wrong with our circuit connection only to find out that the LED died and left us in grieve, but we were able to figure it ou luckily .Rather than that is the is the import that i struggled to import till this day as i am writing this portfolio i do not know how i managed .That drove me nuts for hours.
