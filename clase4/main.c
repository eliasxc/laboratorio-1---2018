#include <stdio_ext.h>
#include <stdlib.h>
#include "utn.c"

void main(void)
{
   int numero;
   if(utn_getNumero(&numero, "NUMERO?", "fuera de rango" , 10 ,100 , 2)==0)
   {
      printf("EL NUMERO ES %d" , numero);
   }
   return 0 ;
}
