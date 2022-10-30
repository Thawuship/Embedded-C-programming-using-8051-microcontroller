#include<reg52.h>
sbit motp=P1^0;	//port 1 pin 0
sbit motn=P1^1; //port 1 pin 1 declarations


void main()
{
    unsigned int i;
    motp=motn=0;
    while (1)
    {
			motp=1;	//clockwise direction
			motn=0;
			for (i=0;i<60000;i++);
			motp=0; //anticlockwise direction
			motn=1;
			for (i=0;i<60000;i++);
    }
}