#include<stdio.h>
#include<math.h>
#include<conio.h>
int main()
{
int n,i=0,digit,number=0;
printf("enter number :");
scanf("%d",&n);
while(n>0)
{
    digit=n%10;
    number=(digit*pow(2,i++))+number;
    n=n/10;
}
printf("%d",number);
return 0;
}

