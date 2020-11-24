#include <stdlib.h>

int main(){
int a[5],n,i,j,cos;
printf("inserisci i numeri nell array : \n");
for(i=0;i<5;i++){
    scanf("%d",&a[i]);
}
for(i=0;i<5-1;i++){
    for(j=i+1;j<5;j++){
        if(a[i]>a[j]){
            cos=a[i];
            a[i]=a[j];
            a[j]=cos;
        }
    }
}
printf("l array ordinato e' : \n");
for(i=0;i<5;i++){
    printf("%3d", a[i]);
}

 }






