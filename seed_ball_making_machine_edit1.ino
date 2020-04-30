int count;
int count1=0;
int count2=0;
int count3=0;
void setup()
{
   pinMode(5,OUTPUT);
  pinMode(4,OUTPUT);
  pinMode(3,OUTPUT);
  pinMode(2,OUTPUT);
  pinMode(12,INPUT);
  pinMode(7,INPUT);
  pinMode(9,INPUT);
  pinMode(8,INPUT);
  pinMode(6,INPUT);
  pinMode(13,OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  if(digitalRead(12)==HIGH){
       
     digitalWrite(3,HIGH);
    digitalWrite(2,LOW);
    digitalWrite(13,HIGH);
    
    
      }
  else
  {
    
    digitalWrite(3,LOW);
    digitalWrite(2,LOW);
    
  }
  if(digitalRead(9)==HIGH){
       
     digitalWrite(5,HIGH);
    digitalWrite(4,LOW);
    
      }
  else
  {
    
    digitalWrite(5,LOW);
    digitalWrite(4,LOW);
    
  }
  if(digitalRead(8)==HIGH)
  {
    count1=count1+1;
     
    delay(200);
  }else if(digitalRead(7)==HIGH){
    count2=count2+1;
     delay(200);
  }else if(digitalRead(6)==HIGH){
    count3=count3+1;
     delay(200);
  }
  count=count1+count2+count3;
  Serial.println(count);
  
  
    
    
    
  
    
}