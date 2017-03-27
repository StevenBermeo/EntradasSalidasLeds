/**********************************************************************************
**                                                                               **
**                                  TÍTOL: DIsplay ciclic amb polsador           **
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
const int pol = 9;
int v;
long a = 300;
//********** Setup ************************************************************
void setup()
{
  Serial.begin (9600);
 pinMode ( ledA,OUTPUT );
 pinMode ( ledB,OUTPUT );
 pinMode ( ledC,OUTPUT );
 pinMode ( ledD,OUTPUT );
 pinMode ( ledE,OUTPUT );
 pinMode ( ledF,OUTPUT );
 pinMode ( ledG,OUTPUT );
 pinMode ( pol,INPUT );
 }
//********** Loop *************************************************************
void loop()
{
 if (digitalRead(pol))
    {
      delay(a); 
      v++ ;
     if ( v == 10)
      {
        v = 0;
      }
    }
  if ( v == 0 )
  {
  digitalWrite ( ledA , HIGH);
  digitalWrite ( ledB , HIGH);
  digitalWrite ( ledC , HIGH);  
  digitalWrite ( ledD , HIGH);
  digitalWrite ( ledE , HIGH);
  digitalWrite ( ledF , HIGH);
  digitalWrite ( ledG , LOW);
  }
  
  if ( v == 1 )
  {
  digitalWrite ( ledA , LOW);
  digitalWrite ( ledB , HIGH);
  digitalWrite ( ledC , HIGH);  
  digitalWrite ( ledD , LOW);
  digitalWrite ( ledE , LOW);
  digitalWrite ( ledF , LOW);
  digitalWrite ( ledG , LOW);
  }
  
  if ( v == 2 )
  {
  digitalWrite ( ledA , HIGH);
  digitalWrite ( ledB , HIGH);
  digitalWrite ( ledC , LOW);  
  digitalWrite ( ledD , HIGH);
  digitalWrite ( ledE , HIGH);
  digitalWrite ( ledF , LOW);
  digitalWrite ( ledG , HIGH);
  }
  
  if ( v == 3 )
  {
  digitalWrite ( ledA , HIGH);
  digitalWrite ( ledB , HIGH);
  digitalWrite ( ledC , HIGH);  
  digitalWrite ( ledD , HIGH);
  digitalWrite ( ledE , LOW);
  digitalWrite ( ledF , LOW);
  digitalWrite ( ledG , HIGH);
  }
  
  if ( v == 4 )
  {
  digitalWrite ( ledA , LOW);
  digitalWrite ( ledB , HIGH);
  digitalWrite ( ledC , HIGH);  
  digitalWrite ( ledD , LOW);
  digitalWrite ( ledE , LOW);
  digitalWrite ( ledF , HIGH);
  digitalWrite ( ledG , HIGH);  
  }
  
  if ( v == 5 )
  {
  digitalWrite ( ledA , HIGH);
  digitalWrite ( ledB , LOW);
  digitalWrite ( ledC , HIGH);  
  digitalWrite ( ledD , HIGH);
  digitalWrite ( ledE , LOW);
  digitalWrite ( ledF , HIGH);
  digitalWrite ( ledG , HIGH);
  }
  
  if ( v == 6 )
  {
  digitalWrite ( ledA , LOW);
  digitalWrite ( ledB , LOW);
  digitalWrite ( ledC , HIGH);  
  digitalWrite ( ledD , HIGH);
  digitalWrite ( ledE , HIGH);
  digitalWrite ( ledF , HIGH);
  digitalWrite ( ledG , HIGH);
  }
 
  if ( v == 7 )
  {
  digitalWrite ( ledA , HIGH);
  digitalWrite ( ledB , HIGH);
  digitalWrite ( ledC , HIGH);  
  digitalWrite ( ledD , LOW);
  digitalWrite ( ledE , LOW);
  digitalWrite ( ledF , LOW);
  digitalWrite ( ledG , LOW);
  } 
  
  if ( v == 8 )
  {
  digitalWrite ( ledA , HIGH);
  digitalWrite ( ledB , HIGH);
  digitalWrite ( ledC , HIGH);  
  digitalWrite ( ledD , HIGH);
  digitalWrite ( ledE , HIGH);
  digitalWrite ( ledF , HIGH);
  digitalWrite ( ledG , HIGH);
  }
  
  if ( v == 9 )
  {
  digitalWrite ( ledA , HIGH);
  digitalWrite ( ledB , HIGH);
  digitalWrite ( ledC , HIGH);  
  digitalWrite ( ledD , LOW);
  digitalWrite ( ledE , LOW);
  digitalWrite ( ledF , HIGH);
  digitalWrite ( ledG , HIGH);
  
  }
  delay(a);
  
}

