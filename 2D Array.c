// 2D array 
//Bramuel 
#include<stdio.h>

int main()
{
    int i, j;
    int marks[2][3] = { {112, 620, 425}, {250, 980, 630} };

    for(i=0;i<2;i++)
        for(j=0;j<2;j++)
            
                printf("Marks [%d][%d]=%d\n ",i,j, marks[i][j]);

    return 0;
}
    