#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>

int main () {
    int num;
    int valor_final = 1;
    int opcao_menu;
    int num_sorteado = 22;
    int num_opcao3;
    int soma = 0;
    int num_opcao2 = 0;
    int i;

    do {
        printf("====================================\n");
        printf("          ESCOLHA UM JOGO           \n");
        printf("====================================\n");
        printf("[1] FATORIAL\n");
        printf("[2] SOMA DOS PARES\n");
        printf("[3] ADIVINHE O NUMERO\n");
        printf("[4] Sair do sistema\n");
        
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao_menu);

        switch (opcao_menu) {
            case 1:
                printf("Qual fatorial voce quer? ");
                scanf("%d", &num);

                for (num; num >= 1; num--) {
                    printf("%d ", num);
                    Sleep(1000);
                    valor_final = valor_final * num;
                    if (num > 1) {
                        printf("* ");
                    } else {   
                        printf("= ");
                        printf("%d\n", valor_final);
                        Sleep(2000);
                    }
                }
                break;

            case 2:
                while (num_opcao2 >= 0) {
                    printf("Digite um numero: ");
                    scanf("%d", &num_opcao2);
                    if (num_opcao2 % 2 == 0) {
                        soma = soma + num_opcao2;
                    }
                    printf("Soma parcial: %d\n", soma);
                    Sleep(1500);
                }
                Sleep(1000);
                printf("Soma final: %d\n", soma);
                break;

            case 3:
                do {
                    printf("Digite um numero: ");
                    scanf("%d", &num_opcao3);
                    if (num_opcao3 < num_sorteado) {
                        printf("O numero sorteado e maior!\n");
                        Sleep(1500);
                    } 
                    else if (num_opcao3 == num_sorteado) {
                        printf("voce acertou!\n");
                        Sleep(1500);
                    } else {
                        printf("O numero sorteado e menor!\n");
                        Sleep(1500);
                    }           
                } while (num_opcao3 != 22);
                break;

            case 4:
                printf("Saindo do sistema...\n");
                printf("progresso: (");
                for (i = 1; i <= 20; i++) {
                    printf("#");
                    Sleep(500);
                }
                printf(") 100%%\n");
                break;
                
            default:
                printf("Opcao invalida.\n");
                break;
        }
    } while (opcao_menu != 4);
}