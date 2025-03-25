#include <Arduino.h> // wajib untuk platformIO + ESP32

// Deklarasi pin LED
int lampu=26;
int lampu2=27;
int lampu3=25;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  Serial.println("Hello, ESP32!");
  pinMode(lampu, OUTPUT);
  pinMode(lampu2, OUTPUT);
  pinMode(lampu3, OUTPUT);
}

void loop() {
  digitalWrite(lampu, HIGH);
  digitalWrite(lampu2, LOW);
  digitalWrite(lampu3, LOW);
  Serial.println("LED ON");

  
  // put your main code here, to run repeatedly:
  delay(1000); // this speeds up the simulation


  digitalWrite(lampu, LOW);
  digitalWrite(lampu2, HIGH);
  digitalWrite(lampu3, LOW);
  Serial.println("LED OFF");

  delay(1000);

  digitalWrite(lampu, LOW);
  digitalWrite(lampu2, LOW);
  digitalWrite(lampu3, HIGH);
  Serial.println("LED ON");

  delay(1000);
}