/*
* Aluno:     BRUNO EMANUEL DA SILVA CRUZ - RA 0028483
* Exercício: BESC 22 - Par ou impar
*/

#include <stdio.h>
int main(){
    int num;
    printf("Digite um numero: ");
    scanf("%d",&num);

    if(num % 2 == 0)
        printf("Numero par.\n");
    else
        printf("Numero impar.\n");

    return 0;
}
