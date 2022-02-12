 #include <stdio.h>

 int main()
{
     int a[10],b[10];
    int size,i,sum=0;
    printf("enter size of array a ",a[size]);
   scanf("%d",&size);
    for(i=0;i<size;i++)
{
    printf("element %d: ",i+1);
    scanf("%d",&a[i]);
}
  printf("enter size of array b ",b[size]);
    scanf("%d",&size);
 for(i=0;i<size;i++){
 printf("element %d: ",i+1);
    scanf("%d",&b[i]);
 }
printf("\n elements \n");
for(i=0;i<size;i++)
{
    printf("%d,",a[i]);
}
for(i=0;i<size;i++)
{
    printf("%d,",b[i]);
}
}

