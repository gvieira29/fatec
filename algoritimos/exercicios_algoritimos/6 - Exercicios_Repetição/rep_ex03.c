#include <stdio.h>
#include <math.h>

int main(int argc, char** argv)  
{   
    int soma = 0;
    
    for (int contador = 1; contador <= 500; contador = contador + 2)
    {   
        printf ("\n %i", contador);
       
        if (contador == 1) 
        {
            soma = contador;
        }
        else 
        {
            soma = soma + contador;
        }   
    }   
    printf ("\n Soma", soma);
    return 0;
}