#include <stdio.h>


int ano;
int resto1;
int resto2;
int resto3;

int main()
{

printf("----VERIFICADOR DE ANO BISSEXTO----\n");
printf("Digite o ano que deseja verificar : ");
scanf("%d",&ano);

if ((ano % 400 == 0) || (ano % 4 == 0 && ano % 100 != 0))
{
  printf("O ano eh bissexto");
}
else{
  printf("O ano n eh bissexto");
}

return 0;
}
