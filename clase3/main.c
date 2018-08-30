#include <stdio.h>
#include <stdlib.h>

int pedirEdad();
int validarEdad(int edad,int minimo,int maximo);

int main()
{
    int edad;
    edad = pedirEdad();
    printf("la edad ingresada fue %d\n" , edad);
}
int validarEdad(int edad, int minimo, int maximo)
{
    while(edad < minimo ||edad > maximo)
    {
        printf("Error, reingrese edad\n");
        scanf("%d", &edad);
    }
    return edad;
}
int pedirEdad()
{
    int edad;
    printf("Ingrese edad\n");
    scanf("%d", &edad);
    edad = validarEdad(edad,1,100);
}
