/*
Aluno: Bruno Emanuel da Silva Cruz
RA: 0028483
Exercicio: Ano bissexto
*/

#include <stdio.h>
int main(){
    int ano;

    printf("Digite o ano: ");
    scanf("%d",&ano);

    if((ano % 4 == 0 && ano % 100 != 0) || (ano % 400 == 0))
        printf("Ano bissexto.\n");
    else
        printf("Ano nao bissexto.\n");

    return 0;
}
