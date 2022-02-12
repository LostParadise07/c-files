/*Finding
sum = 1 - x/1! + x^2/2! - x^3/3! + ... +(-1)^n(x^n/n!)
input
3
2
*/
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int fact(int n){
if(n==0) return 1;
return n*fact(n-1);
}
void main()
{
 int n,x;
 printf("Enter the value of n and x\n");
 scanf("%d %d",&n,&x);
 float sum=1;
 printf("%f",sum);
 for(int i=1;i<=n;i++){
 if(i%2==0)
 {
 sum += pow(x,i)/fact(i);
 printf("+ [%d ^ %d]/%d!] = %f",x,i,i,sum);
 }
 else {
 sum -= pow(x,i)/fact(i);
 printf(" - [%d ^ %d]/%d!] = %f",x,i,i,sum);
 }
 }
 printf("\n Result = %f",sum);
}
