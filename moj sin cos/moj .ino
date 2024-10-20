void setup() {
    Serial.begin(9600); // راه‌اندازی ارتباط سریال
}

void loop() {
    for (float j = 0; j < 360; j ++) {
        float a = sin(j * (PI / 180.0)); // محاسبه مقدار سینوسی
        float b = cos(j * (PI / 180.0)); // محاسبه مقدار کسینوسی
        Serial.print(a); // ارسال مقدار سینوسی
        Serial.print(" "); // فاصله برای خوانایی
        Serial.println(b); // ارسال مقدار کسینوسی
    }
}