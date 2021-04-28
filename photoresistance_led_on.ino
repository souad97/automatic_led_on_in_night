const char AN_PHOTORESISTANCE = A0;
const char DOUT_LED = 13;

void setup()
{
  Serial.begin(9600);
  pinMode(DOUT_LED,OUTPUT);
}
void loop()
{
  int valeurSurA0 = analogRead(AN_PHOTORESISTANCE);
 Serial.println(valeurSurA0);
  if(valeurSurA0>500)
    {
  digitalWrite(DOUT_LED, HIGH);}else{
    digitalWrite(DOUT_LED, LOW);
    
  }
}
