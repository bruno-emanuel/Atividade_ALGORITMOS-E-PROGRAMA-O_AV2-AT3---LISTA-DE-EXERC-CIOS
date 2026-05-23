/*
* Aluno:     BRUNO EMANUEL DA SILVA CRUZ - RA 0028483
* Exercício: BESC 25 - Notas e aprovacao
*/

#include <stdio.h>
int main(){
    float media;

    printf("Digite a media final: ");
    scanf("%f",&media);

    if(media >= 7)
        printf("Aluno aprovado.\n");
    else if(media >= 5)
        printf("Aluno em recuperacao.\n");
    else
        printf("Aluno reprovado.\n");

    return 0;
}
