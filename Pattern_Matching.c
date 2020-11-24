#include <stdio.h>
#include <string.h>
//FUNZIONE CHE TROVA UNA PAROLA SIMILE A QUELLA CERCATA IN UN TESTO E CHE RESTITUISCE LA POSIZIONE DI TALE PAROLA
int main (){
int i,j;
char testo[100];
char parola[100];
puts("\ninserisci il testo senza spazi : \n");
gets(testo);
puts("\ninserisci la parola da cercare : \n");
gets(parola);
int m=strlen(parola);
int n=strlen(testo);
for(i=0;i<n-m;i++){
    for(j=0;j<m;j++)
        if(testo[i+j]!=parola[j])
        break;
        if(j==m)
        printf("\n una parola simile si trova nella posizione %d\n",i);
}
}
