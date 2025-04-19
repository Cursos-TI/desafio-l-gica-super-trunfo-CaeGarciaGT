#include <stdio.h>
#include <string.h>

int main() {
    // Dados da primeira carta
    char pais1[30];
    unsigned long int populacao1;
    float area1, pib1;
    int npt1;
    float densidade1;

    // Dados da segunda carta
    char pais2[30];
    unsigned long int populacao2;
    float area2, pib2;
    int npt2;
    float densidade2;

    // Entrada de dados - Carta 1
    printf("\n--- Cadastro da Primeira Carta ---\n");
    printf("Nome do país: ");
    scanf(" %[^\n]", pais1);
    printf("População: ");
    scanf("%lu", &populacao1);
    printf("Área (em km²): ");
    scanf("%f", &area1);
    printf("PIB (em bilhões de dólares): ");
    scanf("%f", &pib1);
    printf("Número de pontos turísticos: ");
    scanf("%d", &npt1);

    // Cálculo densidade carta 1
    densidade1 = populacao1 / area1;

    // Entrada de dados - Carta 2
    printf("\n--- Cadastro da Segunda Carta ---\n");
    printf("Nome do país: ");
    scanf(" %[^\n]", pais2);
    printf("População: ");
    scanf("%lu", &populacao2);
    printf("Área (em km²): ");
    scanf("%f", &area2);
    printf("PIB (em bilhões de dólares): ");
    scanf("%f", &pib2);
    printf("Número de pontos turísticos: ");
    scanf("%d", &npt2);

    // Cálculo densidade carta 2
    densidade2 = populacao2 / area2;

    // Menu de comparação
    int opcao;
    printf("\n--- Menu de Comparação ---\n");
    printf("Escolha um atributo para comparar:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos turísticos\n");
    printf("5 - Densidade demográfica\n");
    printf("Opção: ");
    scanf("%d", &opcao);

    // Resultado
    printf("\n--- Resultado da Comparação ---\n");
    switch (opcao) {
        case 1:
            printf("Atributo: População\n");
            printf("%s: %lu habitantes\n", pais1, populacao1);
            printf("%s: %lu habitantes\n", pais2, populacao2);
            if (populacao1 > populacao2) {
                printf("Vencedor: %s\n", pais1);
            } else if (populacao2 > populacao1) {
                printf("Vencedor: %s\n", pais2);
            } else {
                printf("Empate!\n");
            }
            break;

        case 2:
            printf("Atributo: Área\n");
            printf("%s: %.2f km²\n", pais1, area1);
            printf("%s: %.2f km²\n", pais2, area2);
            if (area1 > area2) {
                printf("Vencedor: %s\n", pais1);
            } else if (area2 > area1) {
                printf("Vencedor: %s\n", pais2);
            } else {
                printf("Empate!\n");
            }
            break;

        case 3:
            printf("Atributo: PIB\n");
            printf("%s: %.2f bilhões de dólares\n", pais1, pib1);
            printf("%s: %.2f bilhões de dólares\n", pais2, pib2);
            if (pib1 > pib2) {
                printf("Vencedor: %s\n", pais1);
            } else if (pib2 > pib1) {
                printf("Vencedor: %s\n", pais2);
            } else {
                printf("Empate!\n");
            }
            break;

        case 4:
            printf("Atributo: Pontos Turísticos\n");
            printf("%s: %d pontos\n", pais1, npt1);
            printf("%s: %d pontos\n", pais2, npt2);
            if (npt1 > npt2) {
                printf("Vencedor: %s\n", pais1);
            } else if (npt2 > npt1) {
                printf("Vencedor: %s\n", pais2);
            } else {
                printf("Empate!\n");
            }
            break;

        case 5:
            printf("Atributo: Densidade Demográfica\n");
            printf("%s: %.2f hab/km²\n", pais1, densidade1);
            printf("%s: %.2f hab/km²\n", pais2, densidade2);
            if (densidade1 < densidade2) {
                printf("Vencedor: %s (menor densidade)\n", pais1);
            } else if (densidade2 < densidade1) {
                printf("Vencedor: %s (menor densidade)\n", pais2);
            } else {
                printf("Empate!\n");
            }
            break;

        default:
            printf("Opção inválida. Tente novamente.\n");
            break;
    }

    return 0;
}
