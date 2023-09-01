#include <stdio.h>
#include <math.h>
int main()
{
    float numero1,numero2,numero3,numero4;

    printf("Degite o PRIMEIRO numero:\n");
    scanf("%f",&numero1);

     printf("Degite o SEGUNDO numero:\n");
    scanf("%f",&numero2);

     printf("Degite o TERCEIRO numero:\n");
    scanf("%f",&numero3);

     printf("Degite o QUARTO numero:\n");
    scanf("%f",&numero4);


if (numero1>numero2&&numero1>numero3&&numero1>numero4)
    {
        printf("\no MAIOR numero e o PRIMEIRO digitado, com valor de:\n%.2f",numero1);
    }
 else if (numero2>numero3&&numero2>numero4)
    {
        printf("\no MAIOR numero e o SEGUNDO digitado, com valor de:\n%.2f",numero2);
    }
else if (numero3>numero4)
    {
       printf("\no MAIOR numero e o TERCEIRO digitado, com valor de:\n%.2f",numero3);
    }
else
    {
        printf("\no MAIOR numero e o QUARTO digitado, com valor de:\n%.2f",numero4);
    }

  if (numero1<numero2&&numero1<numero3&&numero1<numero4)
    {
        printf("\no MENOR numero e o PRIMEIRO digitado, com valor de:\n%.2f",numero1);
    }

    else if (numero2<numero3&&numero2<numero4)
    {
        printf("\no MENOR numero e o SEGUNDO digitado, com valor de:\n%.2f",numero2);
    }
     else if (numero3<numero4)
    {
       printf("\no MENOR numero e o TERCEIRO digitado, com valor de:\n%.2f",numero3);
    }
    else
    {
        printf("\no MENOR numero e o QUARTO digitado, com valor de:\n%.2f",numero4);   
    }
}
/*
Construa um algoritmo que, dado quatro valores, A, B, C e D, o algoritmo imprima o maior e o menor valor. 
*/