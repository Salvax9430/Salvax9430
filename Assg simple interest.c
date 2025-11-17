//program to calculate simple interest 
#include <stdio.h>
int main()
{
float principal,rate,time,interest; 
printf("Enter principal : ");
scanf("%f" ,&principal );
printf("Enter rate: ");
scanf("%f" ,&rate );
printf("Enter time (in years): " );
scanf("%f" ,&time );
// calculation of simple interest 
interest = (principal*rate*time)/100;
printf("simple interest =%.2f \n" ,  interest );
return 0;
}

    