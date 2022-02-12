#include<stdio.h>

void insort(int a[], int n)
{
    int i,j,k;
    for(i=1;i<n;i++)
    {
        k=a[i];
        j=i-1;
        while(j>=0 && a[j]>k)
        {
            a[j+1]=a[j];
            j=j-1;
        }
        a[j+1]=k;
    }
}
void print(int a[], int n)
{
    int i;
    for(i=0;i<n;i++)
        printf("%d \n",a[i]);
    printf(" \n");

}
int main()
{
    int a[]={8,3,45,6,2,7,10,23};
    int n=sizeof(a) / sizeof(a[0]);
    insort(a,n);
    print(a,n);
    return 0;
}
