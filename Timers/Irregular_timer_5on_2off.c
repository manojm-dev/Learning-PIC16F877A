#include<pic.h>
unsigned int count;
void main()
{
TRISB=0X00;
OPTION_REG=0X0A;
while(1)
{
   if(T0IF==1)
  {
	T0IF=0;
	count++;

	if(count==5000)
    {
		RB0=0;
		count=0;
	}
      if(count==2000)
	  {	
	 	RB0=1;
		count=0;
	  }
		
  }
   
}
}              		  


