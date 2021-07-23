/*
Topic: Arduino Led Kullanımı
Author: Furkan Doğan (https://www.youtube.com/channel/UC64VitGjKnw-PFYZjdWSNoQ)
Date: 23.07.2021 23:15
*/

#define led 7 // Ledi bağladığımız dijital pin

void setup() {
  // put your setup code here, to run once:
  pinMode(led, OUTPUT); // Ledimizi çıkış olarak ayarlıyoruz.

}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(led, HIGH); // Ledi yak
  delay(100); // 1 saniye bekle
  digitalWrite(led, LOW); // Ledi söndür
  delay(100); // 1 saniye bekle

  // Kodlar loop içinde olduğundan dolayı sürekli tekrarlanacaktır.

}
