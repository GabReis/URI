#include <stdio.h>
#include <string.h>
int main(){
    char osso[12],classe[8],filo[10];
    char vertebrado[10]={'vertebrado'};
    gets(osso);
    gets(classe);
    gets(filo);
    if(strcmp(osso,vertebrado) == 0){
        printf("Aeee\n");
        if(strcmp(classe, 'ave') == 0){
            if(strcmp(filo, 'carnivoro') == 0)
                printf("aguia\n");
            else
                printf("pomba\n");
        }
        else{
            if(strcmp(filo, 'onivoro') == 0)
                printf("homem\n");
            else
                printf("vaca\n");
        }
    }
    else{

        if(strcmp(classe, 'inseto') == 0){
            if(strcmp(filo, 'hematofago') == 0)
                printf("pulga\n");
            else
                printf("lagarta\n");
        }
        else{
            if(strcmp(filo, 'hematofago') == 0)
                printf("sanguessuga\n");
            else
                printf("minhoca\n");
        }
    }
    return 0;
}
