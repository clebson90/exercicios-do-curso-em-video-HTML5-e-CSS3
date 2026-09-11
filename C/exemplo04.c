#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>

int main() {
    int contador = 5;

    printf("------------------\n");
    printf("Maquina esfriando\n");
    printf("------------------\n");

    while (contador > 0) {
        printf("contador: %d\n", contador);
        Sleep(1000);
        contador--;
    }
}