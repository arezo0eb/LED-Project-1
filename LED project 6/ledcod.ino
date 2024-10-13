
const int ledPin= 13

void setup(){
pinMode(ledPin,OUTPUT);
Serial.begin(9600);
}
void loop() {
if(Serial.available()>0){
 String a=Serial.readString(); 
if( a =="on"){
  digitalWrite (ledPin,HIGH);
}
else if ( a=="off"){
  digitalWrite (ledPin,LOW);
    }
   }
}