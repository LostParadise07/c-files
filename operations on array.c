// TRAVERSAL

#include<stdio.h>
#include<stdlib.h>

void display(int arr[],int n){
for (int i=0;i<n;i++)
{
    printf("%d",arr[i]);
}
printf("\n");
}
/*int main(int arr[],int n){
for (int i=0;i<n;i++)
{
    printf("%d", arr[1]);
}
printf("\n");
}
 void indinsertion(int arr[],int size,int element,int capacity,int index){
     if(size>=capacity){
        return -1;
     }
     for (int i=size-1;i>=index;i--)
{
    arr[i+1]=arr[i];
}
arr[index]=element;
return 1;
}
int main(){
int arr[10]={1,2,3,4,5};
int size=5, element=6,index=3;
display(arr,5);
indinsertion(arr,size,element,10,index);
size+=1;
display (arr,size);*/

//DELETION
 void inddeletion (int arr[],int size,int index)
     {


     for (int i=index; i<size-1;i++)
{
    arr[i]=arr[i+1];
}
     }
int main(){
    int i;
int arr[10]={1,2,3,4,5};
int size=5, element=6,index=i;
display(arr,size);
inddeletion(arr,size,index);
size-=1;
display (arr,size);
return 0;
}
// INSERTION

//   DELETION

//  SEARCHING
