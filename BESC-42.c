/*
* Aluno:     BRUNO EMANUEL DA SILVA CRUZ - RA 0028483
* Exercício: BESC 42 - Exercicio 42
*/

#include <stdio.h>
int main(){ int n,i=1,cont=0; while(i<=10){ printf("Digite um numero: "); scanf("%d",&n); if(n%2!=0) cont++; i++; } printf("Quantidade de impares: %d\n",cont); return 0; }
