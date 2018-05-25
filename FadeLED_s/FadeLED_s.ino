const int led0 = 3;
const int led1 = 4;
const int led2 = 5;
const int led3 = 6;
const int led4 = 7;
const int led5 = 8;
const int led6 = 9;
int button = 2;
int velocitat = 500; 

void setup()
{
Serial.begin(9600);
  pinMode(led0, OUTPUT);
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);
  pinMode(led5, OUTPUT);
  pinMode(led6, OUTPUT);
  pinMode(button, INPUT); 
}



void loop()
{
 int buttonEstat = digitalRead(button);
 if(buttonState==0)
{
analogWrite(led0, 60);
analogWrite(led1, 60);
analogWrite(led2, 60);
analogWrite(led3, 60);
analogWrite(led4, 60);
analogWrite(led5, 60);
analogWrite(led6, 60);

delay(vel); 

analogWrite(led0, 125);
analogWrite(led1, 125);
analogWrite(led2, 125);
analogWrite(led3, 125);
analogWrite(led4, 125);
analogWrite(led5, 125);
analogWrite(led6, 125);

delay(vel); 

analogWrite(led0, 255);
analogWrite(led1, 255);
analogWrite(led2, 255);
analogWrite(led3, 255);
analogWrite(led4, 255);
analogWrite(led5, 255);
analogWrite(led6, 255);

delay(vel); 

analogWrite(led0, 125);
analogWrite(led1, 125);
analogWrite(led2, 125);
analogWrite(led3, 125);
analogWrite(led4, 125);
analogWrite(led5, 125);
analogWrite(led6, 125);

delay(vel); 

analogWrite(led0, 60);
analogWrite(led1, 60);
analogWrite(led2, 60);
analogWrite(led3, 60);
analogWrite(led4, 60);
analogWrite(led5, 60);
analogWrite(led6, 60);

delay(vel); 
}

else
{
analogWrite(led0, 0);
analogWrite(led1, 0);
analogWrite(led2, 0);
analogWrite(led3, 0);
analogWrite(led4, 0);
analogWrite(led5, 0);
analogWrite(led6, 0);

delay(vel); 

analogWrite(led0, 3);
analogWrite(led1, 0);
analogWrite(led2, 0);
analogWrite(led3, 0);
analogWrite(led4, 0);
analogWrite(led5, 0);
analogWrite(led6, 0);

delay(vel); 

analogWrite(led0, 10);
analogWrite(led1, 3);
analogWrite(led2, 0);
analogWrite(led3, 0);
analogWrite(led4, 0);
analogWrite(led5, 0);
analogWrite(led6, 0);

delay(vel); 

analogWrite(led0, 25);
analogWrite(led1, 10);
analogWrite(led2, 3);
analogWrite(led3, 0);
analogWrite(led4, 0);
analogWrite(led5, 0);
analogWrite(led6, 0);

delay(vel); 

analogWrite(led0, 60);
analogWrite(led1, 25);
analogWrite(led2, 10);
analogWrite(led3, 3);
analogWrite(led4, 0);
analogWrite(led5, 0);
analogWrite(led6, 0);

delay(vel); 

analogWrite(led0, 255);
analogWrite(led1, 60);
analogWrite(led2, 25);
analogWrite(led3, 10);
analogWrite(led4, 3);
analogWrite(led5, 0);
analogWrite(led6, 0);

delay(vel); 

analogWrite(led0, 255);
analogWrite(led1, 255);
analogWrite(led2, 60);
analogWrite(led3, 25);
analogWrite(led4, 10);
analogWrite(led5, 3);
analogWrite(led6, 0);

delay(vel); 

analogWrite(led0, 255);
analogWrite(led1, 255);
analogWrite(led2, 255);
analogWrite(led3, 60);
analogWrite(led4, 25);
analogWrite(led5, 10);
analogWrite(led6, 3);

delay(vel); 

analogWrite(led0, 255);
analogWrite(led1, 255);
analogWrite(led2, 255);
analogWrite(led3, 255);
analogWrite(led4, 60);
analogWrite(led5, 25);
analogWrite(led6, 10);

delay(vel); 

analogWrite(led0, 255);
analogWrite(led1, 255);
analogWrite(led2, 255);
analogWrite(led3, 255);
analogWrite(led4, 255);
analogWrite(led5, 60);
analogWrite(led6, 25);

delay(vel); 

analogWrite(led0, 255);
analogWrite(led1, 255);
analogWrite(led2, 255);
analogWrite(led3, 255);
analogWrite(led4, 255);
analogWrite(led5, 255);
analogWrite(led6, 60);

delay(vel); 

analogWrite(led0, 255);
analogWrite(led1, 255);
analogWrite(led2, 255);
analogWrite(led3, 255);
analogWrite(led4, 255);
analogWrite(led5, 255);
analogWrite(led6, 255);

delay(vel); 

analogWrite(led0, 255);
analogWrite(led1, 255);
analogWrite(led2, 255);
analogWrite(led3, 255);
analogWrite(led4, 255);
analogWrite(led5, 255);
analogWrite(led6, 255);

delay(vel); 
 
}
}
