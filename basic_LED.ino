#include<cvzone.h>

SerialData getData(2 , 1); //(numOfValsRec , digitsPerValRec)
/*
  0 or 1 == 1 digits;
  0 to 99 == 2 digits;
  0 to 999 == 3 digits;
*/
int valsRec[1];
void setup() {
  // put your setup code here, to run once:
  getData.begin();
  
  pinMode(9,OUTPUT);
  pinMode(6,OUTPUT);
  
  

}

void loop() {

  getData.Get(valsRec);
  if(valsRec[0]== 0){
  digitalWrite(6,LOW);
  digitalWrite(9,HIGH);
  }
  if(valsRec[0]==1 ){
    digitalWrite(6,HIGH);
    digitalWrite(9,LOW);
 }
 else{
   digitalWrite(6,LOW);
   digitalWrite(9,LOW);
  }
}
