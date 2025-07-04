int whiteleft = 10;
int whiteright = 9;
int green = 11;
int blue = 12;
int red = 13;
int leftbutton = 5;
int buzzer = 8;
int rightbutton = 6;
bool buttonpressed = 0;
void setup()
{
  pinMode(whiteleft, OUTPUT);
  pinMode(whiteright, OUTPUT);
  pinMode(green, OUTPUT);
  pinMode(blue, OUTPUT);
  pinMode(red, OUTPUT);
  pinMode(leftbutton, INPUT_PULLUP);
  pinMode(buzzer, OUTPUT);
  pinMode(rightbutton, INPUT_PULLUP);
  randomSeed(analogRead(A0));

}
void loop()
{
  digitalWrite(green, HIGH);
  digitalWrite(buzzer, HIGH);
  delay(100);
  digitalWrite(buzzer, LOW);
  delay(900);
  digitalWrite(blue, HIGH);
  digitalWrite(buzzer, HIGH);
  delay(100);
  digitalWrite(buzzer, LOW);
  delay(900);
  digitalWrite(blue, LOW);
  digitalWrite(buzzer, HIGH);
  delay(random(900 - 4901));
  digitalWrite(red, HIGH);
  delay(100);
  digitalWrite(buzzer, LOW);
  while (buttonpressed == 0);
  {
    digitalWrite(whiteleft, HIGH);
    digitalWrite(whiteright, LOW);
    if (digitalRead(leftbutton) == 0)
    {
      buttonpressed = 1;
      digitalWrite(whiteright, LOW);

    }
    else if (digitalRead(whiteright) == 0)
    {
      buttonpressed = 1;
      digitalWrite(whiteleft, LOW);
    }
  }
  digitalWrite(buzzer, HIGH);
  delay(500);
  digitalWrite(buzzer, LOW);
  delay(1500);
  digitalWrite(whiteleft, LOW);
  digitalWrite(whiteright, HIGH);
  buttonpressed = 0;
  digitalWrite(buzzer, HIGH);
}
