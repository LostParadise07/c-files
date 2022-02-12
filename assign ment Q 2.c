/*Finding
sum = 1 - x/2! + x^2/4! - x^3/8! + ... +(-1)^n(x^n/2n!)
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
 float sum = 1.0; printf("1 ");
 for(int i=1;i<=n;i++){
 if(i%2==0)
 {
 sum += (pow(x,i)/fact(2*i));
 printf(" + [%d ^ %d]/%d!] = %f ",x,i,(2*i),sum);
 }
 else
 {
 sum -= (pow(x,i)/fact(2*i));
 printf(" - [%d ^ %d]/%d!] = %f ",x,i,(2*i),sum);
 }
 }
 printf("\n RESULT = %f",sum);
}
