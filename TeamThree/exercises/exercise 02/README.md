# Exercise 02
For Lab exercise 2 we wrote three small Arduino programs.

## Overview
1. [Preparation](/Teamfolder/exercises/exercise01#preparation)
2. [Example - blinking LED](/Teamfolder/exercises/exercise01#example---blinking-led)
	- [How to begin](/Teamfolder/exercises/exercise01#how-to-begin)
	- [Code for the blinking LED](/Teamfolder/exercises/exercise01#code-for-the-blinking-led)
	- [Pictures](/Teamfolder/exercises/exercise01#pictures)
3. [Control an ESP8266 from another ESP8266 via WLAN](/Teamfolder/exercises/exercise01#control-an-esp8266-from-another-esp8266-via-wlan)
	- [Client - ESP8266 with a button which talks to another ESP8266](/Teamfolder/exercises/exercise01#client---esp8266-with-a-button-which-talks-to-another-esp8266)
		- [How to begin](/Teamfolder/exercises/exercise01#how-to-begin-1)
		- [Code for the client](/Teamfolder/exercises/exercise01#code-for-the-client)
		- [Pictures](/Teamfolder/exercises/exercise01#pictures-1)
	- [Server - ESP8266 with a LED which is switched on/off from the client](/Teamfolder/exercises/exercise01#server---esp8266-with-a-led-which-is-switched-onoff-from-the-client)
		- [How to begin](/Teamfolder/exercises/exercise01#how-to-begin-2)
		- [Code for the server](/Teamfolder/exercises/exercise01#code-for-the-server).
4. [Problems](/Teamfolder/exercises/exercises01#Problems)



## Preparation
Before we could start doing the first little example, we had to setup our ESP32 and Raspberry Pi.
Our team was using an ESP32 unlike the other teams because one of us had it and there wasn't enough hardware.

1. We installed the Arduino IDE
2. We added support for ESP32 to the Arduino environment
3. We downloaded the image for the Raspberry Pi
4. We downloaded Balena etcher
5. We flashed the image to the Raspberry Pi with etcher and validate it
6. In wifi.txt we changed the WiFi name and password and removed '#' from the WiFi name line
7. We connected the Raspberry Pi to the network via Ethernet cable and powered it up

## Example - blinking LED
For this small example we used an example Arduino program which makes the onboard LED of the ESP32'
 blink every second.

### How to begin
1. Tools > Board > LOLIN(WEMOS) D1 R2 & mini
2. Files > Example > Built in examples > 01. Basics > Blink
3. Verify the program
4. Upload File to ESP8266

### Code for the blinking LED
Here you can find the code for the blinking LED -> [example_blink.ino](/Teamfolder/exercises/exercise01/example_blink/example_blink.ino)

### Pictures
<img src="/Teamfolder/pictures/exercise01/example_blink_picture_1.jpg" alt="drawing" width="300"/> <img src="/Teamfolder/pictures/exercise01/example_blink_picture_2.jpg" alt="drawing" width="300"/>

## Control an ESP8266 from another ESP8266 via WLAN
In this little project we wanted to make a server (ESP8266) which only toggles a LED when a special event occurs. That event is the click of a button on another ESP8266.
These two ESP8266s are connected via WLAN.

### Client - ESP8266 with a button which talks to another ESP8266
This is our client which connects to the WLAN from our Raspberry Pi and also connects to the second ESP8266 via its IP address and sends a HTTP GET to it when the button is pressed.

#### How to begin
1. File > New
1. Tools > Board > LOLIN(WEMOS) D1 R2 & mini
3. Connect the cables between the ESP8266 and the button
	- black cable of the button to the ground (G) of the ESP8266
	- yellow cable of the button to D6 connector of the ESP8266
	- red cable of the button to the 3V connector of the ESP8266
2. Write the code
3. Verify the program
4. Upload File to ESP8266

#### Code for the client
Here you can find the code for the client -> [client_button.ino](/Teamfolder/exercises/exercise01/client_button/client_button.ino)

#### Pictures
<img src="/Teamfolder/pictures/exercise01/client_button_picture_1.jpg" alt="drawing" width="300"/> <img src="/Teamfolder/pictures/exercise01/client_button_picture_2.jpg" alt="drawing" width="300"/>

### Server - ESP8266 with a LED which is switched on/off from the client
...

## Problems
In the first Lab we had problems especially with the micro USB cables. Some of our cables did not work and that cost us time.






# Breadboard and blink

```/*
  DigitalReadSerial

  Reads a digital input on pin 2, prints the result to the Serial Monitor

  This example code is in the public domain.

  https://www.arduino.cc/en/Tutorial/BuiltInExamples/DigitalReadSerial
*/

// digital pin 2 has a pushbutton attached to it. Give it a name:
int pushButton = 5;
int ledpin = 23;

bool ledstate = false;


// the setup routine runs once when you press reset:
void setup() {
  // initialize serial communication at 9600 bits per second:
  Serial.begin(9600);
  // make the pushbutton's pin an input:
  pinMode(pushButton, INPUT_PULLUP);
  pinMode(ledpin, OUTPUT);
}

// the loop routine runs over and over again forever:
void loop() {
  // read the input pin:
  int buttonState = digitalRead(pushButton);

  if (buttonState == 1) // if button is pressed
  {
    if (ledstate)
    {
      ledstate = false;
      digitalWrite(ledpin, LOW);
    }
    else
    {
      ledstate = true;
      digitalWrite(ledpin, HIGH);
    }
  }
  // print out the state of the button:
  Serial.println(buttonState);
  delay(100);  // delay in between reads for stability
}
```
