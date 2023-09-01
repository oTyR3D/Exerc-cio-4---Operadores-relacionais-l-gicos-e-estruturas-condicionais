#include <stdio.h>
#include <math.h>
int main()
{
    float numero;

    printf("Degite o PRIMEIRO numero:\n");
    scanf("%f",&numero);

if (numero==5){
        printf("O numero e igual a 5");
    }
else if (numero==200){
        printf("O numero e igual a 200");
    }
else if (numero==400){
        printf("O numero e igual a 400");
    }
else if (numero>=500&&numero<=1000){
        printf("O numero esta entre 500 e 1000");
    }
else{
        printf("O numero esta fora do escopo");
    }
}
/*
Construir um algoritmo que leia um número e imprima se ele é igual a 5, a 200, a 400, 
se está no intervalo entre 500 e 1000, ou se ela está fora dos escopos anteriores. 
*/