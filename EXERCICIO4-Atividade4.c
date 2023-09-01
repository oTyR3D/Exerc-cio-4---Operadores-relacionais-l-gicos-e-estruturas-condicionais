#include <stdio.h>
#include <math.h>
int main(){
    float A,B,C;

    printf("Degite o PRIMEIRO numero:\n");
    scanf("%f",&A);

    printf("Degite o SEGUNDO numero:\n");
    scanf("%f",&B);

    printf("Degite o TERCEIRO numero:\n");
    scanf("%f",&C);
    
    if (A>B&&A>C){
        printf("%.2f ",A);
        if (B>C)
        {
            printf("%.2f %.2f",B,C);
            }else if(C>B ){
            printf("%.2f %.2f",C,B);
            }
        }
    if (B>A&&B>C){
        printf("%.2f ",B);
        if (A>C)
        {
            printf("%.2f %.2f",A,C);
            }else if(C>A ){
            printf("%.2f %.2f",C,A);
            }   
        }

    if (C>B&&C>A){
        printf("%.2f ",C);
        if (B>A)
        {
            printf("%.2f %.2f",B,A);
            }else if(A>B ){
            printf("%.2f %.2f",A,B);
            }      
        }
    }
    

/*
Dados três valores A, B e C, construa um algoritmo, que imprima os valores de forma ascendente (do menor para o maior).
*/
