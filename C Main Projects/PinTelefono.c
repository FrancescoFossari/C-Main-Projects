#include <stdio.h>
#include <stdlib.h>

int main(){

//dichiaro codici da inserire e codice esatto crt=corretto
    int tent1,  code1;
    const int codice_corretto=1001;

//chiedo all utente di inserire il pin
    printf("\n Inserire codice PIN a 4 cifre per sbloccare il dispositivo : \n\n");
    scanf("%d", &code1);

//ciclo if-else con 3 tentativi
    if(code1==codice_corretto){
        printf("\n ACCESSO GARANTITO...\n\n");
    }
    else
        printf("\nCodice inserito errato ,inserire di nuovo il codice :              2 tentativi rimanenti\n\n");
            scanf("%d", &code1);
     if(code1==codice_corretto){
        printf("\n ACCESSO GARANTITO...\n\n");
    }
    else
        printf("\nCodice inserito errato ,inserire di nuovo il codice :              ULTIMO tentativo rimanente\n\n");
            scanf("%d", &code1);
                if(code1!=codice_corretto)
                    printf("\n\nACCESSO NON GARANTITO, ATTENDERE 10 MINUTI PRIMA DI REINSERIRE IL CODICE...\n\n\n");
                      if(code1==codice_corretto)
                        printf("\n\nACCESSO GARANTITO...\n\n");

}



