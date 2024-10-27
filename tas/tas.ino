#define key1 digitalRead(A0)//تعریف پین کلید
const int ledPins[] = {1, 2, 3, 4, 5, 6};
//پین‌های LED برای اعداد 1 تا 6

void setup() {
  Serial.begin(9600);//راه‌اندازی ارتباط سریال

  for (int i = 0; i < 6; i++) {
    pinMode(ledPins[i], OUTPUT);//راه‌اندازی ارتباط سریال
  }
  pinMode(A0, INPUT);//پین کلید به عنوان ورودی
  randomSeed(analogRead(0));//تنوع در اعداد تصادفی
}

void loop() {
  for (int i = 0; i < 6; i++) {
    digitalWrite(ledPins[i], LOW);   // خاموش کردن تمام LEDها
  }
  if (key1 == 0) {
    int randomNumber = random(0, 6);// تولید عدد تصادفی بین 1 تا6
    digitalWrite(ledPins[randomNumber], HIGH);   // روشن کردن LED مربوط به عدد تصادفی
    Serial.print("Random Number: ");
    Serial.println(randomNumber+1);// چاپ عدد تصادفی در سریال مانیتور
    delay(1000);
  }
}
