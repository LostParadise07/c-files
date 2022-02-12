//To print square shape pattern
//A square [] shape with diagonals X --- [X]
#include <stdio.h>
void pattern(int n){
    printf("\n\n\n");
    for(int i=1;i<=n;i++)// from Starting point
    {
        for(int j=1;j<=n;j++)
        {
            if(i==1 ||i==n)//if i is 1/n, at the beginning(top line) or at last (bottom line)print *
            {
            printf("* ");
                /*
example: n=5
* * * * *



* * * * *
            */
            }
            else if(j==1||j==n-i+1||i==j||j==n)//if j is 1/n then in left/right print *
                /*
                Like
*       *
*       *
*       *
*       *
*       *
                */
                //also print * when i==j / n-i+1 to print diagonal
                //example
                /*
                n=5

  *   *
    *
  *   *

                */
            {
                printf("* ");
            }
            else
            {

                      printf("  ");
                  }

            }
        printf("\n");
    }

}

int main()
{
    int n;
    printf("Enter Rows: ");
    scanf("%d",&n);
    pattern(n);
    return 0;
}
