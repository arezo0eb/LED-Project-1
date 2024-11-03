#include <LiquidCrystal.h>
// تعریف پین‌ها
const int rs = d7 = 2, tring = 9, echo = 8;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

int duration;
int distances;
void setup() {
 // راه‌اندازی مانیتور سریال
  Serial.begin(9600);
  // راه‌اندازی پین‌ها
  pinMode(tring , OUTPUT);
  pinMode(echo, INPUT);

}

void loop() {
  // ارسال پالس
  digitalWrite(tring, LOW);
  delayMicroseconds(2);
  digitalWrite(tring, HIGH);
  delayMicroseconds(10);
  digitalWrite(tring, LOW);

  // دریافت زمان پاسخ
  duration = pulseIn(echo, HIGH);
// محاسبه فاصله (در سانتی‌متر)
  distances = (duration / 2) * 0.0343;
  // چاپ فاصله در مانیتور سریال
  Serial.println(distances);
 // تاخیر قبل از اندازه‌گیری بعدی
  delayMicroseconds(1000);
}