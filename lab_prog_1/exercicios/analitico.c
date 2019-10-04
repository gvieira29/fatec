#include<stdio.h>
main(){
    int op 5;
    float km, litros, consumo, media;
    
    while(op != 0){
        
        system("cls");
        printf("Analitico do veiculo\n");
        printf("Opcao 1 - Consumo de Combustivel\n");
        printf("Opcap 2 - Media de Consumo\n");
        printf("Opcap 0 - Sair\n");
        printf("Entre com a opcao desejada: ");
        scanf("%i", &op);

            if (op == 1){
                system("cls");
                printf("Consumo de Combustivel\n");
                printf("Quantos KM o veiculo rodou?\n");
                printf("Entre com o valor:  ");
                scanf("%f", &km);
                printf("Quantos litros foram gastos?\n");
                printf("Entre com o valor:  ");
                scanf("%f", &litros);
                    consumo = km/litros
                printf("O consumo do veiculo e de %.1f", consumo);
                printf("Digite qualquer tecla para continuar\n");
                getch()

            } else if (op == 2){
                system("cls");
                printf("Consumo medio\n");
                printf("Qual o Consumo do veiculo?\n");
                printf("Entre com o valor:  ");
                scanf("%f", &consumo);
                printf("Quantos litros tem no tanque?\n");
                printf("Entre com o valor:  ");
                scanf("%f", &litros);
                    media = consumo*litros
                printf("A media do veiculo e de %.1f", media);
                printf("Digite qualquer tecla para continuar\n");
                getch()

            } else if (op == 0){
                system("cls");
                printf("O programa sera encerrado.\n");
                printf("Digite qualquer tecla para continuar\n");
                getch()

            } else {
                system("cls");
                printf("Opcao nao existe.\n");
        }  
    }
return 0;
}

