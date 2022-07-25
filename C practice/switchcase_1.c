#include<stdio.h>
int main ()
{
    int n;
    printf("Enter your number = ");
    scanf("%d", &n);
    switch (n)
    {
        case 1:
            printf ("Friday");
            break;
        case 2:
            printf("Saturday");
            break;
        case 3:
            printf("sunday");
            break;
        case 4:
            printf("Monday");
            break;
        case 5:
            printf("Tuesday");
            break;
        case 6:
            printf("Wednusday");
            break;
        case 7:
            printf("Thursday");
            break;
        default:
            printf("Invalid Number");
    }
    return 0;
}
