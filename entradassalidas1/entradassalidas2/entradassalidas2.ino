/**********************************************************************************
**                                                                               **
**                                  TÍTOL: Array de 8 Leds "2"                   **
**                                                                               **
**   Nom: Kevin Steven Bermeo Alvarado                           Data:06/03/2017 **
**********************************************************************************/

//************************* INCLUDE ***********************************************

//********** Variables ********************************************************


//********** Setup ************************************************************
void setup()
{
 pinMode ( 5,OUTPUT );
 pinMode ( 6,OUTPUT );
 pinMode ( 7,OUTPUT );
 pinMode ( 8,OUTPUT );
 pinMode ( 9,OUTPUT );
 pinMode ( 10,OUTPUT );
 pinMode ( 11,OUTPUT );
 pinMode ( 12,OUTPUT );
 }
//********** Loop *************************************************************
void loop()
{
  digitalWrite ( 5 , HIGH);
  digitalWrite ( 6 , LOW);
  digitalWrite ( 7 , HIGH);
  digitalWrite ( 8 , LOW);
  digitalWrite ( 9 , HIGH);
  digitalWrite ( 10 , LOW);
  digitalWrite ( 11 , HIGH);
  digitalWrite ( 12 , LOW);

  delay(300);
  
  digitalWrite ( 5 , LOW);
  digitalWrite ( 6 , HIGH );
  digitalWrite ( 7 , LOW);
  digitalWrite ( 8 , HIGH);
  digitalWrite ( 9 , LOW);
  digitalWrite ( 10 , HIGH);
  digitalWrite ( 11 , LOW);
  digitalWrite ( 12 , HIGH);  

  delay (300);
}

