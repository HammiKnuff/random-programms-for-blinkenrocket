/*Police Light Thing for Blinkenrocket.
 * This is nothing sepcial!
 * -Hammi 10.12.17
 */


void setup() {
  #define delay1 50
  #define delay2 100

int inMin = 0; // init pin 0 
int inMax = 15; // to pin 15
for(int i=inMin; i<=inMax; i++)
{
  pinMode(i, OUTPUT); // as OUTPUT
}
}


void loop() {
 
  digitalWrite(15, HIGH);
  digitalWrite(14, HIGH);
  digitalWrite(13, HIGH);
  digitalWrite(12, HIGH);
    
   delay(delay1);                      
      digitalWrite(15, LOW);
      digitalWrite(14, LOW);
      digitalWrite(13, LOW);
      digitalWrite(12, LOW);
        
  delay(delay1);                       
    digitalWrite(15, HIGH);
    digitalWrite(14, HIGH);
    digitalWrite(13, HIGH);
    digitalWrite(12, HIGH);
  
  delay(delay1);                       
    digitalWrite(15, LOW);
    digitalWrite(14, LOW);
    digitalWrite(13, LOW);
    digitalWrite(12, LOW);
  
  delay(delay1);                       
    digitalWrite(11, HIGH);
    digitalWrite(10, HIGH);
    digitalWrite(9, HIGH);
    digitalWrite(8, HIGH);
  
  delay(delay1);                       
    digitalWrite(11, LOW);
    digitalWrite(10, LOW);
    digitalWrite(9, LOW);
    digitalWrite(8, LOW);
  
  delay(delay1);  
  digitalWrite(11, HIGH);
  digitalWrite(10, HIGH);
  digitalWrite(9, HIGH);
  digitalWrite(8, HIGH);
  delay(delay1);                       
  digitalWrite(11, LOW);
  digitalWrite(10, LOW);
  digitalWrite(9, LOW);
  digitalWrite(8, LOW);
  
  delay(delay2);   
  }
