/*
* Aluno:     BRUNO EMANUEL DA SILVA CRUZ - RA 0028483
* Exercício: BESC 19 - Ordem crescente
*/

#include <stdio.h>
int main(){
    int a,b,c,temp;

    printf("Digite tres numeros: ");
    scanf("%d %d %d",&a,&b,&c);

    if(a>b){ temp=a; a=b; b=temp; }
    if(a>c){ temp=a; a=c; c=temp; }
    if(b>c){ temp=b; b=c; c=temp; }

    printf("Ordem crescente: %d %d %d\n",a,b,c);

    return 0;
}
