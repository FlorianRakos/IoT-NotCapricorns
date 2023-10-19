# Teamfolder

Here we store all the exercises, pictures and projects Jorrit, Luca and Cristina did in the exercise lectures of IoT.
 

## Exercises

2.b Breadboard and Electronic Prototyping (Pair)
Excercise: Wire up a Wemos D1 Mini to your computer (via usb cable - only plug it in for testing) and get 5V and Ground (G) from the Wemos D1 Mini to the correct places on the breadboard (different from video)
Our steps: We wired Jorrit his ESP32 to the laptop

Excercise: Wire up the yellow and red LEDs like described in video (with 330 Ohm register) - take picture for proof of lit LEDs in portfolio (and document problems/steps)
Our steps: Cristina and Luca have no experience, so they tried some stuff with jorrit his supervision (because he knows what he is doing). They managed to light up only the red light while the yellow one was off. This was because the circuit was not closed or connected so they couldnt turn both on.
Eventually all of us managed to turn on both lights at the same time by connecting the circuit.

Excercise: Add the button like described in video and write down steps as well as if its working and take picture of setup for portfolio.
Our steps: First we again had the problem that we didnt complete the circuit. This was because we just missed it. We changed it, and not it works. We can press the button and both of the lights turn on.
We tried it another time. We added the button on a different spot. At first only the red lit up, but the problem was that the yellow light was the wrong way around. The long leg and the short one were in the wrong way. After adjusting it will light up now aswell.

2.c Blink on the Wemos D1 Mini (Pair)
Exercise: Add led on D6 blinking async. Use number instead of D6 (not in video) and make it blink synchronously
Our steps: We connected d5 to the positive (the esp32 has no d6), then put in the light in the positive and the resistance in the negative. We also added a wire that goes from the negative to the ground. For the number we used instead of d5 we look at pinout esp32. This showed us that we needed to use pin 5.
So for the exercise to make them not sync we used the built in command to use one of the built in lights and we added another light on pin 5. We made a code to make them blink but the builtin one is blinking but the other one isnt.
We apparently wrote the different number for the pin. We changed it to 5 so now it works. The are not blinking in sync.
Now we are going to make them blink in sync. We are using the same setup, but we are switchting the High and Low voltage. This makes them blink in sync.

2.d Toggle Led With Button
Exercise: Add button to breadboard (wire button to ground and a GPIO port like D5)
Our steps: We put it in the correct place

Exercise: Test out the DigitalReadSerial example
Our steps: We tried it and it works

Exercise: Adjust pushButton to D5 (or the respective GPIO port number)
Our steps: We dit and it works

Exercise: Replace in pinMode INPUT with INPUT_PULLUP (if you want to learn something try to answer why this is better or what would be the alternative).
Our steps: we wrote it in the code

Exercise: Flash and check serial monitor (taking a screenshot when this is working is good proof for your portfolio - remember to take photos during your setup)
Our steps: We wrote it in the code

Exercise: Write an Arduino sketch that allows you to toggle (switch from turned on to turned off and back) with a push of the button the led on D6.
Our steps: We wrote it. But we have a problem. It checks the button state every 10 miliseconds so even if you press it quick it will still be on. We are lacking Hysteresis (luckily we know this because jorrit already encountered this problem). Hysteresis is a lag between input and output in a system upon a change in direction. 
We now created a light that works but if we hold it, it will keep blinking. 

- [exercise01][1]
...

[1]: /Teamfolder/exercises/exercise01
...

## Projects

- [project01][7]
...

[7]: /Teamfolder/project
...

## Pictures
2.b
1 button 1 light just lighting up:
![Afbeelding van WhatsApp op 2023-10-16 om 15 28 56_b5383109](https://github.com/FlorianRakos/IoT-NotCapricorns/assets/148061546/999e431d-49c7-437f-881f-8a70786a24e3)
![Afbeelding van WhatsApp op 2023-10-16 om 15 28 59_de844371](https://github.com/FlorianRakos/IoT-NotCapricorns/assets/148061546/5a01f577-ebca-4f8e-ac2e-445e20e8e681)

1 button 1 light:
![Afbeelding van WhatsApp op 2023-10-16 om 15 32 09_ee3254b9](https://github.com/FlorianRakos/IoT-NotCapricorns/assets/148061546/d09248ab-fa23-4788-8bbf-51469d90e262)
![Afbeelding van WhatsApp op 2023-10-16 om 15 32 08_d924c623](https://github.com/FlorianRakos/IoT-NotCapricorns/assets/148061546/5e5c9444-31fc-422a-ba78-fb0fb4ac7fc9)

1 button 2 lights version 1:
![Afbeelding van WhatsApp op 2023-10-16 om 15 37 34_fc6412d7](https://github.com/FlorianRakos/IoT-NotCapricorns/assets/148061546/c072ac23-9c19-48b4-bd4e-2feeae02eefc)
![Afbeelding van WhatsApp op 2023-10-16 om 15 37 35_728fc1b9](https://github.com/FlorianRakos/IoT-NotCapricorns/assets/148061546/5f232988-ae03-47ed-86b1-913af74a7f50)

1 button 2 lights version 2:
![Afbeelding van WhatsApp op 2023-10-16 om 15 41 56_45f5b16e](https://github.com/FlorianRakos/IoT-NotCapricorns/assets/148061546/f436057c-86f4-48e1-beb0-0a2b6e89c60f)
![Afbeelding van WhatsApp op 2023-10-16 om 15 41 56_63d2ca0b](https://github.com/FlorianRakos/IoT-NotCapricorns/assets/148061546/1e4a7a83-11ed-4cf4-b25d-b5c821f2f559)

2.c
Not in sync:
![Afbeelding van WhatsApp op 2023-10-16 om 16 17 22_114a1a8f](https://github.com/FlorianRakos/IoT-NotCapricorns/assets/148061546/3628419a-ce7b-4001-a7f4-6263f143599d)
![Afbeelding van WhatsApp op 2023-10-16 om 16 17 22_b3cec146](https://github.com/FlorianRakos/IoT-NotCapricorns/assets/148061546/9001bb9e-a57d-47d5-a9ce-2d74b648b728)

In sync:
![Afbeelding van WhatsApp op 2023-10-16 om 16 17 45_a2a5b926](https://github.com/FlorianRakos/IoT-NotCapricorns/assets/148061546/b1e4a89a-cc1b-4562-b59b-e1eb48bae96b)
![Afbeelding van WhatsApp op 2023-10-16 om 16 17 46_2b4676c7](https://github.com/FlorianRakos/IoT-NotCapricorns/assets/148061546/95c934cc-9b99-40bb-b683-efd6098f442d)

2.d
Digitalreadsignal and input pullup and :
![Afbeelding van WhatsApp op 2023-10-16 om 16 32 17_bd15b30b](https://github.com/FlorianRakos/IoT-NotCapricorns/assets/148061546/2b735b6e-e9d4-456d-8431-096edb0ec825)

Toggle button:
![Afbeelding van WhatsApp op 2023-10-16 om 16 48 56_7457f06a](https://github.com/FlorianRakos/IoT-NotCapricorns/assets/148061546/aa080584-d80d-4639-8c07-57b569e0cd27)

- [pictures](/Teamfolder/pictures)

#Exercise 4: MQTT on microcontroller
We first started with connecting the wires to the temperature sensor. We needed to work around this because we had no female to male cables, so we used some normal connecting wires and put them in the female output and then in the breadboard. From the breadboard we connected 3 wires to the Esp32.
