/*
* Aluno:     BRUNO EMANUEL DA SILVA CRUZ - RA 0028483
* Exercício: BESC 59 - Exercicio 59
*/

#include <stdio.h>
int main(){ char letra; printf("Digite uma letra: "); scanf(" %c",&letra); switch(letra){ case 'N': printf("Seguir para o Norte.\n"); break; case 'S': printf("Seguir para o Sul.\n"); break; case 'L': printf("Virar a Leste (Direita).\n"); break; case 'O': printf("Virar a Oeste (Esquerda).\n"); break; default: printf("Comando invalido! Pare o robo.\n"); } return 0; }
