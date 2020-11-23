#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int player2();
int main()
{
    int i;
    int sasso=1;
    int carta=2;
    int forbici=3;
    int gio1, gio2;


    //PRIMO GIOCATORE

    printf("GIOCATORE 1 \n\nSCEGLIERE COSA BUTTARE \nSASSO=1\nCARTA=2\nFORBICI=3\n\n\nscegli uno dei numeri :  ");
    scanf("%d",&gio1);
        if(gio1==sasso)
        printf("\n hai scelto sasso!\n\n\n");
        if(gio1==carta)
        printf("\n hai scelto carta!\n\n\n");
        if(gio1==forbici)
        printf("\n hai scelto forbici!\n\n\n");


//SECONDO GIOCATORE

        printf("\n\n\nGIOCATORE 2 \n\nSCEGLIERE COSA BUTTARE\nSASSO=1\nCARTA=2\nFORBICI=3\n\n\nscegli uno dei numeri :  ");
        scanf("%d",&gio2);
        if(gio2==sasso)
        printf("\n hai scelto sasso!\n\n\n");
        if(gio2==carta)
        printf("\n hai scelto carta!\n\n\n");
        if(gio2==forbici)
        printf("\n hai scelto forbici!\n\n\n");

//CONDIZIONI E RISULTATO FINALE
           if (gio1 == carta){
          if (gio2 == sasso){printf("Giocatore 1 VINCE!\n\n"); return main();}
          if (gio2 == forbici){printf("Giocatore 2 VINCE!\n\n");}else{
                           printf("PATTA, entrambi avete scelto CARTA\n\n");
                       }
          }
    if (gio1 == sasso){
                 if (gio2 == carta){printf("Giocatore 2 VINCE!\n\n"); return main();}
                 if (gio2 == forbici){printf("Giocatore 1 VINCE!\n\n");}else{
                              printf("PATTA, entrambi avete scelto SASSO\n\n");
                              }
                 }
    if (gio1 == forbici){
                 if (gio2== carta){printf("Giocatore 1 VINCE!\n\n"); return main();}
                 if (gio2 == sasso){printf("Giocatore 2 VINCE!\n\n");}else{
                              printf("PATTA, entrambi avete scelto FORBICE\n\n");}
                     }
}
///  if (gio1 == carta){
   //       if (gio2 == sasso){printf("Giocatore 1 VINCE!\n\n"); return main();}
      ///   if (gio2 == forbici){printf("Giocatore 2 VINCE!\n\n");}else{
             //              printf("PATTA, entrambi avete scelto CARTA\n\n");
             //          }
        ///  }
  /// if (gio1 == sasso){
     //////
     /// if (gio1 == forbici){
            //     if (gio2== carta){printf("Giocatore 1 VINCE!\n\n"); return main();}
             ///    if (gio2 == sasso){printf("Giocatore 2 VINCE!\n\n");}else{
                         //     printf("PATTA, entrambi avete scelto FORBICE\n\n");}
                //     }///







