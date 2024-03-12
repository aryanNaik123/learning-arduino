# Learning Arduino

This repo is a compilation of me learning how to use an arduino uno with various sensors and modules.

# [01-blinking](01-blinking/blink.ino)

In this section I learned how to blink an led on the Uno using pin 13.

By changing the signal from a logical High and Low with a delay between both, it appears as if the led is blinking.

Changing the delay you can make it blink faster or slower.

# [02-lcd](02-LCD/lcd.ino)

In this section I wired up the LCD1602 module to the Uno.

Aided by a pentiometer allowing me to change the contrast on the display.

With the starter code I was able to display a Hello World message and the number of seconds that passed since the display was turned on.

I also played with displaying date and time on the display, but since I lack an RTC, I was able to create only rudimentary code that allowed the click to start ticking from a set point rather than a true real time clock. You can see this attempt here: [rtc.ino](02-lcd/rtc.ino). In the future I might attempt to use [CompileTime](https://github.com/ripred/CompileTime), or get an RTC module.
