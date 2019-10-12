# arduino-thermal-printer
Wiring and example Arduino code for printing text and graphics using a thermal receipt printer

## Wiring
I'm using a cheap (~£16) thermal receipt printer bought from <a href="https://www.ebay.co.uk/itm/GOOJPRT-58mm-Receipt-Thermal-Printer-TTL-USB-50-85mm-s-Printing-Speed-Emb-P7Z7-/223651113560">eBay</a>. It takes standard 58mm receipt paper, and appears to be very similar to the Adafruit <a href="https://www.adafruit.com/product/2751">"Tiny Thermal Receipt Printer"</a>.
The only peculiarity is that the supplied cable harness uses a *red* wire for ground, not for VCC!

![Thermal Receipt printer wired to Arduino](documentation/Thermal%20Printer_bb.jpg?raw=true "Wiring thermal printer to Arduino Uno")

## Code
The printer uses a simple 2-wire serial interface (Rx/Tx). All printing commands are sent from the Arduino as simple byte values, as published in the <a href="documentation/ESCPOS Command Sheet.pdf">ESC/POS standard</a>. The example code in this project illustrates how to print text and bitmap images. 
