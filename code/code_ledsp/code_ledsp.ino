//-------------------------------code by Creasento-------------------------------

#include <Adafruit_NeoPixel.h>

#define LEDPIN 6
#define NUMPIXELS 6
#define BRIGHTNESS 180

#define SOUND_SENSOR  A0

Adafruit_NeoPixel strip = Adafruit_NeoPixel(NUMPIXELS, LEDPIN, NEO_GRB + NEO_KHZ800);

int data;
int count = 0;      // 소리 카운트
int soundhold = 8;
int volf = 170;

void setup() {

  strip.setBrightness(BRIGHTNESS);
  strip.begin();
  strip.show();

  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(SOUND_SENSOR, INPUT_PULLUP);
}

void loop() {

  strip.begin();

  // put your main code here, to run repeatedly:
  data = analogRead(SOUND_SENSOR);
  Serial.print("크기: ");
  Serial.println(data);

  if (data <= volf) {
    strip.setPixelColor(0, strip.Color(BRIGHTNESS, 0, 0));
    strip.setPixelColor(1, strip.Color(0, 0, 0));
    strip.setPixelColor(2, strip.Color(0, 0, 0));
    strip.setPixelColor(3, strip.Color(0, 0, 0));
    strip.setPixelColor(4, strip.Color(0, 0, 0));
    strip.setPixelColor(5, strip.Color(0, 0, 0));
    strip.show();
  }
  else if (data > volf && data <= volf + soundhold) {
    strip.setPixelColor(0, strip.Color(BRIGHTNESS, 0, 0));
    strip.setPixelColor(1, strip.Color(BRIGHTNESS, 0, 0));
    strip.setPixelColor(2, strip.Color(0, 0, 0));
    strip.setPixelColor(3, strip.Color(0, 0, 0));
    strip.setPixelColor(4, strip.Color(0, 0, 0));
    strip.setPixelColor(5, strip.Color(0, 0, 0));
    strip.show();
  }
  else if (data > volf + soundhold && data <= volf + soundhold * 2) {
    strip.setPixelColor(0, strip.Color(BRIGHTNESS, 0, 0));
    strip.setPixelColor(1, strip.Color(BRIGHTNESS, 0, 0));
    strip.setPixelColor(2, strip.Color(BRIGHTNESS, 0, 0));
    strip.setPixelColor(3, strip.Color(0, 0, 0));
    strip.setPixelColor(4, strip.Color(0, 0, 0));
    strip.setPixelColor(5, strip.Color(0, 0, 0));
    strip.show();
  }
  else if (data > volf + soundhold * 2 && data <= volf + soundhold * 3) {
    strip.setPixelColor(0, strip.Color(BRIGHTNESS, 0, 0));
    strip.setPixelColor(1, strip.Color(BRIGHTNESS, 0, 0));
    strip.setPixelColor(2, strip.Color(BRIGHTNESS, 0, 0));
    strip.setPixelColor(3, strip.Color(BRIGHTNESS, 0, 0));
    strip.setPixelColor(4, strip.Color(0, 0, 0));
    strip.setPixelColor(5, strip.Color(0, 0, 0));
    strip.show();
  }
  else if (data > volf + soundhold * 3 && data <= volf + soundhold * 4) {
    strip.setPixelColor(0, strip.Color(BRIGHTNESS, 0, 0));
    strip.setPixelColor(1, strip.Color(BRIGHTNESS, 0, 0));
    strip.setPixelColor(2, strip.Color(BRIGHTNESS, 0, 0));
    strip.setPixelColor(3, strip.Color(BRIGHTNESS, 0, 0));
    strip.setPixelColor(4, strip.Color(BRIGHTNESS, 0, 0));
    strip.setPixelColor(5, strip.Color(0, 0, 0));
    strip.show();
  }
  else if (data > volf + soundhold * 4 && data <= volf + soundhold * 5) {
    strip.setPixelColor(0, strip.Color(BRIGHTNESS, 0, 0));
    strip.setPixelColor(1, strip.Color(BRIGHTNESS, 0, 0));
    strip.setPixelColor(2, strip.Color(BRIGHTNESS, 0, 0));
    strip.setPixelColor(3, strip.Color(BRIGHTNESS, 0, 0));
    strip.setPixelColor(4, strip.Color(BRIGHTNESS, 0, 0));
    strip.setPixelColor(5, strip.Color(BRIGHTNESS, 0, 0));
    strip.show();
  }
  delay(25);
}
