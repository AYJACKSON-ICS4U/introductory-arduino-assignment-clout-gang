# Clout gang's arduino assignment

## No sauce, no paper, no clout, juice


### Log 1: Week 3

We've finished the first project as we built the board and got the code in week 1 but it still wasn't working. In week 2 we figured out the problem that we didn't have one of the wires attached to ground, after fixing this it started working as when we clicked the button the light turned off and when you released it would turn back on. We then went into the code and changed it so that when you click the button the light would turn on and when you released it would turn off.  

#### Update Week 3

We updated our circuit board to accommodate two lights, the first light came on but the second one only came on really faintly. We believe this was because the circuit board was either too long or that the resistor was too strong.

This week's program can be found in [this](https://github.com/AYJACKSON-ICS4U/introductory-arduino-assignment-clout-gang/blob/master/Light%20on-off%20inverse.ino) repository.

### Week 4

This week we added a delay in milliseconds, we've posted this code in the repository. We also were able to print the time on the serial moniter so you could see it as it was running. We also found that in our program the longer the delay the longer you have to press the button to make the light turn on. For example, a 100ms delay would require only a short button press for the light to come on, whereas a 1000ms delay would require a bit of a hold.

This week's program modification can be found in [this](https://github.com/AYJACKSON-ICS4U/introductory-arduino-assignment-clout-gang/blob/master/LED%20on%7Coff%20with%20milli%20delay.ino) repository.

### Week 5

This week we worked on using just millis to fix the debounce problem on our board. We found a debounce program and modified it and fixed it so it worked for our board and it kind of worked but still wasn't great and we are hoping to find a better more permanent solution for next week.

### Week 6

We've gotten the millis() funciton to work and toggle LEDS, however they are doing it automatically. We were not able to implement the press of the button into changing the state of the LED, the LEDs just work on their own. We were, however, successful in making both our LEDs flash now, by simplky taking out the resistor and adding a regular cable in its place. Next week we will try and modify the blinking program to use the button rather than moving automatically.


