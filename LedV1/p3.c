 #include<reg51.h>
void my_delay()
{	int i,j;
 
	for (j=0;j<3 ;j++){
		for (i=0 ; i<30000 ;i++){
		}
	}
	/*	j=0 ->  i=0......29999
		j=1 -> i=0......29999
		j=2 -> i=0......29999
		j=3 contd. break
	*/
}	
void main()
{	
	while(1){
		P1 = 0xaa; //1010 1010
		my_delay();
		P1 = 0x55; //0101 0101
		my_delay();
	}
}