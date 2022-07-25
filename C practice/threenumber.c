#include<stdio.h>
int main(){
   int minimum,maximum,p,q,r,s;
   printf("enter the first numbers:");
   scanf("%d",&p);
    printf("enter the second numbers:");
   scanf("%d",&q);
    printf("enter the third numbers:");
   scanf("%d",&r);
    printf("enter the four numbers:");
   scanf("%d",&s);
   minimum=p;
   maximum=p;
   if(minimum>q) //checking 1st and 2nd number
      minimum=q;
   else if(maximum<q)
      maximum=q;
   if(minimum>r) //checking 1st and 3rd number
      minimum=r;
   else if(maximum<r)
      maximum=r;
   if(minimum>s) //checking 1st and 4th number
      minimum=s;
   else if(maximum<s)
      maximum=s;
   printf("The Largest number is:%d\n",maximum);
   printf("The Smallest number is:%d",minimum);
   return 0;
}
