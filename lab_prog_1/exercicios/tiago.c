#include <stdio.h>
#include <stdlib.h>

int main()
{
    struct ficha_pessoa{;
        char nome[30];
        int idade;
        float salario;
    };

    int TAM=30;
    int op=-1;
    int i=0;

    struct ficha_pessoa pessoa[TAM];

    while(op!=0){
        printf("\n<< MENU >>\n");
        printf("\n1 - Incluir");
        printf("\n2 - Listar");
        printf("\n0 - Sair");
        printf("\n\nDigite a opcao desejada: ");
        scanf("%i", &op);

        if(op==1){
            if(i<TAM){
                printf("\nDigite o nome: ");
                scanf("%s", &pessoa[i].nome);
                //fflush(stdin);
                //fgets(pessoa[i].nome, 30, stdin);
                printf("Digite o idade: ");
                scanf("%i", &pessoa[i].idade);
                printf("Digite o salario: ");
                scanf("%f", &pessoa[i].salario);
                i++;
            }else{
                printf("\nImpossivel registrar mais que %i pessoas\n\n", TAM);
            }

            printf("Digite algo para voltar ao menu...");
            getchar();
        }else if(op==2){
            printf("\nLISTAGEM DE PESSOAS:\n\n");
                for(int l=0; l<i; l++){

                    printf("[PESSOA %i]:\n", (l+1));
                    printf("\nNOME: %sIDADE: %i\nSALARIO: %.2f\n", pessoa[l].nome, pessoa[l].idade, pessoa[l].salario);
                    printf("\n\n---------------------------\n\n");
                }

            printf("Digite algo para voltar ao menu...");
            getchar();
        }else if(op==0){;
            printf("Programa encerrado!!");
        }else{
            printf("opcao invalida!!");

            printf("Digite algo para voltar ao menu...");
            getchar();
        }
    }
}
