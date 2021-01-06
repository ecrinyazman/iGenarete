int counter;

void setup()
{
  pinMode(10, INPUT);   // 10. pini giriş olarak ayarlar.
  pinMode(8, OUTPUT);   // 9. pini çıkış olarak ayarlar.
}

void loop()
{
  if (digitalRead(10) == 1) {  // eğer 10. pinde pozitif sinyal var ise...
    for (counter = 0; counter < 30; ++counter) { // önce counter değişkenini 1 kerelik olarak 0 a ayarla sonra counter 30 dan büyükse counter "++" olarak ayarla.
      digitalWrite(8, HIGH);  // 9. pini aç.
      delay(200); // 200 milisaniye bekle.
      digitalWrite(8, LOW); // 9. pini kapat.
      delay(200); // 200 milisaniye bekle.
    }  
  } else { // eğer bu durum yok ise...
    digitalWrite(8, LOW); // 9. pini kapat.
  }
}


// Ecrin Yazman tarafından tinkercad kullanarak programlanmıştır devrenin gerçek hayattiki görünümünün resmi dosyadadır.


// Ecrin Yazman
// iletişim: ecrinyyazman@gmail.com 
