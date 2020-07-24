#include <reg51.h>
sbit X1=P3^2;
sbit X2=P3^3;
sbit X3=P3^4;
sbit X4=P3^5;
char arr[10]={0xbf,0x86,0xdb,0xcf,0xe6,0xed,0xfd,0x87,0xff,0xe7};
void mydelay(int t)
{
   int x,y;
   for (x=0 ; x<t; x++)
   {  
   		for (y=0 ; y<200; y++)
   		{
  		}		
   }
}
void main()
{ 	
  int j,a,b,c,d,i;	
  X1=X2=X3=X4=0;
  while(1)
  	{
  		for(j=0;j<1000;j++)
		{
			a=j/100;
			b=(j/100)%10;
			c=(j/10)%10;
			d=j%10;
		
			for(i=0;i<50;i++)
			{
				X1=1; X2=0; X3=0; X4=0;		P0=arr[a]; mydelay(2);
				X1=0; X2=1; X3=0; X4=0;		P0=arr[b]; mydelay(2);
				X1=0; X2=0; X3=1; X4=0;		P0=arr[c]; mydelay(2);
				X1=0; X2=0; X3=0; X4=1;		P0=arr[d]; mydelay(2);
			}				
		}
			
	}

}

