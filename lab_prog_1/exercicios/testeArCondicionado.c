#include <stdio.h>
#include <iostream>
#include <string.h>
float pessoas, aparelhos, btu, comsol, semsol, pessoastotal, btutotalpesoas;
float btutotalaparelhos;
float area, largura, comprimento;
//char a[1];
using namespace std;
main()
{
  comsol=800;
  semsol=600;
  char a[1];
  string str;
  
  printf ("Qual a Largura do Comodo ");
  scanf ("%f", & largura);
 
  printf ("Qual o Comprimento do Comodo ");
  scanf ("%f", & comprimento);
 
  area = largura * comprimento;
 
  printf ("Quantidade de Pessoas no Comodo ");
  scanf ("%d", & pessoas);
 
  pessoastotal = pessoas - 1;
 
  printf ("Quantidade de Aparelhos no Comodo ");
  scanf ("%d", & aparelhos);
  printf("O comodo possui incidencia de sol  S/N  ");
  cin >> a;
  str=a;
  if (str[0]=='s')
  {
      btutotalpesoas = pessoas * comsol;
 
      btutotalaparelhos= aparelhos * comsol;
 
      btu = area * comsol + btutotalpesoas + btutotalaparelhos;
      //cout << endl;
      //cout << "ar condicionado a se instalado deve ser de " << btu << " btu" << endl;cout << endl;
  } else 
    {
      if (str[0]=='n')
      {
         btutotalpesoas = pessoas * semsol;
         btutotalaparelhos= aparelhos * semsol;
         btu = area * semsol + btutotalpesoas + btutotalaparelhos;
      }
      if (btu <= 7000)
      {
        btu=7000;
        //printf ("O ar condicionado a ser instalado deve ser de 7.000 btus");
      } else
        {
          if (7000 > btu <= 9000)
          {
            btu=9000;
            //printf ("O ar condicionado a ser instalado deve ser de 9.000 btus");
          }
        }
    }     
    cout << endl;
    cout << "O ar condicionado a ser instalado deve ser de " << btu << " btus"<<endl;
    cout << endl;
    system("pause");
}
