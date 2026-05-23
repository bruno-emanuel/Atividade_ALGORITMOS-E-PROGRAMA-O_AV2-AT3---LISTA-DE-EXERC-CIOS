/*
* Aluno:     BRUNO EMANUEL DA SILVA CRUZ - RA 0028483
* Exercício: BESC 56 - Exercicio 56
*/

#include <stdio.h>
int main(){ int op; printf("Escolha um combo: "); scanf("%d",&op); switch(op){ case 1: printf("Combo Hamburguer + Batata + Refri - R$ 30,00\n"); break; case 2: printf("Combo Pizza Brotinho + Refri - R$ 25,00\n"); break; case 3: printf("Combo Salada + Suco Natural - R$ 22,00\n"); break; case 4: printf("Combo Balde de Frango + Molho - R$ 35,00\n"); break; default: printf("Opcao invalida!\n"); } return 0; }
