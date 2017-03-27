# esp8266

## Mac 
If you are on a mac, you might need to install a USB driver from https://www.silabs.com/products/mcu/Pages/USBtoUARTBridgeVCPDrivers.aspx ([direct link](https://www.silabs.com/Support%20Documents/Software/Mac_OSX_VCP_Driver.zip))

## Setup
* Install and launch the Arduino software from https://www.arduino.cc/en/Main/Software
* Open Preferences and enter http://arduino.esp8266.com/stable/package_esp8266com_index.json into the "Additional Board Manager URLs" field.
* Press OK
* Open Boards Manager from Tools > Board menu. Find and install the esp8266 platform
* Press Close when done
* Physical assemble the circuit
  * Long leg on LED the connects to D4
  * Short leg on the LED connects to a free slot on the end
  * Resistor connects the short LED leg to GND
  * D4 > LED (long leg) > FREE > Resistor > GND
  * **Make sure everything is correct!**
* Connect your ESP8266 using a suitable USB cable
* Select Tools > Board > NodeMCU 1.0 (…)
* Select Tools > Port > YourESP8266Port (`/dev/tty.SLAB_USBtoUART on my Mac)
* Type in or copy the program in the [ardu.ino](ardu.ino) file.
* Press Upload
* Connect a device to the WLAN with the SSID `ESP826`
* Open a browser and enter [http://192.168.4.1/](http://192.168.4.1/). The LED state should change every time you press reload
* Have fun!
