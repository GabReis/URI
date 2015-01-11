#include <stdio.h>
int main(){
    int seq,i;
    while(1){
        scanf("%d",&seq);
        if(seq == 0)
            return 0;
        printf("1");
        for(i=1;i<seq;i++)
            printf(" %d",i+1);
        printf("\n");
    }
}
