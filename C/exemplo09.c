#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>

int main() {
    int opcao_menu = 0;
    char nome_ferramenta[50];
    int codigo_qr = 0;
    float valor_compra = 0.0;
    int possui_garantia = 0;
    int i;

    do {
    
    printf("==================================================\n");
    printf("          SISTEMA FERRALOG - INVENTARIO           \n");
    printf("==================================================\n");
    printf("[1] Cadastrar nova ferramenta\n");
    printf("[2] Consultar ferramenta\n");
    printf("[3] Relatorios\n");
    printf("[4] Sair do sistema\n");
    printf("==================================================\n");
    printf("Digite a opcao desejada: ");

    scanf("%d" , &opcao_menu);
    system("cls");

    switch (opcao_menu) {

        case 1:
            printf("------------------\n");
            printf("Sistema FerraLog\n");
            printf("------------------\n");
            printf("Ferramenta:");
            scanf("%s" , &nome_ferramenta);
            printf("Codigo: "); 
            scanf("%d" , &codigo_qr);
            printf("Valor: ");
            scanf("%2f" , &valor_compra);
            printf("Possui garantia?\n 0- SIM\n 1- NAO: ");

            system("cls");


            if (valor_compra < 0) {
            printf("Erro: valor negativo!");
            
            } else {
                printf("---RECIBO FERRALOG---\n");
                printf("Ferramenta: %s\n", &nome_ferramenta);
                printf("Codigo: %d\n", codigo_qr);
                printf("Valor: %2f" , valor_compra);
                Sleep(5000);
                system("cls");
                break;
            }
        case 2:
            printf("Aviso: O modulo de consulta de QR Code esta em desenvolvimento.\n");
            Sleep(3000);
            system("cls");
            break;

        case 3:
            printf("Aviso: O modulo de consulta de QR Code esta em desenvolvimento.\n");
            Sleep(3000);
            system("cls");
            break;

        case 4:
            printf("Salvando os dados...\n");
            printf("progresso: (");
            for (i = 1; i <= 20; i++) {
                printf("#");
                Sleep(500);
            }
            printf(") 100%%\n");
            Sleep(500);
            printf("Saindo do sitema.");
            break;

        default:
            printf("Opcao invalida.");
            break;
    }
    } while (opcao_menu != 4);
}