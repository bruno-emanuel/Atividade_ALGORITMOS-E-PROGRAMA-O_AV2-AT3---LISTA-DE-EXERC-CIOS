/*
Aluno: Bruno Emanuel da Silva Cruz
RA: 0028483
Exercicio: Tipo de Triangulo
*/

#include <stdio.h>

int main() {
    float a, b, c;

    printf("Digite os tres lados do triangulo: ");
    scanf("%f %f %f", &a, &b, &c);

    if (a == b && b == c) {
        printf("Triangulo Equilatero.\n");
    } else if (a == b || a == c || b == c) {
        printf("Triangulo Isosceles.\n");
    } else {
        printf("Triangulo Escaleno.\n");
    }

    return 0;
}
