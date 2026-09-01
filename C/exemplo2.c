#include <stdio.h>

int main () {
    int opcao;
    printf("Menu interativo\n");
    printf("1 - novo jogo\n");
    printf("2 - carregar jogo\n");
    printf("3 - Sair\n");
    printf("Escolha uma opcao: ");
    scanf("%d" , &opcao);

    switch (opcao) {
        case 1:
            printf("Iniciando novo jogo");
            break;
        
        case 2:
            printf("Carregar jogo");
            break;

        case 3:
            printf("Sair");
            break;
        default:
            printf("opcao invalida");
            break;
    }
    return 0;
}