#include <stdio.h>
#include <stdlib.h>

int somma(int a,int b);

int main()
{
    int giocatore1=0,giocatore2=0,i;
  int lancio1,lancio2;
  for(i=0;i<10;i++){
        lancio1=(0+(rand()%11));
        lancio2=(0+(rand()%11));
        printf("lancio numero>%d\n  Giocatore1=%d  Giocatore2=%d\n",i+1,lancio1,lancio2);
        somma(lancio1,lancio2);

  }
}

int somma(int a,int b){
   int sommare=a+b;
    printf("LA SOMMA E' : %d\n\n",sommare);
    return somma;


}




