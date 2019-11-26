#include <stdio.h>
#include <math.h>

int main(int argc, char** argv) 
{
    for (int contador = 1; contador <= 1000; contador++)
    {
       contador = contador +9;
       printf ("\n %i", contador);
    }
    printf ("\n");
    return 0;
}