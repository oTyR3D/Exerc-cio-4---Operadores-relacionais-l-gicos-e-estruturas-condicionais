#include <stdio.h>
#include <math.h>
int main()
{
    double numero,resultado;
    printf("Degite o numero:");
    scanf("%lf",&numero);

    if (numero>=0)
    {
        resultado=sqrt(numero);
        printf("A raiz quadrada do numero %.2lf e igual a %.2lf",numero,resultado);
    }
    
    else
    {
        resultado=pow(numero,2);
        printf("O numero %.2lf elevado ao quadrado e igual a  %.2lf",numero,resultado);
    }
    return 0;
}


/*Escreva um algoritmo que leia um número e imprima a raiz quadrada do número caso ele seja positivo ou igual a zero
e o quadrado do número caso ele seja negativo.
*/