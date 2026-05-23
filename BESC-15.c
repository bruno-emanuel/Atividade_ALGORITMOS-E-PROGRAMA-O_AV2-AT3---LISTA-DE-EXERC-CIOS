/*
* Aluno:     BRUNO EMANUEL DA SILVA CRUZ - RA 0028483
* Exercício: BESC 15 - Quantas caixas cabem dentro do caminhao
*/

#include <stdio.h>

int main() {
    float altCam, larCam, compCam;
    float altCx, larCx, compCx;
    int qtd;

    printf("Digite altura, largura e comprimento do caminhao: ");
    scanf("%f %f %f", &altCam, &larCam, &compCam);

    printf("Digite altura, largura e comprimento da caixa: ");
    scanf("%f %f %f", &altCx, &larCx, &compCx);

    qtd = (altCam / altCx) * (larCam / larCx) * (compCam / compCx);

    printf("Quantidade de caixas que cabem: %d\n", qtd);

    return 0;
}
