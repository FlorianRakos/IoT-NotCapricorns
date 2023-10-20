# Reflections

## Lecture
My study profile is Embedded systems/technology, which means I've had plenty lectures on IoT before.
The information wasn't anything new to me. I do think it's all going a little quick; I imagine that some of my classmates might struggle to keep up.
I'm going to accuse the teacher of cherry-picking data, as the graph we were showed displaying a waning interest in IoT on Google trends was cut off right before it started increasing again.

### IoT assignment
We quickly started doing an assignment exploring and expanding our knowledge of IoT.
I decided to test myself by using only my own knowledge; I didn't google or ChatGPT anything.

## Lab

### exercise 1a
The first lab assignment was setting up the git repo I'm currently writing in. This isn't particularly difficult, but in my experience git is very annoying to learn; it's way too easy to make a simple mistake that requires a complicated solution. My teammates decided that using the CLI for git was a bridge too far. I don't blame them, but that's the kind of crutch that really holds one back when learning to use git. Someone from a different team whose name shan't be mentioned literally said "I don't want to learn" when I said that using the text editor on the github website is not really using git.

All of my experience with git tells me to get a branch policy going, but I cannot be bothered to convince 4 people to learn the necessary skills. I don't think they care at all.

### exercise 1b
I recognise most of the components from the kit. I have used a couple of them before. The others in the team actually contributed to the list. This sort of exercise can make me question what I actually know, because it took me way too long to figure out the bus system of the DHT11 from looking at the datasheet.

The example table provided was pretty useless if you ask me, but I did just now notice that there was another part to this exercise where you had to research the bus system.

### exercise 2b
This exercise was simplicity itself, but I discovered that I am unlearning stuff. I tried to wire up the two LEDs in series and was surprised to find that it's a lot less bright than two led's in parallel. I completely forgot about the concept of voltage drop and the variable resistance of LEDs. When I listened to Volker's explanation I got the most horrible sense of déjà vu. I vaguely recall learning this same thing 2-3 years ago.

### exercise 2c
This part was perfectly clear, except for one task: *Add led on D6 blinking async*. I do not know what *async* is supposed to mean in this context. If it's meant to be fully asynchronous, then we would have to use another system for timing the blink like millis() or hardware timers, but that is decidedly beyond the scope of this lesson. The next task asks you to do the opposite by synchronising the blinking. I just decided to ignore it.

### exercise 2d
This one is also deceptively complicated. having a button respond properly is pretty difficult for someone with no experience. Obviously it involves saving button states, but to get the button to behave as you would expect, you need to actually add delays and maybe even hysteresis. I decided to go with a 100 ms delay because it was after 17:00 and I was tired.

## Opinions

- We did not have enough time at all.
I have been working with Arduinos for nearly 4 years, but helping my teammates really slowed me down. I don't think a group of people without someone with experience had any chance of getting it done on time. I had no time left at the end of the day to write a reflection. I was tired to begin with, but still.

- We took pictures, but none of us had the time to make a full write-up of the assignment. Looking at the documentation in the example repo is completely disheartening. There is not nearly enough time to do the assignments, write up the process, write a reflection, and get evidence. All the while we are being told that we need to speed up and are falling behind.
