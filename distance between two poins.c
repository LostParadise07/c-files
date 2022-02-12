#include <stdio.h>
#include <math.h>
int main()
{
    int x1,x2,y1,y2,dist,x3,y3,dist13,dist23;
    printf("enter the co-ordinates of ist point (x1,y1): ");
    scanf("%d%d",&x1,&y2);
    printf("enter the co-ordinates of ist point (x2,y2): ");
    scanf("%d%d",&x2,&y2),
    dist=sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));

    printf("distance between (%d,%d) and (%d,%d) is: %d",x1,y1,x2,y2,dist);

    printf("\n Enter the third point (x3,y3) : ");
    scanf("%d%d",&x3,&y3);
    dist13=sqrt((x1-x3)*(x1-x3)+(y1-y3)*(y1-y3));
    dist23=sqrt((x2-x3)*(x2-x3)+(y2-y3)*(y2-y3));
    printf("\nDistance between (%d,%d) and (%d,%d) is : %d",x1,y1,x3,y3,dist13);
    printf("\nDistance between (%d,%d) and (%d,%d) is : %d",x2,y2,x3,y3,dist23);
    return 0;
}

