#include<stdio.h>

int prime(int n)
{
    int i;
for(i=2;i*i<=n;i++)
{
    if(n%i==0)
    {
        return 0;
    }
}
return 1;
}

int main(){

int n1,n2;

printf("enter n1:");
scanf("%d",&n1);

printf("enter n2:");
scanf("%d",&n2);

printf("the prime numbers between range %d and %d are: ",n1,n2);

for(int i=(n1+1);i<n2;i++)
{
    if(prime(i))
    {
        printf("%d   ",i);
    }
}

return 0;
}

