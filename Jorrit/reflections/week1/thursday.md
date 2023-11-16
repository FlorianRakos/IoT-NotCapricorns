# Reflections

## Lecture
We had a short lecture on Node-RED. I have been using it regularly for years, so I didn't feel the need to pay very close attention.

## Lab
We had some trouble with the Raspberry Pi and its bandwidth, so we spent a couple dozen minutes fighting OpenWRT to get the DHCP and everything in order after recruiting an actual router to supply the wi-fi.

### exercise 4 - MQTT on microcontroller
This one was a little more difficult because the pubsub library that was recommended wasn't in the library manager. We used another one 'ESP32MQTTClient.h' and changed the code a little. We got stuck for a ridiculously long time because it just wasn't responding to its subscribed topics. I had placed some simple Serial.println() statements in there to debug (the old faithful). After like 15 minutes someone else noticed I hadn't opened the Serial port with Serial.begin(). It was a shameful moment.

Soon after We had an ESP32 that behaved like the integrator and the AC unit.

[Lazy Florian link](/Florian/exercises/exercise04/README.md)

### exercise 5 - Node-RED intro
I honestly don't feel the need to prove my familiarity with Node-RED. I've been using it for years and even used it earlier this semester.

#### a
This is now a letter for a subtask, within a subtask.

Building a 3-node flow isn't difficult for me (although,in fairness, I used 7), the rest did struggle a little. I don't always take full advantage of the visual aspect. I tend to just put everything functional in a function node. Just look at [my flow](/Jorrit/assignments/week1/flows.json).

#### b
I somehow completely missed the example listed in the lab document. I just found someone who did it online and copied their work. I will admit I don't think the others understand how I changed the colour of the text. It was late and they were tired, so I just did it. Evidence is in [here](/TeamThree/Ulrichs Lab Tasks.md), I think, the links are dead for me.

## Opinions

- Watching people learn to use Node-RED is kind of fun. There is a certain type of person who will continue using this in the future because it is a great tool for quickly bodging something together. Getting to play the expert is also fun. I had a classmate who was always ahead of the others and now I get the satisfaction of it.
