// INCLUDES
// Create a serial connection between Arduino and printer
#include <SoftwareSerial.h>
// Assume Thermal Printer library has been installed into global Arduino libraries folder
#include <ThermalPrinter.h>
// Bitmap image data
#include "image.h"

// GLOBALS
// Initialise printer object with specified Rx, Tx pins and Baud Rate
// Printer Tx -> Arduino Rx = Blue wire to Pin 2
// Arduino Tx -> Printer Rx = Green wire to Pin 3
SoftwareSerial Serial2(2,3);
PlayfulTechnology::ThermalPrinter printer(Serial2); 

void setup(){
	// Start soft serial connection to communicate between Arduino and the printer
	Serial2.begin(9600);

  // Initialise the printer settings
  printer.init();

  // Set font size [S,M,L]
  printer.setSize('S');
  
  // Print the specified line of text 
  printer.println("STOP FIDDLING WITH IT, DOUGIE!");

  // Print a bitmap image (defined in image.h):
  printer.printBitmap(image_width, image_height, image_data);
}

void loop(){
}
