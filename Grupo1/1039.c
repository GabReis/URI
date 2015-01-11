#include <stdio.h>
int main(){
    float a,b,c,d;
    float media;
    scanf("%f%f%f%f",&a,&b,&c,&d);
    media = (a*2+b*3+c*4+d*1)/10;
    printf("Media: %.1f\n",media);
    if(media>=7){
        printf("Aluno aprovado.\n");
        return 0;
    }
    if(media<5){
        printf("Aluno reprovado.\n");
        return 0;
    }
    printf("Aluno em exame.\n");
    scanf("%f",&a);
    media = (media+a)/2;
    printf("Nota do exame: %.1f\n",a);
    if(media>5)
        printf("Aluno aprovado.\n");
    else
        printf("Aluno reprovado.\n");
    printf("Media final: %.1f\n",media);
    return 0;
}
