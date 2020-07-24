#include<reg51.h>
sbit but1 = P2^0;
int but1status =0 ; 

void my_delay()
{
	int i,j;
	
	for (j=0;j<3 ;j++){
		for (i=0 ; i<30000 ;i++){
		}
	}
}	
void main()
{

	while(1){
	 if (but1==0)
	 {	   // toggle the value of but1status
		if(but1status==0)
		{	but1status=1;
		}else{ 
			but1status=0;	 
		}
		while (but1==0){} // wait here till the button is released
	 }  
	if (but1status==0){
	  // if button on P2.0 pin is pressed display pattern1
		P1=0xf0; my_delay();
		P1=0x0f; my_delay();
	  }	else{
		P1=0xff; my_delay();
		P1=0x00; my_delay();
	  }

	}//while end here

 


 }



























/*	P1=0x00;
  	while(1){
	 if (but1==0){
	  // if button on P2.0 pin is pressed display pattern1
		P1=0xf0; my_delay();
		P1=0x0f; my_delay();
	  }
	  if (but2==0){
	  // if button on P2.1 pin is pressed display pattern2
		P1=0x00; my_delay();
		P1=0xff; my_delay();
	  }
	  if (but3==0){
	  // pattern3
		P1=0xaa; my_delay();
		P1=0x55; my_delay();
	  }
	  else { P1=0x00; } // make all LEDs off 
	}
}*/