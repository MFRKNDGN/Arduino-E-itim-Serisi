/*
Topic: Arduino Potansiyometre Kullanımı
Author: Furkan Doğan (https://www.youtube.com/channel/UC64VitGjKnw-PFYZjdWSNoQ)
Date: 07.08.2021 20:21
*/

#define pot A0 // potansiyometremizi A0 pinine tanımladık

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600); // Seri habarleşmeyi başlattık
  
}

void loop() {
  // put your main code here, to run repeatedly:
  int deger = analogRead(pot); // Potansiyometremizden gelen değer
  Serial.println(deger); // Gelen Değeri ekrana yazdırıyoruz
  delay(100); // 100 milisaniyede bir kodu tekrarla
  
}
