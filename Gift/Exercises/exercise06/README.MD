
## RFID Reader
For our initial Task, we began by getting the RFID reader ready. To do this, we made the circuit shown in the picture, and we linked all the pins just like the instructions told us to.
<br><br><img src="/Gift/PicturesGift/exercise06/RFID_Circuit.jpg" width="1000"><br><br>

First, we made a special folder for RFID stuff, and we made a change in the setup.cpp file. We added a line that said "mfrc522(reader);" and made sure it works with the D1 Mini.

Then, we made a new flow in NodeRED. In this flow, we first checked if the ID matched the one from the tag we scanned earlier. If it did, we changed the button's color to green and the text to "accept." But if the IDs didn't match, we turned the color to red and the text to "deny." Normally, the button says "scan tag," and it goes back to saying that after you press it again. You can see how this works in the pictures we provided.


<br><br><img src="/Gift/PicturesGift/exercise06/RFID_Deny.jpg" width="1000"><br><br>
<br><br><img src="/Gift/PicturesGift/exercise06/RFID_Console.JPG" width="1000"><br><br>
<br><br><img src="/Gift/PicturesGift/exercise06/RFID_NodeRED.JPG" width="1000"><br><br>
<br><br><img src="/Gift/PicturesGift/exercise06/RFID_Scan.jpg" width="1000"><br><br>
<br><br><img src="/Gift/PicturesGift/exercise06/RFID_Accept.jpg" width="1000"><br><br>


## Pulse Width Modulation


### Lighting LED
Pulse Width Modulation, or PWM for short, is a way to make something like a tiny light called an LED shine brighter or dimmer. It's like making a light switch that can be turned on and off very quickly, so it seems like it's shining at different levels of brightness.

To make this work, we need to control two things: how fast the light switches on and off (we call this "frequency"), and how long it stays on compared to how long it's off (we call this "strength" or "pulse length"). By changing these two things, we can make the LED look brighter or dimmer.

To make all of this happen, we needed to make some changes on a computer device called an "esp32minikit." First, we organized our computer files in a special folder called "PWM" to keep everything neat. Then, we told our computer that we're using the "esp32minikit" device, and we wrote a special instruction in the setup part of our computer program.

However, when we first tried to use this setup, we had some problems. Our computer didn't understand what we wanted to do with the PWM device. So, we decided to do a special thing called "iot upgrade" on our Raspberry Pi, which is another kind of computer. This made everything work properly, and our LED could now shine brightly or dim just like we wanted.






<br><br><img src="/Gift/PicturesGift/exercise06/PWM_Error.JPG" width="1000"><br><br>
Next, we made a basic NodeRED Flow. It had a Userinterface with a slider that could change how strong a pulse is. But, it didn't work for a while, and we didn't know why. Finally, we found out that the light (LED) we were using was broken, so we put in a new one. You can see the working result in the pictures below.
<br><br><img src="/Gift/PicturesGift/exercise06/PWM_LED_Bright.jpg" width="1000"><br><br>
<br><br><img src="/Gift/PicturesGift/exercise06/PWM_LED_Dimm.jpg" width="1000"><br><br>



### Buzzer


In the next part of our activity, we used the same things we used earlier. We did something extra by adding a slider on the NodeRED screen. This slider lets us change how often something happens. We call this "frequency." To make it work, we only had to add the word "frequency" at the end of the topic we were using before, which is "PWM/pwmDevice/frequency/set."

We also made a change in our physical setup. Instead of using an LED, we now have a buzzer. So, when we move the slider in NodeRED, we can control how often the buzzer makes a sound.
<br><br><img src="/Gift/PicturesGift/exercise06/PWM_Buzzer_NodeRED.JPG" width="1000"><br><br>
<br><br><img src="/Gift/PicturesGift/exercise06/PWM_Buzzer_Sound_LowFreq.jpg" width="1000"><br><br>
<br><br><img src="/Gift/PicturesGift/exercise06/PWM_Buzzer_Sound_HighFreq.jpg" width="1000"><br><br>
<br><br><img src="/Gift/PicturesGift/exercise06/Set_PWM.JPG" width="1000"><br><br>

### RGB Light


Next, we tried to make an RGB light change its colors in three different parts. We wanted to control each color by itself. To do this, I used the same node we used for PWM exercises. I made changes to the setup.cpp file so it would include the instruction "rgb_single(rgb1, 4, 0, 2, true). Unfortunately, this didn't work because the needed library couldn't be found.
<br><br><img src="/Gift/PicturesGift/exercise06/RGB_Error.JPG" width="1000"><br><br>
This is why we attempted to make things work by setting up three separate things that control how much power goes to our devices. Each of these things was connected to different pins on our electronics. But things got really tricky when we started using NodeRED. We used a tool called ColorPicker, which gives us numbers to show colors, but they weren't in the right form for our devices.

So, we decided to break down these numbers into smaller pieces using a special tool, as you can see in the picture. But here's the catch: our power controllers didn't understand these smaller pieces when they were in the form of hexadecimal numbers

<br><br><img src="/Gift/PicturesGift/exercise06/RGB_Try.JPG" width="1000"><br><br>

We didn't want to create a new function to break down the RGB string the right way. But we did figure out how to make the console lights work, as you can see in the next picture.
<br><br><img src="/Gift/PicturesGift/exercise06/RGB_Light.jpg" width="1000"><br><br>


## Access Controll System
Finally, we made the Access Control System. We used the RFID project we worked on before. We also added a small traffic light, a buzzer, and the lock to the circuit, as you can see in the picture.
<br><br><img src="/Gift/PicturesGift/exercise06/Accesscontrollsystem_Circuit.jpg" width="1000"><br><br>
Next, we made some changes to the setup.cpp. We added a few things to make it work better. We made it show information for the traffic light, the lock, and a device that makes a buzzing sound. You can see these changes in the code..
<br><br><img src="/Gift/PicturesGift/exercise06/access width="1000"><br><br>
I made some changes and started fixing a computer program called NodeRED. It was supposed to do something with RFID cards. I added some new parts to make it work better. I put in some special buttons to control the light, a buzzer, and a lock. I also made it so the buzzer turns off after 1 second. But the lock didn't do what we wanted. The next day, we found out it needed more power, like 12 volts, to work properly. We wanted to try again, but we were too busy that day.

<br><br><img src="/Gift/PicturesGift/exercise06/RFID_System_NodeRED.JPG" width="1000"><br><br>
In this picture, you can see the system when it's all closed and secure.
<br><br><img src="/Gift/PicturesGift/exercise06/Accesscontrollsystem_Closed.jpg" width="1000"><br><br>

In the following picture, we used a special tag with an RFID reader to open the system. There is a small green light, like a tiny bulb, but it doesn't shine very brightly. It's quite dim, but you can notice it if you look at it closely, especially when you compare it to the previous picture.
<br><br><img src="/Gift/PicturesGift/exercise06/Accesscontrollsystem_Open.jpg" width="1000"><br><br>
Here, you can look at all the messages that use MQTT, which is a way for devices to talk to each other. You can also see how different devices are doing, like if they are working well or not..
<br><br><img src="/Gift/PicturesGift/exercise06/RFID_System_Console.JPG" width="1000"><br><br>

