int led = 8;
int led1= 12;

void setup () {
    pinMode ( led, OUTPUT);
    pinMode (led1, OUTPUT);
}

void loop() {
    digitalWrite(led , HIGH);
    delay(1000);
    digitalWrite( led,LOW);
    delay(1000);
    digitalWrite (led1,HIGH);
    delay(1000);
    digitalWrite(led1,LOW);
    delay(1000);
}