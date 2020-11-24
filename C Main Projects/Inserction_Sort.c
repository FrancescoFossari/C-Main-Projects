#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, j, cos;
    int array[3];
    printf("inserire numeri nell array : \n");
    for(i=0;i<3;i++){
printf("\t\n%d numero :  ",i+1);
        scanf("\t%d",&array[i]);
    }
    for(i=0;i<3-1;i++){
        for(j=0;j<3-1;j++){
            if(array[j]>array[j+1]){
                cos=array[j];
                array[j]=array[j+1];
                array[j+1]=cos;
            }
        }
    }
    printf("\n\ni valori in ordine crescente sono : \n");
    for(i=0;i<3;i++){
        printf("%4d", array[i]);
    }
    printf("\n\ni valori in ordine decrescente sono : \n");
    for(i=3-1;i>=0;i--){
        printf("%4d", array[i]);
    }
}
