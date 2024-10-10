// allow user to input values 
// By Bramuel 
#include <stdio.h>

int main() {
    int sum = 0, stoppingValue, startingValue, i;
    printf("Enter startingValue: ");
    scanf("%d", & startingValue);
    printf("Enter a stoppingValue: ");
    scanf("%d", & stoppingValue);
    
    
    i = stoppingValue;  
    // Start from the entered number
    do {
        sum += i;
        printf("%d\n", i);
        i--;
    } while (i>=startingValue);

    printf("The sum of numbers is %d\n", sum);

    return 0;
}