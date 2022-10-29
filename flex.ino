// ID OF USER: Rakeshtsg
// INTERFACE: Arduino with flex
// Using Arduino IDE 
// Using with arduino
// Tested on N/A
// Please refer circuitry in github for use
//int led = 13; 

int flexs = A0; // flex sensor is connected with analog pin A0
int data = 0; 

int led = 13; 
void setup()
{
  Serial.begin(9600); 
  pinMode(flexs, INPUT);
pinMode(led, OUTPUT);   
}

void loop()
{
  data = analogRead(flexs); 
  Serial.println(data); 
  
  if( data <= 200) 
  {
   digitalWrite(led, HIGH);  
  }
  
    if( data > 200) 
  {
   digitalWrite(led, LOW);  
  }
  delay(1000); 
}
