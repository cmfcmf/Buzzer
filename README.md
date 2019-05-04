# Buzzer

Code for a simple buzzer, powered by an STM32F103C. The buzzer is connected to ping PB12 of the microcontroller and ground. The code can be compiled with the [stm32duino](http://wiki.stm32duino.com/index.php?title=Installation) Arduino extension. The microcontroller registers itself as a USB keyboard and sends `CTRL+WINDOWS+B` when its pressed initially and `CTRL+WINDOWS+ALT+B` when its pressed the second time. An [AutoHotkey](https://www.autohotkey.com/) script is then used to play a media file (not included in this repo) when the button is pressed and stop when the button is pressed again.