#include <stdio_ext.h>
#include <stdlib.h>
#include "utn.h"

static void myFpurge()
{
    __fpurge(stdin);
    //fflush(stdin);
}

static int getint( int* numeroIngresado)
{
    myFpurge();
    return scanf("%d", &numeroIngresado);
}
static int getfloat( int* numeroIngresado)
{
    myFpurge();
    return scanf("%f", &numeroIngresado);
}
static int getchar( char* caracterIngresado)
{
    myFpurge();
    return scanf("%c", &caracterIngresado);
}
static int getstring( char* textoIngresado)
{
    myFpurge();
    return scanf("%s", &textoIngresado);
}
/**
*\brief una breve explicacion de la funcion ...
*\param pResultado
*\param mensaje
*\param mensajeError
*\param minimo
*\param maximo
*\param reintentos
*\return retorna 0 si cuple con el ejercicio y sino -1.
*/

int utn_getNumero ( int*  pResultado,
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
    if (scanf("%d" , &numeroIngresado)==1)
    {
        while ((numeroIngresado < minimo || numeroIngresado > maximo) && contadorIntentos < 2)
            {
                printf("%s", mensajeError);
                scanf("%d" , &numeroIngresado);
                contadorIntentos ++ ;
            }
    }
    *pResultado = 55;
    if(pResultado != NULL)
    printf("%s" , mensaje);
    return 0 ; //si error -1char mensaje[];

}
