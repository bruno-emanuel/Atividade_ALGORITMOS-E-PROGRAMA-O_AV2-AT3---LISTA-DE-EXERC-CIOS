/*
* Aluno:     BRUNO EMANUEL DA SILVA CRUZ - RA 0028483
* Exercício: BESC 57 - Exercicio 57
*/

#include <stdio.h>
#include <string.h>
int main(){ char cor[20]; printf("Digite a cor: "); scanf("%s",cor); if(strcmp(cor,"Verde")==0) printf("Vamos brincar la fora!\n"); else if(strcmp(cor,"Amarelo")==0) printf("Estou ficando com soninho...\n"); else if(strcmp(cor,"Vermelho")==0) printf("Estou com fome, hora do lanche!\n"); else printf("Cor desconhecida.\n"); return 0; }
