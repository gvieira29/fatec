#include <stdio.h>
 
int main (void)
{
    int b = 0, h = 0;
    float area = 0;
 
    printf ("\n Insira o valor da base.....: ");
    scanf ("%i", &b);
    printf ("\n Insira o valor da altura.....: ");
    scanf ("%i", &h);
    
    area = (b * h) / 2;
 
    printf ("\n O valor da area do triangulo e igual a: %.1f", area);
    printf ("\n");
    return 0;
}