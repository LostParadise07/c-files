#include <stdio.h>
int main(){
int a[3][3];
int i,j;
for(i=0;i<3;i++){
        for(j=0;j<3;j++){
printf("Enter value of a[%d][%d] ",i,j);
scanf("%d",&a[i][j]);
        }
        }
        printf("2D array \n");
        for(i=0;i<3;i++){
            for(j=0;j<3;j++){
           printf("%d",a[i][j]);
           if(j==2){
            printf("\n");
           }
            }

        }
        int sum=0;
        for(i=0;i<3;i++){
            for(j=0;j<3;j++){
                if(i==j){
                    sum=sum+a[i][j];
                }
            }
        }
        printf("sum of diognal elements is %d",sum);
        int n;
        n=i*j;
        printf("\nNo. of elements in matrix is %d",n);
return 0;
}
