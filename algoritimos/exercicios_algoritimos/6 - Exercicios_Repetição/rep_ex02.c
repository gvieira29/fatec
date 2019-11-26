#include <stdio.h>
#include <math.h>

int main(void)  
{   
    float fulano = 1.50, ciclano = 1.10, anos = 1;

    while (fulano >= ciclano)
    {
        fulano = fulano + 0.02;
        ciclano = ciclano + 0.03;
        anos ++;
    }
    printf ("\n %f", anos);
    return 0;
}