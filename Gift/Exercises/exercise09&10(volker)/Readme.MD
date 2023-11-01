### Learn about OpenWRT
 WiFi Router has IP address 192.168.12.254
### Tasks (individually): Explore how one can . . .
make notes in your personal portfolio!
## access the WEB interface of OpenWRT.
<br><br><img src="/Gift/PicturesGift/volkerday1/OPENWRT.png" width="1000"><br><br>


## discover the symbolic host name of the lan interface address.
>the symbolic host name of the lan interface adress is Openwrt
## ssh into the router using the IP address or the symbolic host name and execute shell commands.
>ssh username@your_router_ip
<br><br><img src="/Gift/PicturesGift/volkerday1/1.png" width="1000"><br><br>
<br><br><img src="/Gift/PicturesGift/volkerday1/6.png" width="1000"><br><br>

### sftp into the router and upload/download files to and from it.
<br><br><img src="/Gift/PicturesGift/volkerday1/7.png" width="1000"><br><br>

### install new packages on the router using either the WEB interface or the opkg command line utility
opkg update  
opkg install package_name
<br><br><img src="/Gift/PicturesGift/volkerday1/5.png" width="1000"><br><br>

### where are the remote package repositories configured?
/etc/opkg/distfeeds.conf


### Download the file with name 7646d48820c9bd9d containing the public package signing key from https://www.vchrist.at/owrt . Such keys are used by OpenWRT for validating the origin of packages.

>The file was downloaded locally into my machine 

### 2 Upload this file (don’t change it’s name) into the directory /etc/opkg/keys/ on the router.
>>><br><br><img src="/Gift/PicturesGift/volkerday1/10.png" width="1000"><br><br>

### 3 On the router add the line
src/gz snodec https://www.vchrist.at/owrt/packages/aarch64_cortex-a53
to the file /etc/opkg/customfeeds.conf pointing to my package repository for the router.

### Create the file if it doesn’t exist.
This can be done either using
the WEB interface of the router
or by hand using an editor. Install one if none is installed on the router (e.g. vi, joe, nano)



### Tasks (group): Install mqttbroker on the router

### 1 Use the WEB interface or the command line to install the mqttbroker package. This package contains the two MQTT v3.1.1 conform mqttbroker (replacement formosquitto) and mqttintegrator (replacement for Node-RED) applications.
<br><br><img src="/Gift/PicturesGift/volkerday1/12.png" width="1000"><br><br>

## Are the mqttbroker and mqttintegrator applications running after install?
>>> yes i believe so

## 2 Start mqttbroker on the command line. If it is already running as a daemon stop the daemon.
<br><br><img src="/Gift/PicturesGift/volkerday1/12.png" width="1000"><br><br>


### ??? What happens?