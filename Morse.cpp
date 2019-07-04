#include "Arduino.h"
#include "Morse.h"

Morse::Morse(int pin)
{
	pinMode(pin,OUTPUT);
	_pin=pin;
	_dottime=250;
}

void Morse::dot()
{
	digitalWrite(_pin,HIGH);
	delay(_dottime);
	digitalWrite(_pin,LOW);
	delay(_dottime);
}

void Morse::dash()
{
	digitalWrite(_pin,HIGH);
	delay(_dottime*4);
	digitalWrite(_pin,LOW);
	delay(_dottime);
}

void Morse::c_space()
{
	digitalWrite(_pin,LOW);
	delay(_dottime*3);
}

void Morse::w_space()
{
	digitalWrite(_pin,LOW);
	delay(_dottime*7);
}


void MorseCode::transfor(char _code)

{

   
		if(_code == 'a')
		{
		dot(); 
		dash();
		c_space()
		break;}
		else if (_code == 'b')
		{dash();
		dot();
		dot();
		dot();
		c_space()
		break;}
		else if(_code== 'c')
		{
		dash();
		dot();
		dash();
		dot();
		c_space()
		break;}
    else if (_code == 'd')
	{
	dash();
	dot();
	dot();
	c_space()
	break;}
    else if(_code =='e')
	{
	dot();
	c_space()
	break;}
    else if(_code =='f' )
	{
	dot();
	dot();
	dash();
	dot();
	c_space()
	break;}
    else if (_code == 'g')
	{
	dash();
	dash();
	dot();
	c_space()
	break;}
    else if (_code == 'h')
	{
	    dot();
		dot();
		dot();
		dot();
		c_space()
		break;}
		else if (_code ==  'i' )
		{
		dot();
		dot();
		c_space()
		break;}
		else if(_code == 'j')
		{dot();
		dash();
		dash();
		dash();
		c_space()
		break;} 
		else if(_code == 'k' )
		{
		dash();
		dot();
		dash();
		c_space()
		break;}
		else if(_code ==  'l')
		{
		dot();
		dash();
		dot();
		dot();
		c_space()
		break;}
		else if (_code =='m')
		{
		dash();
		dash();
		c_space()
		break;}
		else if(_code == 'n' )
		{
		dash();
		dot();
		c_space()
		break; }
		else if (_code == 'o')
		{
		dash();
		dash();
		dash();
		c_space()
		break;}
		else if (_code == 'p' )
		{
		dot();
		dash();
		dash();
		dot();
		c_space()
		break;}
		else if (_code == 'q')
		{
		dash();
		dash();
		dot();dash();
		c_space()
		break;}
		else if (_code == 'r')
		{
		dot();
		dash();
		dot();
		c_space()
		break;}
		else if (_code == 's')
		{
		dot();
		dt();
		dot();
		dash();
		c_space()
		break;}
		else if(_code == 't')
		{
		dash();
		c_space()
		break;}
    else if(_code == 'u')
	{
	dot();
	dot();
	dash();
	c_space()
	break;}
		else if (_code == 'v')
		{
		dot();
		dot();
		dot();
		dash();
		c_space()
		break;}
    else if (_code =='w')
	{
	dot();
	dash();
	dash();
	c_space()
	break;}
		else if (_code == 'x')
		{
		dash();
		doot();
		dash();dash();
		c_space()
		break;}
		else if (_code == 'y')
		{dash();
		dot();
		dot();
		c_space()
		break;} 
		else if (_code == 'z')
		{
		dash();
		dash();
		dot();
		dot();
		c_space()
		break;}
    
	else if (_code == ' ')
	{
	  w_space();
	break;}
		
		}
}
