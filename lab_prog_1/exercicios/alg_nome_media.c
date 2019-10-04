#include<stdio.h>
main(){
	//Variaveis definidas
	float n1, n2, n3, media;
	char nome[30];
	
	printf("Digite o nome do aluno: ");
	scanf("%s", &nome);
	printf("DIgite a primeira nota: ");
	scanf("%f", &n1);
	printf("DIgite a segunda nota: ");
	scanf("%f", &n2);
	printf("DIgite a terceira nota: ");
	scanf("%f", &n3);
	
	media = (n1+n2+n3)/3;
	
	printf("A media de %s e de %.1f\n", nome, media);
	
	return 0;
}

