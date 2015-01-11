#include <stdio.h>
int main(){
    int a,b,c,d;
    scanf("%d%d%d%d",&a,&b,&c,&d);
    if(b<=c){
        printf("Valores nao aceitos\n");
        return 0;
    }
    else if(d<=a){
        printf("Valores nao aceitos\n");
        return 0;
    }
    else if( (c+d) <= (a+b)){
        printf("Valores nao aceitos\n");
        return 0;
    }
    else if(c<0 || d<0 || a<0){
        printf("Valores nao aceitos\n");
        return 0;
    }
    else{
        printf("Valores aceitos\n");
        return 0;
    }
}
