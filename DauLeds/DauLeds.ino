/**********************************************************************************
**                                                                               **
**                                  TÍTOL: Dau de leds                           **
**                                                                               **
**   Nom: Kevin Steven Bermeo Alvarado                           Data:06/03/2017 **
**********************************************************************************/

//************************* INCLUDE ***********************************************

//********** Variables ********************************************************
const int dau1 = 4;
const int dau2 = 5;
const int dau3 = 6;
const int dau4 = 7;

long a = 1000;
//********** Setup ************************************************************
void setup()
{
 pinMode ( dau1,OUTPUT );
 pinMode ( dau2,OUTPUT );
 pinMode ( dau3,OUTPUT );
 pinMode ( dau4,OUTPUT );
 
 }
//********** Loop *************************************************************
void loop()
{
  digitalWrite ( dau1 , HIGH);
  digitalWrite ( dau4 , LOW);
  digitalWrite ( dau2 , LOW);  
  digitalWrite ( dau3 , LOW);

  delay(a);
  
  digitalWrite ( dau1 , LOW);  
  digitalWrite ( dau2 , HIGH);

  delay(a);

  digitalWrite ( dau1 , HIGH);  
  digitalWrite ( dau3 , HIGH);
  digitalWrite ( dau2 , LOW);  

   delay(a);

  digitalWrite ( dau1 , LOW);  
  digitalWrite ( dau3 , HIGH);
  digitalWrite ( dau2 , HIGH); 

   delay(a);

  digitalWrite ( dau1 , HIGH);  
  digitalWrite ( dau3 , HIGH);
  digitalWrite ( dau2 , HIGH); 

   delay(a);

  digitalWrite ( dau2 , HIGH);  
  digitalWrite ( dau3 , HIGH);
  digitalWrite ( dau1 , LOW); 
  digitalWrite ( dau4 , HIGH); 

  delay(a);
}

