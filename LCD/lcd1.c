#include <reg51.h> 
#define LCDDATA P2 
sbit RS	=	P3^6; 
sbit E	=	P3^7; 


void mydelay(int t){ 
   int x=0,y=0; 
   for (x=0 ; x<t; x++) 
    {  for (y=0 ; y<20000; y++){ 		}		 
    } 
 } 
 

 void lcd_cmd(char d) 
 { 
 	RS=0; 
 	E=1;	LCDDATA= d;	mydelay(1); E=0; 
 } 
 

 void lcd_data(char d) 
 { 
 	RS=1; 
 	E=1;	LCDDATA= d; mydelay(1); E=0; 
 } 
 
 
 void main(){ 
 	  while(1){ 
 		lcd_cmd(0x38); 
 		lcd_cmd(0x0E); 
 		lcd_cmd(0x01);	     
 		lcd_data('N'); 
 		lcd_data('I'); 
 		lcd_data('E'); 
 		lcd_data('L'); 
 		lcd_data('I'); 
 		lcd_data('T'); 
 	   	mydelay(100); 
 	  } 
 } 
