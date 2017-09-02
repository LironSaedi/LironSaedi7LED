
int topLeft = 2;
int top = 3;
int topRight = 4;
int bottomRight = 5;
int bottom = 6;
int bottomLeft = 7;
int middle = 8;
int dot = 9;
int delayV = 10
0;

int pins[] = { 2, 3, 4, 5, 6, 7, 8, 9 };

int one[] = { 0, 0, 1, 1, 0, 0, 0, 0 };
int two[] = { 0, 1, 1, 0, 1, 1, 1, 0 };
int three[] = { 0, 1, 1, 1, 1, 0, 1, 0 };
int four[] = { 1, 0, 1, 1, 0, 0, 1, 0  };
int five[] = { 1, 1, 0, 1 , 1, 0, 1, 0 };
int six[] = {1, 1, 0, 1, 1, 1, 1, 0};
int seven[] = {0, 1, 1, 1, 0, 0, 0, 0,};
int eight[] = {1, 1, 1, 1, 1, 1, 1, 1, 0};
int nine[] = {1, 1, 1, 1, 0, 0, 1, 0};
//int firstnumber[] = six;
//int secondnumber[] = four;
//int thirdnumber[] = eight;
//int fourthnumber[] = two;
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
  //  writeNum(one, true);
  //  delay(delayV);
  //  writeNum(one, false);
  //  delay(delayV);
  //  writeNum(two, true);
  //  delay(delayV);
  //  writeNum(two, false);
  //  delay(delayV);
  //  writeNum(three, true);
  //  delay(delayV);
  //  writeNum(three, false);
  //  delay(delayV);
  //  writeNum(four, true);
  //  delay(delayV);
  //  writeNum(four, false);
  //  delay(delayV);
  //  writeNum(five, true);
  //  delay(delayV);
  //  writeNum(five, false);
  //  delay(delayV);
  //  writeNum(six, true);
  //  delay(delayV);
  //  writeNum(six, false);
  //  delay(delayV);
  //  writeNum(seven, true);
  //  delay(delayV);
  //  writeNum(seven, false);
  //  delay(delayV);
  //  writeNum(eight, true);
  //  delay(delayV);
  //  writeNum(eight, false);
  //  delay(delayV);
  //  writeNum(nine, true);
  //  delay(delayV);
  //
  //  writeNum(nine, false);


displayFourNumbers(six,four,eight,two);



  //  digitalWrite(top, HIGH);
  //  digitalWrite(topRight, HIGH);
  //  digitalWrite(middle, HIGH);
  //  digitalWrite(bottomRight, HIGH);
  //  digitalWrite(bottom, HIGH);
  //  delay(100);
  //  digitalWrite(top, LOW);
  //  digitalWrite(topRight, LOW);
  //  digitalWrite(middle, LOW);
  //  digitalWrite(bottomRight, LOW);
  //  digitalWrite(bottom, LOW);
  //  delay(100);
}

void writeNum(int num[], bool on)
{
  for (int i = 0; i < 8; i++)
  {
    digitalWrite(pins[i], on ? num[i] : 0);
  }
}
void displayFourNumbers(int firstNumber[], int secondNumber[], int thirdNumber[], int fourthNumber[])
{


  for (int i = 0; i < 1; i++)
  {
    writeNum(firstNumber, true);
    delay(delayV);
    writeNum(firstNumber, false);
    delay(delayV);
  }
  delay(1000);
  for (int i = 0; i < 1; i++)
  {
    writeNum(secondNumber, true);
    delay(delayV);
    writeNum(secondNumber, false);
    delay(delayV);
  }
  delay(1000);
  for (int i = 0; i < 1; i ++)
  {

    writeNum(thirdNumber, true);
    delay(delayV);
    writeNum(thirdNumber, false);
    delay(delayV);
  }
  delay(1000);
  for (int i = 0 ; i < 1; i++)
  {
    writeNum(fourthNumber, true);
    delay(delayV);
    writeNum(fourthNumber, false);
    delay(delayV);
  }
  delay(1000);
}




