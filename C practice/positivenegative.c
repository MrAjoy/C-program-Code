#include<stdio.h>
int main()
{
int n;
    printf("Enter your number = ");
    scanf("%d", &n);
    switch (n>0)  //n=something means big from 0 then print case1
    {
    case 1:
        printf("Positive");
        break;
    case 0:
        {
            switch (n==0){ //if n<0 or n=0 then print case1 or case 0
        case 1:
            printf("Zero");
            break;
        case 0:
            printf("Negative");
            }
        }
    }
    return 0;
}
