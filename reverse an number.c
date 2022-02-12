#include<stdio.h>
#include<math.h>
int main(){
int n,i=0,num=0,digit;
printf("enter value of n:");
scanf("%d",&n);
while(n>0)
{
    digit=n%10;
    num=(num*10)+digit;
    n=n/10;
}
printf("%d",num);
return 0;
}
