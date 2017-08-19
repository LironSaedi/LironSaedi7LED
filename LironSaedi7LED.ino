
int topLeft = 2;
int top = 3;
int topRight = 4;
int bottomRight = 5;
int bottom = 6;
int bottomLeft = 7;
int middle = 8;
int dot = 9;

int pins[] = { 2, 3, 4, 5, 6, 7, 8, 9 };

int one[] = { 0, 0, 1, 1, 0, 0, 0, 0 };
int two[] = { 0, 1, 1, 0, 1, 1, 1, 0 };
int three[] = { 0, 1, 1, 1, 1, 0, 1, 0 };

void setup()
{
  pinMode(top, OUTPUT);
  pinMode(topLeft, OUTPUT);
  pinMode(topRight, OUTPUT);
  pinMode(middle, OUTPUT);
  pinMode(bottomRight, OUTPUT);
  pinMode(bottomLeft, OUTPUT);
  pinMode(bottom, OUTPUT);
  pinMode(middle, OUTPUT);
}

void loop()
{
  writeNum(one, true);
  delay(100);
  writeNum(one, false);
  delay(100);
  writeNum(two, true);
  delay(100);
  writeNum(two, false);

  delay(100);

  digitalWrite(top, HIGH);
  digitalWrite(topRight, HIGH);
  digitalWrite(middle, HIGH);
  digitalWrite(bottomRight, HIGH);
  digitalWrite(bottom, HIGH);
  delay(100);
  digitalWrite(top, LOW);
  digitalWrite(topRight, LOW);
  digitalWrite(middle, LOW);
  digitalWrite(bottomRight, LOW);
  digitalWrite(bottom, LOW);
  delay(100);
}

void writeNum(int num[], bool on)
{
  for (int i = 0; i < 8; i++)
  {
    digitalWrite(pins[i], on ? num[i] : 0);
  }
}
