#include <stdio_ext.h>
#include <stdlib.h>


int getNumero (     int*  pResultado,
                    char  mensaje[],
                    char  mensajeError[],
                    int   minimo,
                    int   maximo,
                    int   reintentos );
int main()
{
    //int numero;
    int numeroIngresado();
   // if(getNumero(&numero, "NUMERO?", "fuera de rango" , 10 ,100 , 2)==0)
    //{
     //   printf("EL NUMERO ES %d" , numero);
    //}
    return 0 ;


}

int getNumero(  int*  pResultado,
                char  mensaje[],
                char  mensajeError[],
                int   minimo,
                int   maximo,
                int   reintentos )
{

    int numeroIngresado;
    int contadorIntentos;

    contadorIntentos=0;
    printf("%s", mensaje);
    if (scanf("%d" , &numeroIngresado)==1);
    {
        while ((numeroIngresado < minimo || numeroIngresado > maximo) && contadorIntentos < 2)
            {
                printf("%s", mensajeError);
                scanf("%d" , &numeroIngresado);
                contadorIntentos ++ ;
            }
    }
    *pResultado = 55 ;
    if(pResultado != NULL)
    printf("%s" , mensaje);
    return 0 ; //si error -1char mensaje[];

}
/*int numeroIngresado()
{
    int numeroIngresado;
    int contadorIntentos;

    contadorIntentos=0;
    printf("%s", mensaje);
    scanf("%d" , &numeroIngresado);
    while ((numeroIngresado < minimo || numeroIngresado > maximo) && contadorIntentos < 2)
    {
        printf("%s", mensajeError);
        scanf("%d" , &numeroIngresado);
        contadorrIntentos ++ ;
    }
} */
