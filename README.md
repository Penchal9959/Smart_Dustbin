# Smart Dustbin

A reviewed and corrected version of this project, with a build check and
fuller documentation, is in [embedded-iot-projects / smart-dustbin](https://github.com/Penchal9959/embedded-iot-projects/tree/main/smart-dustbin) alongside the others from the same
series.

## What this was

A public bin that opens its own lid and asks to be emptied. An ultrasonic
sensor on the front detects someone approaching and a servo lifts the lid; a
second sensor inside measures the fill level and texts the cleaner at 75% full,
escalating to their supervisor at 100%.

## Hardware

Arduino UNO, two HC-SR04 ultrasonic sensors, SG90 servo, SIM900A GSM module.

## Known defects

A mobile number was hard-coded in the GSM alert. It has been removed from this
repository's history; the maintained copy takes it from a configuration
constant at the top of the sketch.

## Licence

[MIT](LICENSE)
