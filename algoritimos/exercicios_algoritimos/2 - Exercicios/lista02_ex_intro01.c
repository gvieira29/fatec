#include <stdio.h>

int main (void)
{
    float n1, n2, n3, p1, p2, p3, media;

    printf ("\n Insira a primeira nota...: ");
    scanf ("%f", &n1);
    printf ("\n Insira o peso para a primeira nota...: ");
    scanf ("%f", &p1);

    printf ("\n Insira a segunda nota...: ");
    scanf ("%f", &n2);
    printf ("\n Insira o peso para a segunda nota...: ");
    scanf ("%f", &p2);
    
    printf ("\n Insira a terceira nota...: ");
    scanf ("%f", &n3);
    printf ("\n Insira o peso para a terceira nota...: ");
    scanf ("%f", &p3);

    media = ((n1 * p1) + (n2 * p2) + (n3 * p3)) / (p1 + p2 + p3);

    printf ("\n A media ponderada das 3 notas e de %.1f ", media);
    printf ("\n");
    return 0; 
}