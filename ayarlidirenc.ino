void setup() {
  Serial.begin(9600);
 

}
int sicaklikPin=A0;

void loop() {
  int sicaklikDeger=analogRead(sicaklikPin);
  Serial.print("Sicaklik :");
  Serial.println(sicaklikDeger);
  if(sicaklikDeger>0) digitalWrite(2,HIGH);else digitalWrite<(2,LOW);
  if(sicaklikDeger>150) digitalWrite(3,HIGH);else digitalWrite<(3,LOW);
  if(sicaklikDeger>300) digitalWrite(4,HIGH);else digitalWrite<(4,LOW);
  if(sicaklikDeger>450) digitalWrite(5,HIGH);else digitalWrite<(5,LOW);
  if(sicaklikDeger>600) digitalWrite(6,HIGH);else digitalWrite<(6,LOW);
  if(sicaklikDeger>750) digitalWrite(7,HIGH);else digitalWrite<(7,LOW);
  if(sicaklikDeger>900) digitalWrite(8,HIGH);else digitalWrite<(8,LOW);
  if(sicaklikDeger>1050) digitalWrite(9,HIGH);else digitalWrite<(9,LOW);
  
  delay(100);

}





































































































  
 
