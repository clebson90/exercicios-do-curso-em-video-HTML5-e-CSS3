#include <stdio.h>
#include <stdlib.h>

int main() {
    int senha = 1234;
    int usuario;
    int contador = 3;

    printf("----------------\n");
    printf("Login com senha\n");
    printf("----------------\n");

    printf("Digite sua senha: ");
    scanf("%d", &usuario);

    while (usuario != senha) {
        contador--;

        if (contador == 0) {
            printf("Voce atingiu o limite de senhas!\n");
            return 0;
        }

        printf("Senha incorreta! Tentativas restantes (%d). Tente novamente: ", contador);
        scanf("%d", &usuario);
    }

    printf("Senha correta! Acesso permitido.\n");
    return 0;
}