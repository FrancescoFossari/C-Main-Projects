

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, j;
    int array[2];
    int array2[2];
    int somma=0;
    int somma1=0;
    for(i=0;i<2;i++){
      printf("\ninserire valori prima matrice : ");
      scanf("%d", &array[i]);
        }
        for(i=0; i<2;i++){
        printf("i valori della prima matrice sono : %d\n", array[i]);
        }
        for(j=0;j<2;j++){
            printf("\ninserire valori seconda matrice : ");
            scanf("%d", &array2[j]);
            }
                for(j=0;j<2 ;j++){
                printf("i valori della seconda matrice sono : %d\n", array2[j]);
                }
                for(i=0;i<2;i++){
                        somma+=array[i];
                        }
                            for(j=0;j<2;j++){
                                somma1+=array2[j];
                            }
               printf("\nla somma del primo array corrisponde a : %d\n",somma);
               printf("\nla somma del secondo array corrisponde a : %d\n",somma1);
               }






