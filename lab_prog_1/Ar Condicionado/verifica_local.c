int oplocal;
char oplaje;

printf ("Casa ou Apartamento");
printf ("1 - Casa");
printf ("2 - Apartamento");
scanf ("%i", &oplocal);

if (oplocal == 1)
{
    printf ("Possui laje? [S/N]");
    scanf ("%c", &oplaje);

    if (oplaje == 's' || oplaje == 'S');
    {
        printf ("Possui laje"); //Adicionar valor de temperatura da laje
    }
    else if (oplaje == 'n' || oplaje == 'N')
    {
        printf ("Nao possui laje"); //Nao fazer nada
    }
}
else if (oplocal == 2)
{
    printf ("Apartamento"); //Por padrao, apartamento possui laje
}