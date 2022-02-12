#include<stdio.h>
#include<conio.h>
int main()
{
int n,i;
int isprime=1;
printf("enter number :");
scanf("%d",&n);
for(i=2;i*i<n;i++)
{
    if(n%i==0)
    {
        isprime=0;
    }
}
if(isprime==0)
{
    printf("The number %d is not prime ",n);
}
else{
    printf("The number %d is prime ",n);
}
return 0;
}

