#include <LiquidCrystal.h> //memasukkan library LCD
LiquidCrystal lcd (7,6,5,4,3,2); //inisialisasi port LCD//declare variables

float suhuC;
int suhuPin = A0;

void setup() {
  lcd.begin(16,2); // set lcd 16×2
  Serial.begin(9600);
}

void loop() {
  suhuC = analogRead(suhuPin); //membaca nilai adc sensor
  suhuC = (suhuC / 1024) * 5000; //konversi data analog menjadi milivolt
  suhuC = suhuC/10; //konversi kedalam derajat celcius dengan persamaan 1 derajat / 10 milivolt
  
  lcd.setCursor(0,0); //set di kolom 0 dan baris 0
  lcd.print("suhu="); //tampilkan tulisan “suhu=” di LCD
  lcd.print(suhuC); //tampilkan nilai suhu
  lcd.print("  "); //spasi
  lcd.print("C"); //spasi
  Serial.print("suhu=");
  Serial.print(" ");
  Serial.print(" ");
  Serial.print(suhuC);
  Serial.println(" derajat C");
  
}
