#include <stdio.h>

int main (void)
{
    float n1, n2, media;

    printf ("\n Insira a primeira nota (Peso 6)...: ");
    scanf ("%f", &n1);
    printf ("\n Insira a segunda nota (Peso 4)...: ");
    scanf ("%f", &n2);

    media = ((n1 * 6) + (n2 * 4)) /10;

    printf ("\n A media ponderada e de: %.1f ", media);
    printf ("\n");
    return 0;
}