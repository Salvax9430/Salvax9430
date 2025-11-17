//to allow user input values 
//Bramuel 
#include <stdio.h>

int main()
{
int i,stopValue,startValue ;
i=stopValue ;

printf("Enter a startValue :");
scanf("%d",& startValue);

printf("Enter a stopping Value: ");
scanf("%d",& stopValue);

for(i=stopValue;i>=startValue;i--){
printf("%d\n",i);

}
return 0;

}