#include <Morse.h>
void setup() {
Serial.begin(9600);  

}
char _code ;
void loop() {
  
      if(Serial.available()>0){
    _code=Serial.read()
    if(_code == 'a')
    {
    Morse.dot(); 
    Morse.dash();
    Morse.c_space();
    break;}
    else if (_code == 'b')
    {Morse.dash();
    Morse.dot();
    Morse.dot();
    Morse.dot();
    Morse.c_space();
    break;}
    else if(_code== 'c')
    {
    Morse.dash();
    Morse.dot();
    Morse.dash();
    Morse.dot();
    Morse.c_space();
    break;}
    else if (_code == 'd')
  {
  Morse.dash();
  Morse.dot();
  Morse.dot();
  Morse.c_space();
  break;}
    else if(_code =='e')
  {
  Morse.dot();
  Morse.c_space();
  break;}
    else if(_code =='f' )
  {
  Morse.dot();
  Morse.dot();
  Morse.dash();
  Morse.dot();
  Morse.c_space();
  break;}
    else if (_code == 'g')
  {
  Morse.dash();
  Morse.dash();
  Morse.dot();
  Morse.c_space();
  break;}
    else if (_code == 'h')
  {
      Morse.dot();
    Morse.dot();
    Morse.dot();
    Morse.dot();
    Morse.c_space();
    break;}
    else if (_code ==  'i' )
    {
    Morse.dot();
    Morse.dot();
    Morse.c_space();
    break;}
    else if(_code == 'j')
    {Morse.dot();
    Morse.dash();
    Morse.dash();
    Morse.dash();
    Morse.c_space();
    break;} 
    else if(_code == 'k' )
    {
    Morse.dash();
    Morse.dot();
    Morse.dash();
      Morse.c_space();
    break;}
    else if(_code ==  'l')
    {
    Morse.dot();
    Morse.dash();
    Morse.dot();
    Morse.dot();
    Morse.c_space();
    break;}
    else if (_code =='m')
    {
    Morse.dash();
    Morse.dash();
    Morse.c_space();
    break;}
    else if(_code == 'n' )
    {
    Morse.dash();
    Morse.dot();
    Morse.c_space();
    break; }
    else if (_code == 'o')
    {
    Morse.dash();
    Morse.dash();
    Morse.dash();
    Morse.c_space();
    break;}
    else if (_code == 'p' )
    {
    Morse.dot();
    Morse.dash();
    Morse.dash();
    Morse.dot();
    Morse.c_space();
    break;}
    else if (_code == 'q')
    {
    Morse.dash();
    Morse.dash();
    Morse.dot();
    Morse.dash();
    Morse.c_space();
    break;}
    else if (_code == 'r')
    {
    Morse.dot();
    Morse.dash();
    Morse.dot();
    Morse.c_space();
    break;}
    else if (_code == 's')
    {
    Morse.dot();
    Morse.dot();
    Morse.dot();
    Morse.dash();
  Morse.c_space();
    break;}
    else if(_code == 't')
    {
    Morse.dash();
    Morse.c_space();
    break;}
    else if(_code == 'u')
  {
  Morse.dot();
  Morse.dot();
  Morse.dash();
  c_space()
  break;}
    else if (_code == 'v')
    {
    Morse.dot();
    Morse.dot();
    Morse.dot();
    Morse.dash();
    c_space()
    break;}
    else if (_code =='w')
  {
  Morse.dot();
  Morse.dash();
  Morse.dash();
  c_space()
  break;}
    else if (_code == 'x')
    {
    Morse.dash();
    Morse.dot() ;
    Morse.dash();
    Morse.dash();
    Morse.c_space();
    break;}
    else if (_code == 'y')
    {Morse.dash();
    Morse.dot();
    Morse.dot();
    Morse.c_space();
    break;} 
    else if (_code == 'z')
    {
    Morse.dash();
    Morse.dash();
    Morse.dot();
    Morse.dot();
    Morse.c_space();
    break;}
    
  else if (_code == ' ')
  {
    Morse.w_space();
  break;}
    
    }
    
  }

}
