/*
Aluno: Bruno Emanuel da Silva Cruz
RA: 0028483
Exercicio: Exercicio 44
*/

#include <stdio.h>
int main(){ int n,cont=0; printf("Digite um numero: "); scanf("%d",&n); while(n!=0){ n/=10; cont++; } printf("Quantidade de digitos: %d\n",cont); return 0; }
