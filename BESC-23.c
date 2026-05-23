/*
Aluno: Bruno Emanuel da Silva Cruz
RA: 0028483
Exercicio: Maior de dois numeros
*/

#include <stdio.h>
int main(){
    int a,b;

    printf("Digite dois numeros: ");
    scanf("%d %d",&a,&b);

    if(a > b)
        printf("Maior numero: %d\n",a);
    else if(b > a)
        printf("Maior numero: %d\n",b);
    else
        printf("Os numeros sao iguais.\n");

    return 0;
}
