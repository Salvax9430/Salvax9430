//allow user to enter values 
//Bramuel
#include <stdio.h>

int main()
{
    int i, sum = 0;
    int stop_value, start_value;
    
    printf("Enter a value for when to start: ");
    scanf("%d", &start_value);

    printf("Enter a value for when to stop: ");
    scanf("%d", &stop_value);

    i = stop_value;
    while (i > start_value) {
        printf("%d\n", i);
        sum = sum + i;
        i--;
    }

    printf("The sum is %d\n", sum);
    return 0;
}
