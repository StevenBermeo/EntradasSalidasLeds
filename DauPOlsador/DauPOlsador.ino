/**********************************************************************************
**                                                                               **
**                                  TÍTOL: Dau de leds random                    **
**                                                                               **
**   Nom: Kevin Steven Bermeo Alvarado                           Data:06/03/2017 **
**********************************************************************************/

//************************* INCLUDE ***********************************************

//********** Variables ********************************************************
const int dau1 = 4;
const int dau2 = 5;
const int dau3 = 6;
const int dau4 = 7;
const int polsador = 8;
long a = 1000;


//********** Setup ************************************************************
void setup()
{
  pinMode ( dau1, OUTPUT );
  pinMode ( dau2, OUTPUT );
  pinMode ( dau3, OUTPUT );
  pinMode ( dau4, OUTPUT );
  pinMode ( polsador, INPUT );
}
//********** Loop *************************************************************
void loop()
{
  long nom;
  int i;

  digitalWrite ( dau1 , LOW);
  digitalWrite ( dau4 , LOW);
  digitalWrite ( dau2 , LOW);
  digitalWrite ( dau3 , LOW);
  Serial.begin (9600);
  if ( digitalRead(polsador))
  {
    Serial.println ("ok");
    nom = random( 1 , 6 );
    Serial.println (nom);
  for (i = 0; i < 5; i++)
  {
  digitalWrite ( dau1 , HIGH);
  digitalWrite ( dau4 , LOW);
  digitalWrite ( dau2 , LOW);  
  digitalWrite ( dau3 , LOW);

  delay(100);
  
  digitalWrite ( dau1 , LOW);  
  digitalWrite ( dau2 , HIGH);

  delay(100);

  digitalWrite ( dau1 , HIGH);  
  digitalWrite ( dau3 , HIGH);
  digitalWrite ( dau2 , LOW);  

   delay(100);

  digitalWrite ( dau1 , LOW);  
  digitalWrite ( dau3 , HIGH);
  digitalWrite ( dau2 , HIGH); 

   delay(100);

  digitalWrite ( dau1 , HIGH);  
  digitalWrite ( dau3 , HIGH);
  digitalWrite ( dau2 , HIGH); 

   delay(100);

  digitalWrite ( dau2 , HIGH);  
  digitalWrite ( dau3 , HIGH);
  digitalWrite ( dau1 , LOW); 
  digitalWrite ( dau4 , HIGH); 
  delay(100);
  }
    
  delay (500);

  if ( nom == 1 )
  {
    digitalWrite ( dau1 , HIGH);
    digitalWrite ( dau4 , LOW);
    digitalWrite ( dau2 , LOW);
    digitalWrite ( dau3 , LOW);
    delay (a);
  }
  else if ( nom == 2 )
  {
    digitalWrite ( dau1 , LOW);
    digitalWrite ( dau2 , HIGH);
    digitalWrite ( dau3 , LOW );
    digitalWrite ( dau4 , LOW );
    delay (a);
  }  

  else if ( nom == 3 )
  {
    digitalWrite ( dau1 , HIGH);
    digitalWrite ( dau3 , HIGH);
    digitalWrite ( dau2 , LOW);
    digitalWrite ( dau4 , LOW);
    delay (a);
  }  
  else if ( nom == 4 )
  {
    digitalWrite ( dau1 , LOW);
    digitalWrite ( dau3 , HIGH);
    digitalWrite ( dau2 , HIGH);
    digitalWrite (dau4 , LOW);
    delay (a);
  }  

  else if ( nom == 5 )
  {
    digitalWrite ( dau1 , HIGH);
    digitalWrite ( dau3 , HIGH);
    digitalWrite ( dau2 , HIGH);
    digitalWrite ( dau4 , LOW );
    delay (a);
  }
  else 
  {
    digitalWrite ( dau2 , HIGH);
    digitalWrite ( dau3 , HIGH);
    digitalWrite ( dau1 , LOW);
    digitalWrite ( dau4 , HIGH);
    delay (a);
    
  }
  }  
  
  delay (a);
}

