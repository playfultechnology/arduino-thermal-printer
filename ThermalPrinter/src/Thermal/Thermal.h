#ifndef Thermal_h
#define Thermal_h

#include <Arduino.h>
#include <SoftwareSerial.h>



class Thermal : public SoftwareSerial

{

  public:

    Thermal(int, int, long); // constructor
    void setDefault();
    void test();



    void inverseOn();
    void inverseOff();
    void doubleHeightOn();
    void doubleHeightOff();
    void boldOn();
    void boldOff();
    void underlineOn();
    void underlineOff();



    void justify(char value);
    void feed(uint8_t x = 1);
    void sleep();
    void wake();



    void setCharSpacing(int spacing);
    void setSize(char value);
    void setLineHeight(int val = 32);



    void printBarcode(char * text);
    void printFancyBarcode(char * text);
    void setBarcodeHeight(int val);



    void printBitmap(uint8_t w, uint8_t h,  const uint8_t *bitmap);

    // ??
    void tab();



    void setHeatTime(int vHeatTime);

    void setHeatInterval(int vHeatInterval);

    void setPrintDensity(char vPrintDensity);

    void setPrintBreakTime(char vPrintBreakTime);

    
  private:
    boolean linefeedneeded;


    // little helpers to make code easier to read&use
    void writeBytes(uint8_t a, uint8_t b);
    void writeBytes(uint8_t a, uint8_t b, uint8_t c);
    void writeBytes(uint8_t a, uint8_t b, uint8_t c, uint8_t d);


    int zero;


    int heatTime;
    int heatInterval;
    char printDensity;
    char printBreakTime;
};

#endif
