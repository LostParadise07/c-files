#include<stdio.h>
int main()
{
    int i,a,sum=0;
     printf("a=");
     scanf("%d",&a);
   i=1;
   while(i<=a){
        sum+=i;
   ++i;
     }
    printf("sum of the entered numbers: %d", sum);
    return 0;
}
