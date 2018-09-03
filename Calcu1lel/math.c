#include <stdio.h>
#include <stdlib.h>
#include<string.h>

/*funcionalidad: funcion encargada de pedir un num y almacenarlo
parametros: recibe una direccion de memoria
retorno:
*/

void ingresarNumero(float* pNumero)
{
    printf("Ingrese un numero ");
    //__fpurge(stdin); //para windows no funca xd
    fflush(stdin);
    scanf("%f",pNumero);

}
int sumar(float numero1, float numero2)
{
    float resultado;
    resultado=numero1+numero2;
    return resultado;
}
int restar(float numero1, float numero2)
{
    float resultado;
    resultado=numero1-numero2;
    return resultado;
}
int multiplicar(float numero1, float numero2)
{
    float resultado;
    resultado=numero1*numero2;
    return resultado;
}
int dividir(float numero1, float numero2)
{
    float resultado;
    resultado=numero1/numero2;
    return resultado;
}
int mostrarFactorial()
{
    printf("el factorial da: ALLA LA FACTOREAN\n");
    return 0;
}




