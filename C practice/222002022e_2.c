
#include<stdio.h>

int main()
{
    int rows,i,j;

    printf("Enter Square with Diagonal Numbers Side = ");
    scanf("%d", &rows);

    printf("Square with Numbers in Diagonal and Remaining 0's\n");

    for(i=1; i<=rows; i++)
    {

        for(j=1; j<=rows; j++)
    {
        if(i==1 || i==rows || j==1 || j==rows || j==i || i+j==rows+1)
         printf("* ");
        else
            printf("  ");
        }
    printf("\n");

    }
    return 0;
}

