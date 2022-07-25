
#include<stdio.h>

int main()
{
    int i, number;
    int prime=1;

    number=10;

    for(i=2; i<number; i++)
    {
        if((number % i)==0)
        {
            prime=0;
        }
    }

    if (prime==1)
        printf("%d is prime number.", number);
    else
        printf("%d is not a prime number.", number);
    return 0;
}
