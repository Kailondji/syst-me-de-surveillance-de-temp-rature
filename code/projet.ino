#include <Wire.h>
#include <LiquidCrystal_I2C.h>
#include <DHT.h>

#define DHTPIN 2
#define DHTTYPE DHT22
DHT dht(DHTPIN, DHTTYPE);

// Initialisation de l'écran LCD I2C (adresse 0x27, 16 colonnes, 2 lignes)
LiquidCrystal_I2C lcd(0x27, 16, 2);

// Broches des composants
const int RED_LED = 8;
const int BLUE_LED = 9;
const int BUZZER = 10;
const int FAN = 11; // Ventilateur

void setup() {
  lcd.begin(16, 2);
  lcd.backlight();
  lcd.setCursor(0, 0);
  lcd.print("Systeme Demarre");
  delay(2000);
  lcd.clear();

  dht.begin();

  pinMode(RED_LED, OUTPUT);
  pinMode(BLUE_LED, OUTPUT);
  pinMode(BUZZER, OUTPUT);
  pinMode(FAN, OUTPUT);

  digitalWrite(RED_LED, LOW);
  digitalWrite(BLUE_LED, LOW);
  digitalWrite(BUZZER, LOW);
  digitalWrite(FAN, LOW);
}

void loop() {
  float temp = dht.readTemperature();
  float hum = dht.readHumidity();

  lcd.clear();

  if (isnan(temp) || isnan(hum)) {
    lcd.setCursor(0, 0);
    lcd.print("Erreur capteur!");
  } else {
    lcd.setCursor(0, 0);
    lcd.print("T:");
    lcd.print(temp);
    lcd.print("C ");

    lcd.setCursor(0, 1);
    lcd.print("H:");
    lcd.print(hum);
    lcd.print("%");

    if (temp > 50) {
      digitalWrite(RED_LED, HIGH);
      digitalWrite(BLUE_LED, LOW);
      digitalWrite(BUZZER, HIGH);
      digitalWrite(FAN, HIGH);
    } else {
      digitalWrite(RED_LED, LOW);
      digitalWrite(BLUE_LED, HIGH);
      digitalWrite(BUZZER, LOW);
      digitalWrite(FAN, LOW);
    }
  }

  delay(2000);
}
