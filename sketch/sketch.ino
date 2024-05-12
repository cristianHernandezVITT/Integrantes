#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>

#define SCREEN_WIDTH 128 // Ancho del OLED en píxeles
#define SCREEN_HEIGHT 64 // Altura del OLED en píxeles
#define OLED_RESET     -1 // Reset no es usado

Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, OLED_RESET);

void setup() {
  Wire.begin();
  if(!display.begin(SSD1306_SWITCHCAPVCC, 0x3C)) { // Dirección I2C del display
    for(;;); // Bucle infinito si el display no se inicializa correctamente
  }

  display.clearDisplay();
  display.setTextSize(1);             // Tamaño de texto
  display.setTextColor(SSD1306_WHITE); // Color del texto
  display.setCursor(0,0);             // Posición inicial del texto
  display.println("Hola mundo!");
  display.display();
}

void loop() {

  display.clearDisplay();
  display.setTextSize(1);             
  display.setTextColor(SSD1306_WHITE); 
  display.setCursor(0,0);             
  display.println("Hola mundo!");
  display.display();
}