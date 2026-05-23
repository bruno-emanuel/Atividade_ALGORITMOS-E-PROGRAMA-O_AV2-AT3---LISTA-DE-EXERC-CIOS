/*
Aluno: Bruno Emanuel da Silva Cruz
RA: 0028483
Exercicio: Exercicio 52
*/

#include <stdio.h>
int main(){ int n,soma=0; do{ printf("Digite um numero: "); scanf("%d",&n); soma+=n; }while(n%10!=0); printf("Soma total = %d\n",soma); return 0; }
