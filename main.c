#include <stdio.h>
#include <stdlib.h>

int main()
{
    int edad;
    float acumulador = 0;
    float promedio;
    int continuar = 1 ;
    int i = 0;

    do
    {
        printf("Ingrese edad\n");
        scanf("%d", &edad);
        while(edad<0 || edad>100)
        {
            printf("Error, reingrese edad\n");
            scanf("%d", &edad);
        }
        acumulador += edad ;
        printf("desea continuar ?\n");
        scanf("%d" ,&continuar);
        i++;

    }while(continuar);
    promedio = acumulador / i;
    printf("el promedio sera %f", promedio);

    /* for( i=0 ; i<5; i++)
    {
    printf("Ingrese edad\n");
    scanf("%d", &edad);
    while(edad<0 || edad>100)
    {
        printf("Error, reingrese edad\n");
        scanf("%d", &edad);
    }
    } */



    return 0;
}
