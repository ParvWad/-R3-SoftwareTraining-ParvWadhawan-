For this project, I had to relearn a lot of arduino. I found that I had forgotten a significant amound of coding and syntax used by arduino after not having used it for upwards of a year. To relearn, I had watched a few youtube videos to learn the basic syntax and I also watched around an hour of the seminar hosted by the software lead (which I found to be very helpful and informative). Equipped with the knowledge I learnt from those sources I was able to code my program with almost no hiccups. To make the circuit design, something I remembered much more than the coding, I started from placing an arduino and a motor driver. Then, I got the motor driver working with two motors both going in both directions. I then introduced the Dip Switch to control the directions of the motor. Then, I introduced the potentiometer. Through this process, I had one problem where I was unable to get any power to the motors, which caused me to restart. However, other than that small hiccup I was able to proceed with minimal difficulty. Overall, I believe that this project took me about 5 hours total to both learn all and build.  

The way My circuit works is that it has motor driver inputs connected to arduino PWM pins 3,5,9,10. These pins are initalized as an output in Arduino and dictate which direction the motors will move. 
The Controls of the motor are dictated by a dipswitch which, through of a series of if else statements, accomplishes theses series of controls: 
        First button = forwards 
        Second button = Reverse 
        Third button = Left 
        Fourth button = Right 
        no buttons = Stop. (NOTE that to go to any of the later commands none of the other buttons can be toggled)
To control the speed of the motors, a potentiometer is connected to analog 1, and it is read into a variable. Then, using SerialWrite the motors speed can be varied. 
Lastly, here is the link to my tinker project: https://www.tinkercad.com/things/1DbXHgsqqnx 
(Additionally, I was unable to add screenshots to this read me, for future reference how would i do that?)
