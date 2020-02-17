#include<lpc214x.h>

/* LED BLINKS UNLIMITED TIMES */

void delay(unsigned int count)
{

unsigned int i,j;
for(i=0;i<count;i++)
{
for(j=0;j<1000;j++)
{ }
}
}
 

int main(void)
{
unsigned int h;
PINSEL=0x00000000;
IO0DIR=0x00200000;
while(1)
{
IO0SET=0x00200000;
delay(5000);
IO0CLR=0x00200000;
delay(5000);
}


 }

