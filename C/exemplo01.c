#include <stdio.h>

int main () {
    int idade;
    printf("Digite sua idade: ");
    scanf("%d", &idade);
    if (idade < 18) {
        printf("Menor de idade");
    } else if (idade >= 60) {
        printf("Idoso");
    } else {
        printf("Adulto");
    }
    return 0;
}