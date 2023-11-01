# Day 3
## MQTT in Action on CLI
After watching the video "Barebone MQTT with Mosquitto Clients", we answered the following questions
### What are the main CLI commands for MQTT?
  * ssh -t iot iotgateway [enter]
  * write password 
  * he checks if the mosquitto is running
  * iot
  * mqtt (list of all the actions we can do)
  * mqtt_listen –help 
  * mqtt_listen sandbox/test  (it acts like the sub)
  * mqtt_send
  * mqtt_send sandbox/test Hello World
  * mqtt_listen /sandbox (it hears the global)

Other notes Judit, Xavi and I took throughout the video:
  * "ping iotgateway" → check that wifi is working
  * "ssh iotgateway -l iot"
  * "mosquitto_sub –help" → to see the subscribers
  * "mosquitto_sub -t sandbox/test -h 192.168.12.1" < this is the IP where the user is connected
  * if we write “mosquitto_sub -t sandbox/test -h iotgateway", we connect on an upper level
  * "mosquitto_pub -t sandbox/test -h iotgateway -m “Hello world”" → we have sent the message to the two subscribers
  * to check a specific level, write “cd” until you are in the desired level and then write “mqtt_listen sandbox”
  * pub: publisher
  * sub: subscribers
  * wildcards
      * i’m subscribed to flower and flower/rose
      * if i subscribe to flower/#, i will receive the messages from flower/lily and flower/sunflower even though im not subscribed to those in specific

### What stands out for you?
For me, the concept of using wildcards (#) for MQTT subscriptions has surprised me, as it allows to receive messages from multiple subtopics without specifically subscribing to each one. I find it very efficient.

## MQTT exploration (different tools, computers/network nodes, and wildcards)
I had so much fun sending [messages](/TeamThree/Ulrichs%20Lab%20Tasks.md#4a-mqtt-basics) to my team mates.

## MQTT integration
I did this [exercise](/TeamThree/Ulrichs%20Lab%20Tasks.md#4b-mqtt-integration) by myself, with the help of Jesper.

## MQTT simulators
I started this [exercise](/TeamThree/Ulrichs%20Lab%20Tasks.md#4c-mqtt-simulators) alone but then Jorrit joined and colaborated

## MQTT on microcontroller
Here is the last [activity](/TeamThree/Ulrichs%20Lab%20Tasks.md#4d-mqtt-on-microcontroller) from today, that we couldn't finish before the class ended and did on day 4.
