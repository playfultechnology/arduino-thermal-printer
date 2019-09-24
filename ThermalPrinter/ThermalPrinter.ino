// INCLUDES
// Create a serial connection between Arduino and printer
#include <SoftwareSerial.h>
// Thermal printer library modified from https://github.com/bildr-org/Thermal-Printer
#include "src/Thermal/Thermal.h"
// Bitmap image data
#include "image.h"

// GLOBALS
// Initialise printer object with specified Rx, Tx pins and Baud Rate
// Printer Tx -> Arduino Rx = Blue wire to Pin 2
// Arduino Tx -> Printer Rx = Green wire to Pin 3
Thermal printer(2, 3, 9600); 

void setup(){
  // Set font size [S,M,L]
  printer.setSize('S');
  
  // Print the specified line of text 
  printer.println("STOP FIDDLING WITH IT, DOUGIE!");

  // Print a bitmap image (defined in image.h):
  printer.printBitmap(image_width, image_height, image_data);
}

void loop(){
}
