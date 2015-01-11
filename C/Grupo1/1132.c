#include <stdio.h>
int main(){
    int x,y,aux;
    scanf("%d",&x);
    scanf("%d",&y);
    if(x>y){
        aux=y;
        y=x;
        x=aux;
    }
    int sum=0;
    for(aux=x;aux<=y;aux++){
        if(aux%13!=0)
            sum+=aux;
    }
    printf("%d\n",sum);
    return 0;
}
