#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int potenza();
int main()
{
  int a,b;
  int risultato;
  printf("inserire 1 : \n");
  scanf("%d",&a);
  printf("inserire 2 : \n");
  scanf("%d",&b);
  risultato=potenza(a,b);

}

int potenza(int a,int b){
    int ris=pow(a,b);
    printf("\n\n");
    printf("il risultato e' : %d",ris);
    printf("\n\n");
return ris;
}
