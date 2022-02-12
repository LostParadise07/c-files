#include<stdio.h>
int main(){
int arr[10]={89,67,56,45,67,43,47,98,10,1};
int n=10;
int i,j,position,swap;
for (i=0;i<(n-1);i++){
    position=i;
    for(j=i+1;j<n;j++){
        if(arr[position]>arr[j])
            position =j;
    }
    if(position != i){
        swap =arr[i];
        arr[i]=arr[position];
        arr[position]=swap;
    }
}
for(i=0;i<n;i++)
printf("%d\t",arr[i]);
return 0;
}
