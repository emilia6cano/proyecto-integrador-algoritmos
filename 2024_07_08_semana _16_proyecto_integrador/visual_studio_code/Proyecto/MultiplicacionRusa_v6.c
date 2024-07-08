#include <stdio.h>
#include <math.h>
#include <locale.h>
#include <conio.h>
#include <time.h>

int main(int argc, char const *argv[])
{
    setlocale(LC_CTYPE, "es_ES.UTF-8");

    int multiplicandoM, multiplicadorN, procesoM, procesoN, acumulador, cantidadDiv, i;
    clock_t start, end;
    double cpu_time_used;

    //--------------------------------------START TIME--------------------------------------
    start = clock();
    //--------------------------------------END TIME--------------------------------------

    multiplicandoM = 0;
    multiplicadorN = 0;
    procesoM = 0;
    procesoN = 0;
    acumulador = 0;
    cantidadDiv = 0;

    printf("Ingrese el multiplicando (M) (Entre 0-10000):\n");
    scanf("%i", &multiplicandoM);
    printf("Ingrese el multiplicador (N) (Entre 0-10000):\n");
    scanf("%i", &multiplicadorN);

    while (multiplicandoM<0 || multiplicadorN<0 || multiplicandoM>10000 || multiplicadorN>10000)
    {
        printf("Al menos un número ingresado está fuera del rango definido o tiene decimales\n");
        printf("Ingrese números enteros positivos dentro del rango\n");

        printf("Ingrese el multiplicando (M) (Entre 0-10000):\n");
        scanf("%i", &multiplicandoM);
        printf("Ingrese el multiplicador (N) (Entre 0-10000):\n");
        scanf("%i", &multiplicadorN);
    }



    procesoM = multiplicandoM;
    procesoN = multiplicadorN;

    while (procesoM>0)
    {
        cantidadDiv = cantidadDiv+1;
        procesoM = trunc(procesoM/2);
    }

    procesoM = multiplicandoM;

    for (i = 0; i <= cantidadDiv; i++)
    {
        printf("M: %i\n", procesoM);

        if ((procesoM%2)==1)
        {
            acumulador = acumulador + procesoN;
            printf("N: %i*\n", procesoN);
        }
        else
        {
            printf("N: %i\n", procesoN);
        }

        printf("Acumulado: %i\n", acumulador);
        
        procesoM = trunc(procesoM/2);
        procesoN = procesoN*2;
    }
    
    printf("El resultado de multiplicar %i x %i, es: %i\n", multiplicandoM,multiplicadorN,acumulador);

    //--------------------------------------START TIME--------------------------------------
    end = clock();
    cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;

    printf("Tiempo de ejecución: %f\n", cpu_time_used);
    //--------------------------------------END TIME--------------------------------------

    getch();
    
    return 0;
}
