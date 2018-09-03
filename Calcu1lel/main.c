#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "math.h"
#include "math.c"


int ingresarOpcion(void);

int main()
{
    float numeroA;
    float numeroB;
    int resultadoSuma;
    int resultadoResta;
    int resultadoMultiplicacion;
    int resultadoDivision;
    int flagA=0;
    int flagB=0;
    int opcion;
    do
    {

        printf("\nBienvenida CHIQUITAAAAAAAAAAAA!!!\n\n");
        if(flagA==1)
        {
        printf("1.Ingrese numero (A=%.2f)\n",numeroA);
        }else
        {
        printf("1.Ingrese numero (A=x)\n");
        }
        if(flagB==1)
        {
        printf("1.Ingrese numero (B=%f)\n",numeroB);
        }else{
        printf("2.Ingrese numero (B=x)\n");
        }
        printf("3.Realizar los Calculos\n");
        printf("4.Mostrar los resultados\n");
        printf("5.Salir\n");

        opcion=ingresarOpcion();
        switch(opcion)
        {
        case 1:
            flagA=1;
            ingresarNumero(&numeroA);
            break;
        case 2:
            flagB=1;
            ingresarNumero(&numeroB);
            break;
        case 3:
            if(flagA==1 && flagB==1)
            {
                printf("Calculando la suma %.2f + %.2f ...\n",numeroA,numeroB);
                printf("Calculando la resta %.2f - %.2f ...\n",numeroA,numeroB);
                printf("Calculando la multiplicacion %.2f * %.2f ...\n",numeroA,numeroB);
                printf("Calculando la division %.2f / %.2f ...\n",numeroA,numeroB);
                printf("Calculando los factoriales de %.2f y %.2f ...\n",numeroA,numeroB);
            }else
            {
                printf("Error! Ingrese los 2 numeros...\n");
            }
            break;
        case 4:

            resultadoSuma=sumar(numeroA,numeroB);
            printf("El resultado de la suma es %d\n", resultadoSuma);

            resultadoResta=restar(numeroA,numeroB);
            printf("El resultado de la resta es %d\n", resultadoResta);

            resultadoMultiplicacion=multiplicar(numeroA,numeroB);
            printf("El resultado de la multiplicacion es %d\n", resultadoMultiplicacion);

            resultadoDivision=dividir(numeroA,numeroB);
            printf("El resultado de la division es %d\n", resultadoDivision);


            mostrarFactorial();
            /*int factorial(int );

int main()
{ int valor,result;

printf("\nIngrese numero:");
scanf("%d",&valor);
result=factorial(valor);
printf("\nEl factorial de %d es %d",valor,result);
}

int factorial(int numerorandom)
{
    int respuesta;
    if(numerorandom==1)
    {
        return 1;
    }
respuesta=numerorandom* factorial(numerorandom-1);
return (respuesta);
}*/
            break;
        case 5:
            printf("Saliendo...\n");
            break;
        default:
            printf("Elegi un numero del 1 al 5 capo...\n");
            break;

        }
        system("pause"); //pausa la consola
        system("cls");  //limpia
    }
    while (opcion!=5);
    return 0;
}

int ingresarOpcion(void)
{
    int opcion;
    printf("Ingrese una opcion: ");
    scanf("%d",&opcion);

    return opcion;
}








