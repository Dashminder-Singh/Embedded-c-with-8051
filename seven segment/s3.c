#include <reg51.h>
sbit X1=P3^2;
sbit X2=P3^3;
sbit X3=P3^4;
sbit X4=P3^5;
char arr[4]={0xbf,0x86,0xdb,0xcf};
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
	int i;
  X1=X2=X3=X4=0;
  while(1)
  {
  	X1=1;
	for(i=0;i<4;i++)
	{
	 	P0=arr[i]; mydelay(400);
	}
  }

}