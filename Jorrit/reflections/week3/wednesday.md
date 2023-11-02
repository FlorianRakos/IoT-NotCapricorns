# Reflections

## Final Project
Let it be known that Florian and I voluntarily spent time on our day off working on this project. In fairness, we were both absent for most, if not all, of Tuesday, but I still think it's worth boasting about. Gift was there but I don't know what he was doing.
I explained the system to Florian and set him to work getting a device going that activates an alert when a button is pressed or a potentiometer is activated.
I spent my time setting up the voice activation. The input it a expects is 16kHz single-channel audio stream, which is not commonly used in Node-RED or sound cards for that matter. I managed to record 48kHz on my phone and downsampled it using an online converter. Half of the words I spoke were actually detected, and in a remarkable coincidence, it's the 3 I cared about.
I can feed the Voice2JSON node a .wav file and it correctly detects me saying "test", "Emergency", and "Help". It's unfortunate that "Airplane", "Potato", and "Library" didn't work, but I'm happy.
