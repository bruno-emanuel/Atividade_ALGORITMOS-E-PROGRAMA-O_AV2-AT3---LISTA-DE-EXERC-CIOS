/*
* Aluno:     BRUNO EMANUEL DA SILVA CRUZ - RA 0028483
* Exercício: BESC 16 - Multiplo de 3 e/ou 5
*/

#include <stdio.h>
int main(){
    int n;
    printf("Digite o numero do pedido: ");
    scanf("%d",&n);

    if(n % 3 == 0 && n % 5 == 0)
        printf("Ganhou refrigerante e sobremesa.\n");
    else if(n % 3 == 0)
        printf("Ganhou refrigerante.\n");
    else if(n % 5 == 0)
        printf("Ganhou sobremesa.\n");
    else
        printf("Nao ganhou brindes.\n");

    return 0;
}
