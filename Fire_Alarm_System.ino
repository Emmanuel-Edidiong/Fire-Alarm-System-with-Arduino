
int buzzer = 4, sensor = 3;
int sensordata=1;

void setup() {
  // put your setup code here, to run once:
pinMode(sensor,INPUT);
pinMode(buzzer,OUTPUT);
Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  sensordata = digitalRead(sensor);
  digitalWrite(buzzer,LOW);
if (sensordata== 0){
  digitalWrite(buzzer,HIGH);
  Serial.println("Flame detected");
  
 
}

else if (sensordata==1){
  digitalWrite(buzzer,LOW);
  Serial.println("We are safe");
}
delay(1000);
}
