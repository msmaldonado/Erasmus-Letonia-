int GREENCAR = 13;
int YELLOWCAR = 11;
int REDCAR = 10;
int BLUEPERSON = 7;
int REDPERSON = 5;
int BUZZER = 8;
int BUTTON = 2; 
int LIGHTSENSOR= A0;
int PUSH;
int PASSLIGHT;
void setup() {
  // put your setup code here, to run once:
 pinMode (GREENCAR, OUTPUT);
 digitalWrite (GREENCAR, HIGH);
 pinMode (YELLOWCAR, OUTPUT);
 digitalWrite (YELLOWCAR, OUTPUT);
 pinMode (REDCAR, OUTPUT);
 digitalWrite (REDCAR, LOW);
 pinMode (BLUEPERSON,OUTPUT);
 digitalWrite (BLUEPERSON, LOW);
 pinMode (REDPERSON, OUTPUT);
 digitalWrite (REDPERSON, LOW);
 pinMode (BUZZER,OUTPUT);
 pinMode(BUTTON, INPUT);
 Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  PUSH = digitalRead(BUTTON);
  PASSLIGHT = analogRead (A0);
  Serial.print("el valor de luz es ");
  Serial.print(PASSLIGHT);
  Serial.print("\n");
  if (PUSH == LOW && PASSLIGHT<100){
  digitalWrite(GREENCAR, HIGH);
  digitalWrite(REDCAR, LOW);
  digitalWrite(YELLOWCAR, LOW);
  digitalWrite(REDPERSON, HIGH);
  digitalWrite(BLUEPERSON, LOW);
}else{
  digitalWrite(YELLOWCAR, HIGH);
  digitalWrite(GREENCAR, LOW);
  digitalWrite(REDCAR, LOW);
  digitalWrite(BLUEPERSON, LOW);
  digitalWrite(REDPERSON, HIGH);
delay(1250);
digitalWrite(YELLOWCAR,LOW);
digitalWrite(GREENCAR, LOW);
digitalWrite(REDCAR, HIGH);
digitalWrite(BLUEPERSON, HIGH);
digitalWrite(REDPERSON, LOW);
tone(BUZZER,234);
delay(1000);
noTone(BUZZER);
delay(1000);
tone(BUZZER,234);
delay(700);
noTone(BUZZER);
delay(700);
tone(BUZZER,234);
delay(500);
noTone(BUZZER);
delay(500);
tone(BUZZER,234);
delay(300);
noTone(BUZZER);
delay(300);
tone(BUZZER,234);
delay(100);
noTone(BUZZER);
delay(100);
tone(BUZZER,234);
delay(100);
noTone(BUZZER);
delay(80);
tone(BUZZER,234);
delay(50);
noTone(BUZZER);
delay(30);
tone(BUZZER,234);
delay(4000);
noTone(BUZZER);
digitalWrite(REDCAR,HIGH);
digitalWrite(YELLOWCAR,LOW);
digitalWrite(GREENCAR,LOW);
digitalWrite(BLUEPERSON,LOW);
digitalWrite(REDPERSON,LOW);
delay(3000);


 
  }

}
