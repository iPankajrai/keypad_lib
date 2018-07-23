 unsigned int keypad_calc()
{  
  while(1)
  { 
    
	
    PORTD= 0B00001110;
	_delay_ms(5);
	if ((PINA & 0b00000001)==0)
	{ 
	   while(!(PINA & 0B00000001));
	   return '7' ; 
    }
    if ((PINA & 0b00000010)==0)
	{ 
	   while(!(PINA & 0B00000010));
	   return '8' ;
    }
	if ((PINA & 0b00000100)==0)
	{ 
	   while(!(PINA & 0B00000100));
	   return '9' ;
    }
	if ((PINA & 0b00001000)==0)
	{ 
	   while(!(PINA & 0B00001000));
	   return '/' ;
    }

	PORTD= 0B00001101;
	_delay_ms(5);
	if ((PINA & 0b00000001)==0)
	{ 
	   while(!(PINA & 0B00000001));
	   return '4' ;
    }
    if ((PINA & 0b00000010)==0)
	{ 
	   while(!(PINA & 0B00000010));
	   return '5' ;
    }
	if ((PINA & 0b00000100)==0)
	{ 
	   while(!(PINA & 0B00000100));
	   return '6' ;
    }
	if ((PINA & 0b00001000)==0)
	{ 
	   while(!(PINA & 0B00001000));
	   return '*' ;
    }

	PORTD= 0B00001011;
	_delay_ms(5);
	if ((PINA & 0b00000001)==0)
	{ 
	   while(!(PINA & 0B00000001));
	   return '1' ; PORTB=1;
    }
    if ((PINA & 0b00000010)==0)
	{ 
	   while(!(PINA & 0B00000010));
	   return '2' ;
    }
	if ((PINA & 0b00000100)==0)
	{ 
	   while(!(PINA & 0B00000100));
	   return '3' ;
    }
	if ((PINA & 0b00001000)==0)
	{ 
	   while(!(PINA & 0B00001000));
	   return '-' ;
    }

	PORTD= 0B00000111;
	_delay_ms(5);
	char k;
	if ((PINA & 0b00000001)==0)
	{  
	   while(!(PINA & 0B00000001));
	   return('k');
	   
    }
    if ((PINA & 0b00000010)==0)
	{ 
	   while(!(PINA & 0B00000010));
	   return '0' ;
    }
	if ((PINA & 0b00000100)==0)
	{ 
	   while(!(PINA & 0B00000100));
	   return '=' ;
    }
	if ((PINA & 0b00001000)==0)
	{ 
	   while(!(PINA & 0B00001000));
	   return '+' ;
    }
  }
}                                                    // keypad_calc finished

unsigned int keypad_pc()
{  
  while(1)
  { 
    
	
    PORTD= 0B00001110;
	_delay_ms(5);                        
	if ((PINA & 0b00000001)==0)            
	{ 
	  
	   return '7' ;                      //use delay of minnimum 400 ms after lcd_data in main function
    }
    if ((PINA & 0b00000010)==0)
	{ 
	   
	   return '8' ;
    }
	if ((PINA & 0b00000100)==0)
	{ 
	   
	   return '9' ;
    }
	if ((PINA & 0b00001000)==0)
	{ 
	   
	   return '/' ;
    }

	PORTD= 0B00001101;
	_delay_ms(5);
	if ((PINA & 0b00000001)==0)
	{ 
	  
	   return '4' ;
    }
    if ((PINA & 0b00000010)==0)
	{ 
	   
	   return '5' ;
    }
	if ((PINA & 0b00000100)==0)
	{ 
	   
	   return '6' ;
    }
	if ((PINA & 0b00001000)==0)
	{ 
	   
	   return '*' ;
    }

	PORTD= 0B00001011;
	_delay_ms(5);
	if ((PINA & 0b00000001)==0)
	{ 
	   
	   return '1' ; PORTB=1;
    }
    if ((PINA & 0b00000010)==0)
	{ 
	   
	   return '2' ;
    }
	if ((PINA & 0b00000100)==0)
	{ 
	  
	   return '3' ;
    }
	if ((PINA & 0b00001000)==0)
	{ 
	   
	   return '-' ;
    }

	PORTD= 0B00000111;
	_delay_ms(5);
	char k;
	if ((PINA & 0b00000001)==0)
	{  
	   
	   return('k');
	   
    }
    if ((PINA & 0b00000010)==0)
	{ 
	   
	   return '0' ;
    }
	if ((PINA & 0b00000100)==0)
	{ 
	   
	   return '=' ;
    }
	if ((PINA & 0b00001000)==0)
	{ 
	   
	   return '+' ;
    }
  }
}                                                            // keypad_pc finished




unsigned int keypad_rmt()
{  
  while(1)
  { 
    
	
    PORTD= 0B00001110;
	_delay_ms(5);
	if ((PINA & 0b00000001)==0)
	{ 
	   
	   return '7' ;
	    break;
    }
    if ((PINA & 0b00000010)==0)
	{ 
	  
	   return '8' ;
	   break;
    }
	if ((PINA & 0b00000100)==0)
	{ 
	   
	   return '9' ;
	   break;
    }
	if ((PINA & 0b00001000)==0)
	{ 
	   
	   return '/' ;
	   break;
    }

	PORTD= 0B00001101;
	_delay_ms(5);
	if ((PINA & 0b00000001)==0)
	{ 
	  
	   return '4' ;
    }
    if ((PINA & 0b00000010)==0)
	{ 
	  
	   return '5' ;
    }
	if ((PINA & 0b00000100)==0)
	{ 
	   
	   return '6' ;
    }
	if ((PINA & 0b00001000)==0)
	{ 
	   
	   return '*' ;
    }

	PORTD= 0B00001011;
	_delay_ms(5);
	if ((PINA & 0b00000001)==0)
	{ 
	  
	   return '1' ; 
    }
    if ((PINA & 0b00000010)==0)
	{ 
	   
	   return '2' ;
    }
	if ((PINA & 0b00000100)==0)
	{ 
	   
	   return '3' ;
    }
	if ((PINA & 0b00001000)==0)
	{ 
	   
	   return '-' ;
    }

	PORTD= 0B00000111;
	_delay_ms(5);
	char k;
	if ((PINA & 0b00000001)==0)
	{  
	  
	   return('k');
	   
    }
    if ((PINA & 0b00000010)==0)
	{ 
	   
	   return '0' ;
    }
	if ((PINA & 0b00000100)==0)
	{ 
	   
	   return '=' ;
    }
	if ((PINA & 0b00001000)==0)
	{ 
	   
	   return '+' ;
    }
  }
}
