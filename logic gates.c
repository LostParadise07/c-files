#include <stdio.h>
int main()
{
    int xf=0;
    int xt=1;
    int yf=0;
    int yt=1;
    printf("\ntruth table for AND");
    printf("\nx           y        x&&y");
    printf("\n%d           %d         %d",xf,yf,xf&&yf);
    printf("\n%d           %d         %d",xt,yf,xt&&yf);
    printf("\n%d           %d         %d",xf,yt,xf&&yt);
    printf("\n%d           %d         %d",xt,yt,xt&&yt);
    printf("\ntruth table for OR");
    printf("\nx           y           x||y");
    printf("\n%d           %d         %d",xf,yf,xf||yf);
    printf("\n%d           %d         %d",xt,yf,xt||yf);
    printf("\n%d           %d         %d",xf,yt,xf||yt);
    printf("\n%d           %d         %d",xt,yt,xt||yt);
    printf("\ntruth table for NOT");
    printf("\nx           !x         ");
    printf("\n%d           %d         ",xf,!xf);
    printf("\n%d           %d         ",xt,!xt);
    return 0;

}
