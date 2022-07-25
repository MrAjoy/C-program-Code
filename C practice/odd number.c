#include<stdio.h>
int main()
{

    int i,sum=0;    //int i=1
    for(i=1; i<=100; i++) //(;i<=10;i++)
    {
        if(i%2==1)
        continue;
        else
        sum=sum+i;
        if(i==100)
            break;

    }
    printf("The odd Number is: ");
    printf("%d", sum);
    return 0;
}
