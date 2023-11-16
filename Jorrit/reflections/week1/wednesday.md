# Reflections

[Lecture assignments](/Jorrit/assignments/week1/lecture3.md)

## Lecture
Today we started looking at some terms, some of which are a lot less familiar to me than I'd hoped. It's more infrastructure than IoT, but I still think I ought to have a more encyclopaedic knowledge of the field by now.

## Lab
Today I decided that I cannot be bothered to follow the steps in the lab because it's not new for me and I have to go at a glacial pace for my teammates to keep up. Instead, I decided to focus on writing the reflections whilst being available for any questions they had.

They had many.

I could write another file using the same evidence, but I'll just lazily link to [Florian's version](/Florian/exercises/exercise03/) (even though he calls it exercise 3, which it isn't).

### exercise 4 - MQTTBasics
I don't know why we suddenly dropped the letters for the subtasks, but whatever.

It took my teammates a little while to get it, but they caught on and enjoyed playing around with it.


I decided to try if I could host an MQTT broker.
I installed a docker image for Mosquitto on my home server, but then I realised I'd have to find a way to host it on port 1883. For context, all of the services I run on my server are hosted through a Cloudflare tunnel, which is restricted to HTTPS. A quick look at the forums revealed that there is no way to host an MQTT broker on my server. There is a closed beta for something called Cloudflare PubSub, but I doubt I would be eligible for it.

I can't provide the evidence that I communicated with multiple devices, but I will be doing exactly that in a later exercise (I'm sorry to say it is Thursday afternoon at the time of writing).

### exercise 4 - MQTTIntegration
I helped Cristina write her MQTT action. My experience with bash scripts came in useful here because she got confused why she couldn't make them... on her Windows machine... [Evidence is in this confusing file](/TeamThree/Ulrichs%20Lab%20Tasks.md#4c-mqtt-simulators)

### exercise 4 - MQTTSimulators
Using ChatGPT she wrote some scripts that mostly worked. I helped her execute them and monitored the MQTT chatter. By the end we had a nice simulator, a bash script generating random temperatures, a python script sending on/off on another topic depending on whether the number reached a certain threshold, and a bash script constantly sending the on/off state on a different topic, but only when it was changed.

## Opinions

- I did not get as much writing done as I'd hoped. It felt like one of those games where there are always multiple things requiring my immediate attention (e.g. Cook, Serve, Delicious). Florian, Gift, and Cristina had many questions, sometimes simultaneously. I feel like they actually helped them understand, plus I got *some* writing done.
