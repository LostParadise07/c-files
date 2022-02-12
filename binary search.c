#include<stdio.h>
int binarysearch(int arr[],int size,int element){
    int low,mid,high;
    low=0;
    high=size-1;
    while(low<=high){
    mid=(low+high)/2;
        if(arr[mid]==element){
return mid;
}
if (arr[mid]<element){
    low=mid+1;
}
else{
    high=mid-1;
}
}
return -1;
}
int main(){
    //sorted array for linear serach
int arr[]={1,3,4,5,6,7,8,9,11,12,23,24,65,76,88,99,107};
int size=sizeof(arr)/sizeof(int);
int element;
printf("enter the element you want to search \n");
scanf("%d",&element);
int searchindex= binarysearch(arr,size,element);
printf("the element %d was found at index %d \n",element,searchindex);

return 0;
}
