#include<stdio.h>
#include<stdlib.h>
int linearsearch(int arr[],int size,int element){
for(int i=0;i<size;i++)
{
    {
        if(arr[i]==element)
return i;
}
}
return -1;
}
int main(){
int arr[]={1,3,4,5,6,7,8,9,11,12,23,24,65,76,88,99,107};
int size=sizeof(arr)/sizeof(int);
int element;
printf("enter the element you want to search \n");
scanf("%d",&element);
int searchindex= linearsearch(arr,size,element);
printf("the element %d was found at index %d \n",element,searchindex);

return 0;
}
