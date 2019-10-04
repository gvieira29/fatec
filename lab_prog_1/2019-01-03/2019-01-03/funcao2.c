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
    int op=-1;
    float a,b,c,media;
    while(op!=0){
		system("cls");
		printf("# MENU #\n");
		printf("1- Media Aritmetica Simples\n");
		printf("2- Media Aritmetica Ponderada\n");
		printf("0- Para sair\n");
		printf("Opcao == ");
		scanf("%i", &op);
        if(op==1){
			system("cls");
			printf("# Media Aritmetica Simple #\n");
			printf("Digite a nota 1: ");
			scanf("%f", &a);
            printf("Digite a nota 2: ");
            scanf("%f", &b);
                media = calc_medArit(a,b);
            printf("A media e %f", media);
            printf("Digite qualquer tecla para encerrar.\n");
			getch();
        } 
        else if(op==2){
			system("cls");
            printf("Digite a nota 1: ");
            scanf("%f", &a);
            printf("Digite a nota 2: ");
            scanf("%f", &b);
            printf("Digite a nota do Trabalho: ");
            scanf("%f", &c);