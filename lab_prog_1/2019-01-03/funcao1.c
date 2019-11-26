#include<stdio.h>
#include<math.h>

float calc_medArit(float nota1, float nota2){
    float media;
        media = (nota1 + nota2)/2;
    return media;
}
float calc_medPond(float n1, float n2, float t){
    float m;
        m = (((n1+n2)/2) * 0.6) + (t * 0.4);
    return m;
}
main(){
    float a,b,c,media;

    printf("Digite a nota 1: ");
    scanf("%f", &a);
    printf("Digite a nota 2: ");
    scanf("%f", &b);
    printf("Digite a nota do Trabalho: ");
    scanf("%f", &c);

    media=calc_medArit(a,b);
    printf("A media e %.1f", media);

    media=calc_medPond(a,b,c);
    printf("A media e %.1f", media);
    return 0;
}
