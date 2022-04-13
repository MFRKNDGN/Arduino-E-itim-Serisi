/*
Topic: Arduino KY-039 Parmak Nabız Sensörü Kullanımı
Author: Furkan Doğan (https://www.youtube.com/channel/UC64VitGjKnw-PFYZjdWSNoQ)
Date: 13.04.2022 21:33
*/

const int sensor = A0; //Sensörümüzün hangi pinde olduğunu tanımlıyoruz
int periyot = 20;
double alfa = 0.75;
double yenileme = 0.0;
static double oncekideger = 0;
static double oncekiyenileme = 0;
//Bu kısımlar yapacağımız matematiksel hesaplamalar için gerekli


void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600); //Seri haberleşmeyi başlatıyoruz
  pinMode(sensor,INPUT); //Sensörümüzü giriş olarak ayarlıyoruz
  
}

void loop() {
  // put your main code here, to run repeatedly:
  int ritim = analogRead(A0); //Analog pinden nabız değerini okuyoruz

  double deger = alfa*oncekideger+(0-alfa)*ritim;
  yenileme = deger-oncekideger;
  Serial.println(ritim/10); //Nabızı seri monitöre yazdırıyoruz
  oncekideger = deger;
  oncekiyenileme = yenileme;
  delay(periyot*10); //Bir süre bekliyoruz
  //Kodun bu kısmı loop içerisinde olduğu için sona gelince tekrar baştan başlayacaktır
  
  
}
