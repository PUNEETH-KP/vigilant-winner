#include<lpc214x.h>

/* PROGRAM TO BLINK LED 5 TIMES */

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
IO0DIR=0x00200000;
for(h=0;h<5;h++)
{
IO0SET=0x00200000;
delay(5000);
IO0CLR=0x00200000;
delay(5000);
}


 }

