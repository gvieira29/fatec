#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{   setlocale(LC_ALL, "Portuguese");
    struct ficha_pessoa{;
        char nome[30];
        int idade;
        float salario;
    };

    int TAM=3;

    struct ficha_pessoa pessoa[TAM];
    for(int i = 0; i<TAM; i++){
        printf("\nDigite o nome: ");
        fflush(stdin);
        fgets(pessoa[i].nome, 30, stdin);
        printf("Digite o idade: ");
        scanf("%i", &pessoa[i].idade);
        printf("Digite o salario: ");
        scanf("%f", &pessoa[i].salario);
    }

    for(int i=0; i<TAM; i++){

         printf("\n%s%i\n%f\n", pessoa[i].nome, pessoa[i].idade, pessoa[i].salario);
    }
}

