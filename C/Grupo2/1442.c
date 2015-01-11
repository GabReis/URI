#include <stdio.h>
int main(){
    int n,maior;
    while(1){
        do{
            scanf("%d",&n);
        }while(n<0 || n>500);
        if(n==0) return 0;
        if(n==1){
                printf("1\n");
                continue;
        }
        maior=0;
        while(n>1){
            if(n>maior) maior=n;
            if(n%2==0) n=n/2;
            else n = 3*n+1;
        }
        printf("%d\n",maior);
    }
    return 0;
}
