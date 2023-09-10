// C++ code
//
int value; 
float signal;
float temp;
void setup()
{
  Serial.begin(9600);
  pinMode(5, OUTPUT);
  pinMode(2, OUTPUT);
}

void loop()
{
  noTone(5);
  digitalWrite(2, LOW);
  digitalWrite(5, LOW);
  value = analogRead(A0);
  signal = value*5000.0/1024.0;
  temp = signal/10;
  temp = temp - 50;
  Serial.println(temp); 
  if(temp > 30){
  	digitalWrite(2, HIGH);
  }
  if(temp > 50){
    digitalWrite(5, HIGH);
    tone(5, 600);
  }
  delay(500);
}