#include<reg51.h>

void main()
	
{
	unsigned char x;
	unsigned int i,j;
	P1=0x00; //set all the pin 1 as low
	while(1)
		{
		x=0x01; //00000001 b
		for(j=0;j<8;j++)
			{
				P1=x;
				for(i=0;i<30000;i++);
				x=x<<1; //left shift operation, by one
			}
		}
}