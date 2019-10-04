printf ("Quantas lampadas possuem no local.....: ");
scanf ("%f", &totlampadas);
printf ("Qual o tipo de lampada instalada.....");
printf ("1 - Lampada Fluorescente");
printf ("2 - Lampada Incandescente");
printf ("3 - Lampada de Led");
printf ("4 - Lampada Convencional");
printf ("5 - Caso nao esteja listado acima");
scanf ("%i", &tipolampada);

switch (tipolampada)
{
    case 1
    {
        //Fluorescente
    }
    case 2
    {
        //Incandescente
    }
    case 3
    {
        //Led
    }
    case 4
    {
        //Convencional
    }
    default
    {
        //Nothing here
    }
}