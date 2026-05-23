/*
* Aluno:     BRUNO EMANUEL DA SILVA CRUZ - RA 0028483
* Exercício: BESC 55 - Exercicio 55
*/

#include <stdio.h>
int main(){ int n,maior=0; do{ printf("Digite um numero: "); scanf("%d",&n); if(n>maior) maior=n; }while(n>=0); printf("Maior numero digitado: %d\n",maior); return 0; }
