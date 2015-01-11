#include <stdio.h>
int main(){
    int a,b,c;
    scanf("%d%d",&a,&b);
    if(a>=b){
        if(a%b == 0){
            printf("Sao Multiplos\n");
            return 0;
        }
        else{
            printf("Nao sao Multiplos\n");
            return 0;
        }
    }
    else{
        if(b%a == 0){
            printf("Sao Multiplos\n");
            return 0;
        }
        else{
            printf("Nao sao Multiplos\n");
            return 0;
        }
    }
}
