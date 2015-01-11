#include <stdio.h>
int main(){
    int i,cont=0;
    float numb;
    for(i=0;i<6;i++){
            do{
                scanf("%f",&numb);
            }while(numb==0);
            if(numb>0)
                cont++;
    }
    printf("%d valores positivos\n",cont);
    return 0;
}
