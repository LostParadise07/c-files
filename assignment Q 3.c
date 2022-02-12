// QUESTION NO 3
/*Finding
sum = x/1! + x^3/3! ... +(-1)^n(x^(2n-1)/(2n-1)!)
input
3
2
*/
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int fact(int n){if(n==0) return 1;
return n*fact(n-1);
}
void main()
{
 int n,x;
 printf("Enter the value of n\n");
 scanf("%d",&n);
 printf("Enter the value of x\n");
 scanf("%d",&x);
 float sum = x;
 printf("%f ",sum);
 for(int i=2;i<=n;i++){
 if(i%2==0)
 {
 sum -= (pow(x,(2*i)-1)/fact((2*i)-1));
 printf(" -[%d ^ 2*%d-1]/(2*%d-1)!] = %f ",x,i,i,sum);
 }
 else
 {
 sum += (pow(x,(2*i)-1)/fact((2*i)-1));
 printf(" + [%d ^ 2*%d-1]/(2*%d-1)!] = %f ",x,i,i,sum);
 }
 }
 printf("\n RESULT = %f",sum);
}
