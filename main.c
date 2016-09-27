#include "stdio.h"         /* <= own header */

int main(void){


   /* ------------- REPETIR POR SIEMPRE ------------- */
   while(1) {
      printf("Presionar una tecla");
      delay(1000);

   }

   /* NO DEBE LLEGAR NUNCA AQUI, debido a que a este programa no es llamado
      por ningun S.O. */
   return 0 ;
}

/*==================[end of file]============================================*/
