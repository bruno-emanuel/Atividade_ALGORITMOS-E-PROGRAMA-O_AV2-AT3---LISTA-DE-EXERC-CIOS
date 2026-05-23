/*
Aluno: Bruno Emanuel da Silva Cruz
RA: 0028483
Exercicio: Pode votar
*/

#include <stdio.h>
int main(){
    int idade;

    printf("Digite sua idade: ");
    scanf("%d",&idade);

    if(idade >= 16)
        printf("Pode votar.\n");
    else
        printf("Nao pode votar.\n");

    return 0;
}
