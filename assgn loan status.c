#include <stdio.h>
int main()
{
int age, annualincome ;
printf("Enter customer age: ");
scanf("%d",& age);
printf("Enter customer anual income: ");
scanf("%d",&annualincome);
if (annualincome >=21000 &&age >= 21) {
 printf("Congratulations you qualify for the loan");}

else{ printf("unfortunately we are unable to offer you a loan at this time");}
return 0;
}