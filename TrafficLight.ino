// Making variable for input pin, make sure to match your pin number for each colours.
int red = 7;
int yellow = 8;
int green = 9;

void setup(){
  pinMode(red, OUTPUT);
  pinMode(yellow, OUTPUT);
  pinMode(green, OUTPUT);
}

void loop(){
// Indonesian traffic light system. Red to Green(red, red-yellow, and then green) Green to Red(green, red).
  digitalWrite(red, HIGH);
  delay(3000);
  digitalWrite(yellow, HIGH);
  delay(2000);
  digitalWrite(red, LOW);
  digitalWrite(yellow, LOW);

  digitalWrite(green, HIGH);
  delay(3000);
  digitalWrite(green, LOW);
  delay(1000);
}