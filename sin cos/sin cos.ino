void setup() {
    Serial.begin(9600); // راه‌اندازی ارتباط سریال
}

void loop() {
    for (float j = 0; j < 360; j += 1) {
        Serial.println(sin(j * (PI / 180.0))); // محاسبه و ارسال مقدار سینوسی
        delay(10); // تاخیر برای خوانایی بهتر
    }
}