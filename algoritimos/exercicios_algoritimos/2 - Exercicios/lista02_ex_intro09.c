#include <stdio.h>

int main (void)
{
    float mf, mp, mt, me;

    printf ("\n Insira Media de Provas...: ");
    scanf ("%f", &mp);

    printf ("\n Insira Media de Trabalhos...: ");
    scanf ("%f", &mt);

    printf ("\n Insira Media de Exercicios...: ");
    scanf ("%f", &me);

    mf = (mp * 0.7) * (mt * 0.2) * (me * 0.1);

    printf ("\n A Media Final e %.1f ", mf);
    printf ("\n");
    return 0;
}