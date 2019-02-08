int ledred1 = 12;
int ledyellow1 = 11;
int ledgreen1 = 10;
int ledred2 = 9;
int ledyellow2 = 7;
int ledgreen2 = 6;
int tempo = 2000;
int tempodellampeggio = 1000;
int numerolampeggi = 4;
Serial.begin(9600);

void metodolampeggio1(){
  
  delay(tempo);
  digitalWrite(ledred1,LOW);
  digitalWrite(ledyellow2,LOW);
  digitalWrite(ledyellow1,LOW);
  digitalWrite(ledyellow2,LOW);
  digitalWrite(ledred2,HIGH);
  digitalWrite(ledgreen1,HIGH);
  delay(tempo);
  
  for (int i = 0; i < numerolampeggi; i++)
  {
    digitalWrite(ledgreen1,HIGH);
    delay(tempodellampeggio);
    digitalWrite(ledgreen1,LOW);
    delay(tempodellampeggio);
  }
  digitalWrite(ledyellow1,HIGH);
  digitalWrite(ledyellow2,HIGH);
}
void metodolampeggio2(){
  
  delay(tempo);
  digitalWrite(ledred2,LOW);
  digitalWrite(ledyellow2,LOW);
  digitalWrite(ledyellow1,LOW);
  digitalWrite(ledyellow2,LOW);
  digitalWrite(ledred1,HIGH);
  digitalWrite(ledgreen2,HIGH);
  delay(tempo);
  for (int i = 0; i < numerolampeggi; i++)
  {
    digitalWrite(ledgreen2,HIGH);
    delay(tempodellampeggio);
    digitalWrite(ledgreen2,LOW);
    delay(tempodellampeggio);
   }
   digitalWrite(ledyellow1,HIGH);
   digitalWrite(ledyellow2,HIGH);
   
   
}
void setup() {
  // put your setup code here, to run once:
   pinMode(ledred1,OUTPUT);
   pinMode(ledyellow1,OUTPUT);
   pinMode(ledgreen1,OUTPUT);
   pinMode(ledred2,OUTPUT);
   pinMode(ledyellow2,OUTPUT);
   pinMode(ledgreen2,OUTPUT);
 
                                                 
}

               
void loop() {
  // put your main code here, to run repeatedly:

  Serial.printIn("Inserisci numero lampeggi");
  int numerolampeggi = Serial.readString().toInt();
  Serial.printIn("inserisci durata del led giallo");
  int durataledgiallo = Serial.readString().toInt();
  Serial.printIn("inserisci durata del semaforo");
  int duratasemaforo = Serial.readString().toInt();
  Serial.printIn("inserisci durata di un lampeggio");
  int tempolampeggio = Serial.readString().toInt();
  
  metodolampeggio1();
  metodolampeggio2();
  
  }
