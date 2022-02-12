#include<stdio.h>
int main(){
int size;
printf("size :");
scanf("%d",&size);
for(int i=0;i<size;i++)
{
    for( int j=0;j<2*size-1;j++)
    {
        if(j>=size-1-i && j<=size-1+i)
        {
            printf(" * ");
        }
        else{
            printf("   ");
        }
    }
    printf("\n");
}
return 0;
}
