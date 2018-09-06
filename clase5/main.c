#include <stdio.h>
#include <stdlib.h>
# define CANTIDAD 5
// funcion tomar y cargar

int retornarTotal(int listado[], int tamanio);
int retornarPromedio(int listado[], int tamanio);
void cargarListado(int listado[], int tamanio);
int retornarCantidadEntreNotas(int listado[], int tamanio, int limiteSuperior ,int limiteInferior);

int main()
{
    int listadoDeNotas[CANTIDAD];

    cargarListado(listadoDeNotas, CANTIDAD);
    mostrarListado(listadoDeNotas, CANTIDAD);
    mostrarInformacionDelArray(listadoDeNotas, CANTIDAD);

    return 0;


/* int listadoDeNotas[CANTIDAD];
    int numeroIngresado;
    int i;
    int mayor;
    int menor;
    int sumaDeNotas;
    int promedio;


 ** printf(" Tamaño :%d" ,sizeof(numeroIngresado));
    printf("\n Tamaño :%d" ,sizeof(listadoDeNotas));
    printf("\n Tamaño :%d" ,&numeroIngresado);
    printf("\n Tamaño :%d" ,listadoDeNotas); **


    for (i=0;i<CANTIDAD;i++)
    {
        printf("\n ingrese nota n %d :", i+1);
        scanf("%d", &numeroIngresado);
        listadoDeNotas[i]=numeroIngresado;

    }
    for (i=0;i<CANTIDAD;i++)
    {
        printf("\n La nota es: %d ", listadoDeNotas[i]);

    }
    // funcion mayor y menor:
    for (i=0;i<CANTIDAD;i++)
    {
        if( i==0 || listadoDeNotas[i]>mayor)
        {
            mayor=listadoDeNotas;
        }
    }
    for (i=0;i<CANTIDAD;i++)
    {
        if (i==0 || listadoDeNotas[i]<menor)
        {
            menor=listadoDeNotas;
        }
    }
    // promedio:
    sumaDeNotas=retornarTotal(listadoDeNotas, CANTIDAD);
    promedio=retornarPromedio(listadoDeNotas, CANTIDAD);
    printf("\n la suma de numeros sera :%d", sumaDeNotas);
    printf("\n el promedio sera :%d", promedio);
    printf("\n\n\t el mayor es :%d", mayor);
    printf("\n\n\t el menor es :%d", menor);
    return 0 */
}
/* brief
    a-el mayor
    b-el menor
    c-cantidad de pares
    d-suma total
    e-promedio
*/
int retornarTotal(int listado[], int tamaniio)
{
    int sumaDeNotas;
    int i;
    for(i=0;i<tamanio;i++)
        {
            sumaDeNotas+=listado[i];
        }


    return sumaDeNotas;
}
int retornarPromedio(int listado[], int tamanio)
{
    int suma;
    int promedio;
    suma=retornarTotal(listado, tamanio);
    promedio=suma/tamanio;

    return promedio;

}
void cargarListado(int listado[], int tamanio)
{
    int i;
    int numeroIngresado;
    for (i=0;i<tamanio;i++)
    {
        printf("\n la nota es :%D",i+1);
        scanf("%d", &numeroIngresado);

    }
}
void mostrarListado(int listado [], int tamanio)
{
    int i;
    int numeroIngresado;
    for (i=1;i<tamanio;i++)
    {
        printf
    }
}
int numeroMayor()
{
    int numeroIngresado;

}
