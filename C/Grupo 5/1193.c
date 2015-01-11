#include <stdio.h>
#include<math.h>

void transformaDeBinario(char* numero, int n){
    int i,res=0,vet[4];
    for(i=0;i<n;i++){
        res += pow(numero[i],i);
    }
    printf("%d dec",res);
    while(n/4>1){
        res=0;
        while(i<4){
            res += pow(numero[--i],n-(n-i));
        }
        printf("%d");
        n=n/4;
    }
    printf(" hex\n");
}

int main(){
    int n,op,i,j;
    char linha[1500],guarda[1400];
    do{
        scanf("%d", &n);
    }while(n<=0);
    for(j=0;j<n;j++){
        gets(linha);
        i=0;
        while(linha[i]!=32){
            guarda[i] = linha[i];
            i++;
        }
        i++;
        printf("Case %d\n",j+1);
        if(linha[i] == 'b') transformaDeBinario(guarda, i-1);
        else if(linha[i] == 'd') transformaDeDecimal(guarda);
        else transformaDeHexa(guarda);
    }
    return 0;
}
