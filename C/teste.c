#include <stdio.h>
#include <stdlib.h>

int main () {
    printf("------------------\n");
    printf("Sistema FerraLog\n");
    printf("------------------\n");
    char nome[50];
    int codigo;
    float valor;
    printf("ferramenta:");
    scanf("%s", &nome);
    printf("Codigo:");
    scanf("%d", &codigo);
    printf("Valor:");
    scanf("%2f", &valor);
    system("cls");
    if (valor < 0) {
        printf("Erro critico: Não é possivel cadastrar ferramentas com valor negativo");
    } else {
        printf("---RECIBO FERRALOG---\n");
        printf("Ferramenta: %s\n", &nome);
        printf("Codigo: %d\n", codigo);
        printf("Valor: %2f" , valor);
    }
    return 0;
}
