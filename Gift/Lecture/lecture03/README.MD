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