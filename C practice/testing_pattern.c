#include<stdio.h>
int main()
{
    int i,j,n;
    printf("Draw your own pattern: ");
    scanf("%d", &n);
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=n; j++)
        {
            if(i==1 || i==n || j==1 || j==n || j==i ||
               i+j==n+1)
                printf("* ");
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}
