#include <stdio.h>
#include <math.h>

int main(int argc, char** argv) 
{
    for (int contador = 1; contador <= 50; contador++)
    {
       contador = contador ++;
       printf ("\n %i", contador);
    }
    printf ("\n");
    return 0;
}