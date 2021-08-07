/*
Topic: Arduino DHT11 Kullanımı
Author: Furkan Doğan (https://www.youtube.com/channel/UC64VitGjKnw-PFYZjdWSNoQ)
Date: 07.08.2021 12:23
*/

#include <DHT.h> // DHT kütüphanesi

#define DHTPIN 2
#define DHTTYPE DHT11

DHT dht(DHTPIN, DHTTYPE); //DHT mizi tanımladık

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600); // Seri haberleşmeyi başlattık
  dht.begin(); // DHT mizi başlattık

}

void loop() {
  // put your main code here, to run repeatedly:

  int sicaklik = dht.readTemperature(); // Sıcaklık Değeri
  int nem = dht.readHumidity(); // Nem Değeri

  Serial.print("Sicaklik: ");
  Serial.print(sicaklik);
  Serial.println(" ");
  Serial.print("Nem: %");
  Serial.print(nem);
  Serial.println(" ");
  delay(3000); // 3 saniyede bir yenile
  

}
