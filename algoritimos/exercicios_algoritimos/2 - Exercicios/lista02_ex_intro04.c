#include <stdio.h>

int main (void)
{	
	float c, f;
	
	printf ("\n Digite a temperatura equevalente a graus Farenheit: ");
	scanf ("%f", &f);
		
    c = (f - 32) / 1.8;
	
    printf ("\n A temperatura em graus Celsius e equivalente a: %.1f", c);
	printf ("\n");
    return 0;
}