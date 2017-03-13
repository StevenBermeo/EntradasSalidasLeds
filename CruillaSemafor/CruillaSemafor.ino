/**********************************************************************************
**                                                                               **
**                                  TÍTOL: Cruilla de Semafor                 **
**                                                                               **
**   Nom: Kevin Steven Bermeo Alvarado                           Data:06/03/2017 **
**********************************************************************************/

//************************* INCLUDE ***********************************************

//********** Variables ********************************************************
const int led1V = 5;
const int led1C = 6;
const int led1R = 7;
const int led2V = 9;
const int led2C = 10;
const int led2R = 11;
long a = 25;
//********** Setup ************************************************************
void setup()
{
 pinMode ( led1V,OUTPUT );
 pinMode ( led1C,OUTPUT );
 pinMode ( led1R,OUTPUT );
 pinMode ( led2V,OUTPUT );
 pinMode ( led2C,OUTPUT );
 pinMode ( led2R,OUTPUT );
 
 }
//********** Loop *************************************************************
void loop()
{
  digitalWrite ( led2R , HIGH);
  digitalWrite ( led1R , HIGH);
  
  delay(a);
  
  digitalWrite ( led2R , LOW);  
  digitalWrite ( led2V , HIGH);

  delay(a);

  digitalWrite ( led2V , LOW);  
  digitalWrite ( led2C , HIGH);
  
  delay(a);

  digitalWrite ( led2C , LOW);  
  digitalWrite ( led2R, HIGH);
  delay(a);

  digitalWrite ( led1V,HIGH);
  digitalWrite ( led1R,LOW);  

  delay(a);

  digitalWrite ( led1V , LOW);  
  digitalWrite ( led1C , HIGH);
  
  delay(a);

  digitalWrite ( led1C , LOW);
  digitalWrite ( led1R , HIGH);  
  delay(a);
}

