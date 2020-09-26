int Ldr=A0;
int value=0;
void setup()
{
Serial.begin(9600);
pinMode(8, OUTPUT);
}
void loop()
{
value=analogRead(Ldr);
Serial.println(value);
if(value<80)
{
digitalWrite(8, LOW);
}
else
{
    digitalWrite(8, HIGH);
}
}
