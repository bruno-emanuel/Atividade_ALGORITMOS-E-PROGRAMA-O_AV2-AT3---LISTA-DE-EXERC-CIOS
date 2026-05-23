/*
Aluno: Bruno Emanuel da Silva Cruz
RA: 0028483
Exercicio: Exercicio 34
*/

#include <stdio.h>
int main(){ int n,primo=1; printf("Digite um numero: "); scanf("%d",&n); if(n<=1) primo=0; for(int i=2;i<n;i++) if(n%i==0) primo=0; if(primo) printf("Numero primo.\n"); else printf("Nao e primo.\n"); return 0; }
