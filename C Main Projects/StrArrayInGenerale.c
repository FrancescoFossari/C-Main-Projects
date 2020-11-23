#include <stdio.h>
#include <string.h>

int main()
{
   char s1[50];
  char s2[50];
  long int dim1;
  long int dim2;
  int ris;

  printf("inserisci la prima stringa : ");
  scanf("%s",s1);
  printf("inserisci la seconda stringa : ");
  scanf("%s",s2);

  //ci indica quanti caratteri sono contenuti in entrambe le stringhe
  dim1=strlen(s1);
  dim2=strlen(s2);
  printf("\n\nla stringa 1 contiene %d caratteri \nla stringa 2 contiene %d caratteri\n\n", dim1, dim2);

//compara le stringhe e da dei valori per capire la differenza tra le due
printf("maggiore di 0 : la prima s1 e' piu lunga di s2\n uguale a 0 : stringe sono identiche\n minore di 0 : s1 e' minore di s2\n\n");
ris=strcmp(s1,s2);
printf("\n\n%d\n\n",ris);

//serve a sostituire la prima stringa col contenuto della seconda stringa
strcpy(s1,s2);
printf("\n%s\n\n",s1);

//serve a unire le due stringhe
strcat(s1,s2);
printf("\n%s\n\n\n\n",s1);

   }

