#include<stdio.h>
#include<conio.h>
int main()
{
int a[15],i,max=0,size;
printf("enter size of array:");
scanf("%d",&size);
for(i=0;i<size;i++)
{
    printf("enter the value of element %d:",i+1);
scanf("%d",&a[i]);
}
 printf("the elements are :\n");
for(i=0;i<size;i++)
{
    printf("%d ",a[i]);
}
for(i=0;i<size;i++)
{
    if(a[i]>max)
    {
        max=a[i];
    }
}
printf("\n the maximum element is \n: %d ",max);
return 0;
}

