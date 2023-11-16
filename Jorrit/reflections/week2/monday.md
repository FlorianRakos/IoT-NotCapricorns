# Reflections

[Lecture assignments](/Jorrit/assignments/week2/lecture6.md)

## Lecture
We started by discussing the IoT project we'd be doing. As a team we opted to do a small project that would basically just serve to qualify as an IoT project. It is not related to our existing project. It's a cynical move, but there's no point in making our lives more difficult.

Next we started answering some questions, but I got a little distracted by contacting the mechanic in Spain. It was good news. The part that died was my fuel pump. They can replace it and then I can pick him up.

## Lab

My, how convenient; Florian has [written down](/Florian/exercises/exercise06/README.md) what we were doing.

### exercise 6.1f
I think we have reached the point where we're not really doing anything new, we're just repeating the stuff we have been doing.

### exercise 7

#### 1
The PWM didn't work for a while, we were fumbling with mqtt topics and pins for like 30 minutes before I decided to see if a different LED might work, it did. For some reason setting the slider to its maximum lowered the brightness compared to 99%. I guess there's some mistranslation, or maybe the PWM value only goes up to 999.

#### 2
I have sensory issues and I did not really enjoy the frequent buzzer mating calls. Fortunately I always carry earbuds with me for just such an eventuality. One of our buzzers did not work, fortunately we figured that out a little faster than the LED.

#### 3
The rgb_led library wasn't cooperating, we used the traffic light instead. Florian was wasting his time on trying to get the separate values out of the colour picker in Node-RED. Its default output is rbg(255,155,55), I was thinking of how to structure the substring based on characters, since the rgb values could have 1-3 characters. I then checked the colour picker and it can also output a hexcode, which is obivously much easier to split up. Then Florian chimed in and said 'I don't think you have to send the colours separately', which annoyed me enough to go do something else for a bit.

#### access system
I wasn't completely involved in the creation, but as far as I can tell this really just combines what we've been doing into one. The lock never worked before the day ended.

## Opinions
- We ran into 2 issues with iotempower libraries, namely rgb_led and pwm. Both of these were fixed quickly, but it's still annoying.
