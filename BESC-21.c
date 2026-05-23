/*
* Aluno:     BRUNO EMANUEL DA SILVA CRUZ - RA 0028483
* Exercício: BESC 21 - Numero positivo ou negativo
*/

#include <stdio.h>
int main(){
    float num;

    printf("Digite um numero: ");
    scanf("%f",&num);

    if(num > 0)
        printf("Numero positivo.\n");
    else if(num < 0)
        printf("Numero negativo.\n");
    else
        printf("Numero igual a zero.\n");

    return 0;
}
