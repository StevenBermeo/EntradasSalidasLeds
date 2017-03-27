/**********************************************************************************
**                                                                               **
**                                  TÍTOL: DIsplay nom                           **
**                                                                               **
**   Nom: Kevin Steven Bermeo Alvarado                           Data:06/03/2017 **
**********************************************************************************/

//************************* INCLUDE ***********************************************

//********** Variables ********************************************************
const int ledA = 5;
const int ledB = 6;
const int ledC = 7;
const int ledD = 8;
const int ledE = 10;
const int ledF = 11;
const int ledG = 12;
long a = 500;
//********** Setup ************************************************************
void setup()
{
 pinMode ( ledA,OUTPUT );
 pinMode ( ledB,OUTPUT );
 pinMode ( ledC,OUTPUT );
 pinMode ( ledD,OUTPUT );
 pinMode ( ledE,OUTPUT );
 pinMode ( ledF,OUTPUT );
 pinMode ( ledG,OUTPUT );
 }
//********** Loop *************************************************************
void loop()
{       //la letra S
  digitalWrite ( ledA , HIGH);
  digitalWrite ( ledB , LOW);
  digitalWrite ( ledC , HIGH);  
  digitalWrite ( ledD , HIGH);
  digitalWrite ( ledE , LOW);
  digitalWrite ( ledF , HIGH);
  digitalWrite ( ledG , HIGH);
  
  delay(a);
  //la letra T
  digitalWrite ( ledA , LOW);
  digitalWrite ( ledB , LOW);
  digitalWrite ( ledC , LOW);  
  digitalWrite ( ledD , HIGH);
  digitalWrite ( ledE , HIGH);
  digitalWrite ( ledF , HIGH);
  digitalWrite ( ledG , HIGH);

  delay(a);
//la letra I
  digitalWrite ( ledA , LOW);
  digitalWrite ( ledB , HIGH);
  digitalWrite ( ledC , HIGH);  
  digitalWrite ( ledD , LOW);
  digitalWrite ( ledE , LOW);
  digitalWrite ( ledF , LOW);
  digitalWrite ( ledG , LOW);
  
  delay(a);
 //la letra F
  digitalWrite ( ledA , HIGH);
  digitalWrite ( ledB , LOW);
  digitalWrite ( ledC , LOW);  
  digitalWrite ( ledD , LOW);
  digitalWrite ( ledE , HIGH);
  digitalWrite ( ledF , HIGH);
  digitalWrite ( ledG , HIGH);
  
  delay(a);
  //la letra F
  digitalWrite ( ledA , HIGH);
  digitalWrite ( ledB , LOW);
  digitalWrite ( ledC , LOW);  
  digitalWrite ( ledD , LOW);
  digitalWrite ( ledE , HIGH);
  digitalWrite ( ledF , HIGH);
  digitalWrite ( ledG , HIGH);

  delay(a);
  //la letra B
  digitalWrite ( ledA , HIGH);
  digitalWrite ( ledB , HIGH);
  digitalWrite ( ledC , HIGH);  
  digitalWrite ( ledD , HIGH);
  digitalWrite ( ledE , HIGH);
  digitalWrite ( ledF , HIGH);
  digitalWrite ( ledG , HIGH);
  
  delay(a);
  // la letra A
  digitalWrite ( ledA , HIGH);
  digitalWrite ( ledB , HIGH);
  digitalWrite ( ledC , HIGH);  
  digitalWrite ( ledD , LOW);
  digitalWrite ( ledE , HIGH);
  digitalWrite ( ledF , HIGH);
  digitalWrite ( ledG , HIGH);
    
   delay(a);
}

