/*
* Aluno:     BRUNO EMANUEL DA SILVA CRUZ - RA 0028483
* Exercício: BESC 18 - Login simples
*/

#include <stdio.h>
#include <string.h>
int main(){
    char usuario[20], senha[20];

    printf("Usuario: ");
    scanf("%s", usuario);

    printf("Senha: ");
    scanf("%s", senha);

    if(strcmp(usuario,"admin")==0 && strcmp(senha,"1234")==0)
        printf("Acesso permitido.\n");
    else
        printf("Acesso negado.\n");

    return 0;
}
