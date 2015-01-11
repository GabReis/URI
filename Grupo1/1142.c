#include <stdio.h>
int main(){
    int n,i;
    scanf("%d",&n);
    for(i=0;i<n*4;i+=4)
        printf("%d %d %d PUM\n",i+1,i+2,i+3);
    return 0;
}
