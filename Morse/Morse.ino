/******************************************************************************
**                                                                           **
**                              Morse                                        **
**                                                                           **
**                                                                           **
******************************************************************************/

//****** Includes *************************************************************

//****** Variables ************************************************************
const int pin = 9;   // pin for speaker

int note = 1047;
int velocitat = 10;

//****** Setup ****************************************************************
void setup()
{
}

//****** Loop *****************************************************************
void loop()
{
  //a
  punt();
  ratlla();
  espaiL();
  
  //p
  punt();
  ratlla();
  ratlla();
  punt();
  espaiL();
  
  //r
  punt();
  ratlla();
  punt();
  espaiL();

  //o
  ratlla();
  ratlla();
  ratlla();
  espaiL();
  
  //b
  ratlla();
  punt();
  punt();
  punt();
  espaiL();
  
  //a
  punt();
  ratlla();
  espaiL();

  //t
  ratlla();
  espaiP();
  
  //o
  ratlla();
  ratlla();
  ratlla();
  espaiP();
  
  //k
  ratlla();
  punt();
  ratlla();
  espaiL();

  //L
  punt();
  ratlla();
  punt();
  punt();
  espaiL();
  
  //k
  ratlla();
  punt();
  ratlla();
  espaiP();

}

//****** Funcions *************************************************************
void punt()
{
  tone(pin, note, 1000/velocitat);
  delay(1000/velocitat); 
  delay(1000/velocitat); 
}

void ratlla()
{
  tone(pin, note, 3*(1000/velocitat));
  delay(3*(1000/velocitat)); 
  delay(1000/velocitat);  
}

void espaiL()  //Espai entre lletres
{  
  delay(2*(1000/velocitat));  
}

void espaiP()  //Espai entre paraules
{   
  delay(6*(1000/velocitat));  
}

