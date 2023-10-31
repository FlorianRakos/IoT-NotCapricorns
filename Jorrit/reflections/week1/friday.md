# Reflections

## Lecture
We started the day with a questionably defined hypothetical for us to contemplate. We had to consider the potential problems and complications of scaling up the project we have been doing.

## Lab
I haven't used IoTempower before. It is reminiscent of platform.io, but it has some features that are truly new to me.

### exercise 6 Device Control with IoTempower
Okay now there's a subtask named 1 after the 6 with a through f, but no 2. 6.1a has another 2 subtasks called 6.1a1 and 6.1a2.

#### 6.1a

##### 1
I read this task and decided I hated it. We did this task as a team, different people focused on different subtasks. I understand that intuition is important in this field, but this exercise of guessing what commands do seems pointless to me. I can recall so many times when I was using Linux when a command was named very badly and I would have been better off RTFM.

##### 2
This one was already being done by 2 others and they actually started putting it together, which wasn't actually in the scope of the task.
I heard the term 'voltage divider' and got a traumatic flashback to a lecture I didn't understand years ago. I will try to put the thing together when we actually have to next week.

#### 6.1b
I struggled to understand the documentation server. I ran the command on the Pi and then realised I can't easily reach a locally hosted server on the Pi from my laptop. A kind helper pointed out that the default page of the Pi is already the documentation.

After this I started to get going with the programming of an ESP with the IoTempower, but only one person can use it for hardware at once, so I joined Florian who was a little further ahead.

We couldn't get the damned button to respond. The problem was that we were initialising the serial connection without deploying the new code. By the time we got it working I had to leave for an interview.

#### 6.1c
By the time I got back Florian had almost finished this step, but as far as I can tell it's pretty simple. You create a new node and set it up with a light and button.

#### 6.1d
This one was a simple extension of the previous one, we just had the button communicate with a Node-RED flow and added a ui 'audio out' node.

We were confronted with the question of how we can tell which device we're uploading to when two are connected. We solved it by unplugging one of them.

#### 6.1e
This one was a simple extension of what we'd done before; Receive an MQTT message, display it on a screen. The team aired their grievances with the small screen and the day was over. Endlich wochenende.

## Opinions

- I don't understand the decision to use the names IoTempire and IoTempower within the same project. I got them confused a lot today.
