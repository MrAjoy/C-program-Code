
/* #include<stdio.h>
int main()
{
    int n;
    printf("Enter your number:");
    scanf("%d", &n);

    switch (n>0)
    {
        case 1:
        printf("Positive");
        break;

        case 0:
            {
                switch (n==0)
                {
            case 1:
                printf("Zero");
                break;
            case 0:
                printf("Negative");
                }
            }
    }
    return 0;
} */


/*#include<stdio.h>
int main()
{
    int i, sum=0;
    for(i=1; i<=5; i++)
    {
        sum=sum+i;
    }
    printf("%d", sum);
    return 0;
}*/

/* #include<stdio.h>
int main()
{
    int n;
    printf("Enter any Number: ");
    scanf("%d", &n);
    switch(n)
    {
    case 1:
        printf("Friday");
        break;
    case 2:
        printf("Saturday");
        break;
    case 3:
        printf("Sunday");
        break;
    case 4:
        printf("Monday");
        break;
    default:
        printf("Error");
    }
    return 0;
}
*/

#include<stdio.h>
int main()
{
    int minimum, maximum,p, q, r, s;
    printf(" Enter The First Number: ");
    scanf("%d", &p);
    printf("Enter The Second Number: ");
    scanf("%d", &q);
    printf("Enter The Third Number: ");
    scanf("%d", &r);
    printf("Enter The Fourth Number: ");
    scanf("%d", &s);
    minimum=p;
    maximum=p;
    if(minimum>q)
        minimum=q;
    else if(maximum<q)
        maximum=q;
    if(minimum>r)
        minimum=r;
    else if(maximum<r)
        maximum=r;
    if(minimum>s)
        minimum=s;
    else if(maximum<s)
        maximum=s;
    printf("The Largest Number is: %d\n", maximum);
    printf("The Smallest Number is: %d\n", minimum);
    return 0;
}
