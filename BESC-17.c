/*
Aluno: Bruno Emanuel da Silva Cruz
RA: 0028483
Exercicio: O Sensor do Parque Tematico
*/

#include <stdio.h>
int main(){
    int altura;
    printf("Digite a altura da crianca em cm: ");
    scanf("%d",&altura);

    if(altura >= 140)
        printf("Entrada liberada.\n");
    else
        printf("Entrada negada.\n");

    return 0;
}
