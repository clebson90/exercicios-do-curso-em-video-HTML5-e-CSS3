#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>

int main () {
    int i;

    printf("Salvando os dados...\n");
    printf("progresso: (");
    for (i = 1; i <= 20; i++) {
        printf("#");
        Sleep(500);
    }
    printf(") 100%%\n");
    Sleep(500);
    printf("Saindo do sitema.");
}