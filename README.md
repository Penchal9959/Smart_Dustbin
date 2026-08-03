# Smart_Dustbin
Smart dustbins are used to maintain the villages very clean. We can place them at street corners. When ever the people come close to the dustbin to put the dust, the door will automatically opens. When the dustbin filled with 75% of dust one message will be sent to the municipality cleaner. If he ignores that message, the dustbin will be filled with 100% dust, then another message will be sent to the head of municipal corporation, with Location of the Dustbin.

Components:

1.Arduino UNO
2.GSM SIM900A Module
3.IR Sensors
4.Buzzer
5.Led's
6.16x2 LCD
7.9v Battery
8.12v DC power Adapter
9.Solar Panels
10.DC-to-DC converters
11.DB9 Connectors
12.PCB


Skills Used:

1.Arduino IDE
2.SIM900A module Libraries


---

> **Superseded.** This project now lives in
> [embedded-iot-projects](https://github.com/Penchal9959/embedded-iot-projects) alongside eleven
> other builds.

## SMS destination numbers

The `AT+CMGS` commands use `+91XXXXXXXXXX` placeholders. Set your own destination numbers before
flashing.

> **Privacy note.** Earlier versions of this repository contained real mobile numbers hardcoded in
> the sketch. They have been purged from the entire git history, but were publicly readable for
> several years.
