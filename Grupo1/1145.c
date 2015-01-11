#include <stdio.h>
int main(){
    int i,x,y;
    do{
        scanf("%d%d",&x,&y);
    }while(x<2 || x >=20 || x>= y ||x>=100000);
    for(i=1;i<=y;i++){
        printf("%d",i);
        if(i%x == 0)
            printf("\n");
        else
            printf(" ");
    }
    return 0;
}
