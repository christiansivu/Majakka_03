#define Leds1v 10


void setup(){
  pinMode(Leds1v, OUTPUT );
  Serial.begin(9600);
  Serial.println("Startup");
  }
  #define VIIVE 75
  
byte teho=0;
bool countUp = true;

  void loop(){
    
    analogWrite(Leds1v, teho);
    if (countUp == true ){
      teho++;
    }else{ 
    teho--;
    }
   if ( teho == 255 ) {
    countUp = false;
    Serial.println("down");
    }
    if(teho == 0){
      countUp = true;
      Serial.println("up");
    
    }
    
    
    
delay (VIIVE);
}
    
  
