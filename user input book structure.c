#include <stdio.h>

//Author: Bramuel ;
//Date: 23/10/2024;

#include <string.h>

struct book {
    char title[30];
    char author[30];
    int publicationyear;
    char ISBN[14];  
    float price;
};

int main() {
    struct book book1;  

    
printf("Title: " );
scanf("%s",&book1.title);

    printf("Author: ");
    scanf("%s",& book1.author);
    
    printf("Publication Year: " );
    scanf("%d",&book1.publicationyear );
    
     printf("ISBN: " );
    scanf("%s",&book1.ISBN);
    
    printf("Price: " );
     scanf("%f", &book1.price);
     
printf("---------Book information-------\n");

    // Print the book information
    printf("Title: %s\n", book1.title);
    printf("Author: %s\n", book1.author);
    printf("Publication Year: %d\n", book1.publicationyear);
    printf("ISBN: %s\n", book1.ISBN);
    printf("Price: %.2f\n", book1.price);

    return 0;
}