#include <stdio.h>
#include <stdlib.h>
int main()
{
    int salvada=500;
    int op;
    int soldi;

    printf("\ncosa vuoi fare? :\n-1 prelievo\n-2 deposito\n\nscegli operazione : \n");
    scanf("%d",&op);
  if(op==1){
        printf("\n inserire la somma da prelevare : \n");
            scanf("%d",&soldi);
              printf("\n\nla tua somma ora ammonta a : %d\n\n", salvada-soldi);
  }
            else
            if(op==2){
                printf("\ninserire somma da depositare : \n");
                  scanf("%d",&soldi);
                   printf("\nla tua somma ora ammonta a : %d\n",salvada+soldi);
}
}
