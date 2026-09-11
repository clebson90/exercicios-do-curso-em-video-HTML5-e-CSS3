#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>

int main() {
    int opcao;
    do { 
    printf("---------------\n");
    printf("BANCO DE DADOS\n");
    printf("---------------");
    Sleep(1500);
    system("cls");

    printf("Deseja apagar o banco de dados?\n");
    Sleep(1000);
    printf("[1] Sim\n");
    Sleep(1000);
    printf("[2] Nao\n");
    scanf("%d", &opcao);
    if (opcao == 1) {
        printf("Apagando banco de dados...");
        Sleep(1000);
    } else if (opcao == 2) {
        Sleep(1000);
        system("cls");
    } else {
        printf("opcao invalida. Tente novamente");
        Sleep(1500);
        system("cls");
    }
    
    } while (opcao != 1);
}