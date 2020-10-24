#include <LiquidCrystal.h> //memasukkan library LCD
LiquidCrystal lcd (7,6,5,4,3,2); //inisialisasi port LCD//declare variables

int button = A0;

void setup() {
  lcd.begin(16,2); // set lcd 16×2
  pinMode(button, INPUT_PULLUP);
  lcd.setCursor(0,0);
  lcd.print("Program Button");
  delay(2000);
  lcd.clear();
  
}
void loop() {
int pencet = digitalRead(button);

  if (pencet == LOW) {
     lcd.setCursor(0,0); //set di kolom 0 dan baris 0
     lcd.print("ON "); 
  }
  else {
    lcd.setCursor(0,0); //set di kolom 0 dan baris 0
    lcd.print("OFF");
  }
}
