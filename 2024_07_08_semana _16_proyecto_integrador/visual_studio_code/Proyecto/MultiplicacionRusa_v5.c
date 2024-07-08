//#include <limits.h>    //printf("%i\n", INT_MAX);
#include <stdio.h>
#include <math.h>
#include <locale.h>
#include <conio.h>
#include <time.h>

int main(int argc, char const *argv[])
{
    setlocale(LC_CTYPE, "es_ES.UTF-8");

    int m, n, mProcess, nProcess, acum;
    clock_t start, end;
    double cpu_time_used;

    //--------------------------------------START TIME--------------------------------------
    start = clock();
    //--------------------------------------END TIME--------------------------------------

    acum = 0;
    m = 0;
    n = 0;
    mProcess = 0;
    nProcess = 0;
    
    do
    {
        printf("Ingrese el multiplicando (M) (Entre 0-10000):\n");
        scanf("%i", &m);
        printf("Ingrese el multiplicador (N) (Entre 0-10000):\n");
        scanf("%i", &n);

        if (m<0 || n<0 || m>10000 || n>10000) 
        {
            printf("Al menos un número ingresado está fuera del rango definido o tiene decimales\n");
            printf("Ingrese números enteros positivos dentro del rango\n");
        } 
    } while (m<0 || n<0 || m>10000 || n>10000);



    mProcess = m;
    nProcess = n;

    do
    {
        printf("M: %i\n", mProcess);

        if ((mProcess%2)==1)
        {
            acum = acum + nProcess;
            printf("N: %i*\n", nProcess);
        }
        else
        {
            printf("N: %i\n", nProcess);
        }

        printf("Acumulado: %i\n", acum);
        
        mProcess = trunc(mProcess/2);
        nProcess = nProcess*2;

        if (mProcess==0 && m!=0)
        {
            printf("M: %i\n", mProcess);        //Permite observar el caso en el que mProcess llega a 0
            printf("N: %i\n", nProcess);
            printf("Acumulado: %i\n", acum);
        }
    } while (mProcess > 0);
    
    printf("El resultado de multiplicar %i x %i, es: %i\n", m,n,acum);

    //--------------------------------------START TIME--------------------------------------
    end = clock();
    cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;

    printf("Tiempo de ejecución: %f\n", cpu_time_used);
    //--------------------------------------END TIME--------------------------------------

    getch();
    
    return 0;
}
