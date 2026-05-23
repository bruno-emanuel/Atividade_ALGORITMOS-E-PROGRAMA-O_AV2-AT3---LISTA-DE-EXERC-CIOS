/*
Aluno: Bruno Emanuel da Silva Cruz
RA: 0028483
Exercicio: Exercicio 55
*/

#include <stdio.h>
int main(){ int n,maior=0; do{ printf("Digite um numero: "); scanf("%d",&n); if(n>maior) maior=n; }while(n>=0); printf("Maior numero digitado: %d\n",maior); return 0; }
