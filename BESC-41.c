/*
Aluno: Bruno Emanuel da Silva Cruz
RA: 0028483
Exercicio: Exercicio 41
*/

#include <stdio.h>
int main(){ int n,i=2,primo=1; printf("Digite um numero: "); scanf("%d",&n); while(i<n){ if(n%i==0) primo=0; i++; } if(primo && n>1) printf("Numero primo.\n"); else printf("Nao e primo.\n"); return 0; }
