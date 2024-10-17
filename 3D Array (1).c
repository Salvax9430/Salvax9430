// 3D Array
// Bramuel#include<stdio.h>

int main()
{
    int i, j, k;
    int marks[2][2][3] = { {240, 610, 450}, {950, 340, 790}, {340, 170, 640} };

    for(i=0;i<2;i++)
        for(j=0;j<1;j++)
            for(k=0;k<3;k++)
                printf("Marks [%d][%d][%d]=%d\n ",i,j,k, marks[i][j][k]);

    return 0;
}
    