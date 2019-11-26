#include <stdio.h>
#include <math.h>

#define TERMOS 15

int main(int argc, char** argv)
{
    int i;
    float x, s, pot;
 
    printf ("\n Digie o numero de X....:");
    scanf ("%f", x);

    s = 1;

    pot = x * x;

    for (i = 1; i < TERMOS; i++)
    {
        s = s + pot / i;
        pot = pot * x; 
    }    
    printf ("\n Serie %f", s);
    printf ("\n");
    return 0;
}