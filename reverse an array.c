#include<stdio.h>
int main()
{
    int a[10],temp,i,j,size;
    printf("enter size of array");
    scanf("%d",&size);
    for(i=0; i<size; i++)
    {
        printf("element %d ",i+1);
        scanf("%d",&a[i]);
    }
    printf("elements are \n");
    for(i=0; i<size; i++)
    {
        printf("%d,",a[i]);
    }
    j=size-1;
     i=0;
    printf("\n array after reverse\n");

     while(i<j)
     {
       temp=a[i];
       a[i]=a[j];
       a[j]=temp;
       i++;
       j--;
     }
     for(i=0;i<size;i++)
     {
          printf("%d,",a[i]);
     }
    }

;
