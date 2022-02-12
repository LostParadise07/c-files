#include<stdio.h>
#include<math.h>
#include<conio.h>
int main()
{
int n,i=0,digit,bit,number=0;
printf("enter number :");
scanf("%d",&n);
while(n!=0)
{
    digit=n%2;
    number=(digit*pow(10,i++))+number;
    n=n>>1;
}
printf("%d",number);
return 0;
}

