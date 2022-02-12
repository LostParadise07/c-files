#include <stdio.h>
int main(){
int size;
int a[10];
printf("enter size of array :");
scanf("%d",&size);
for(int i=0;i<size;i++){
    printf("element %d = ",i+1);
    scanf("%d",&a[i]);
}
for(int i=1;i<size;i++){
    if(a[0]<a[i]){
    a[0]=a[i];
    }
}
    printf("largest element is = %d",a[0]);
    return 0;
}
