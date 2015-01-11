#include <stdio.h>
#include <math.h>
int main(){
    int x1,x2,y1,y2;
    float res;
    scanf("%d%d",&x1,&y1);
    scanf("%d%d",&x2,&y2);
    res=sqrt( (x2-x1)*(x2-x1) + (y2-y1)*(y2-y1));
    printf("%.4f\n",res);
    return 0;
}
