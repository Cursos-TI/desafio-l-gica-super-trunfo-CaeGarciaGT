#include <stdio.h>

int main() {
    printf("Desafio Super Trunfo\n");

    // Primeira carta
    char estado1;
    char codigo1[4];
    char cidade1[30];
    unsigned long int populacao1;
    float area1, pib1;
    int npt1;
    float densidade1, pibPerCapita1, superPoder1;

    // Segunda carta
    char estado2;
    char codigo2[4];
    char cidade2[30];
    unsigned long int populacao2;
    float area2, pib2;
    int npt2;
    float densidade2, pibPerCapita2, superPoder2;

    // --- Primeira Carta ---
    printf("\n- Preencha a Primeira Carta -\n");

    printf("Digite um estado: \n");
    scanf(" %c", &estado1);

    printf("Digite o código do estado: \n");
    scanf("%s", codigo1);

    printf("Digite a cidade: \n");
    scanf("%s", cidade1);

    printf("Digite a população: \n");
    scanf("%lu", &populacao1);

    printf("Digite a área (em KM²): \n");
    scanf("%f", &area1);

    printf("Digite o PIB (em bilhões de reais): \n");
    scanf("%f", &pib1);

    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &npt1);

    // Cálculos da primeira carta
    densidade1 = populacao1 / area1;
    pibPerCapita1 = (pib1 * 1000000000) / populacao1;
    superPoder1 = populacao1 + area1 + (pib1 * 1000000000) + npt1 + pibPerCapita1 + (1.0 / densidade1);

    // --- Segunda Carta ---
    printf("\n- Preencha a Segunda Carta -\n");

    printf("Digite um estado: \n");
    scanf(" %c", &estado2);

    printf("Digite o código do estado: \n");
    scanf("%s", codigo2);

    printf("Digite a cidade: \n");
    scanf("%s", cidade2);

    printf("Digite a população: \n");
    scanf("%lu", &populacao2);

    printf("Digite a área (em KM²): \n");
    scanf("%f", &area2);

    printf("Digite o PIB (em bilhões de reais): \n");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &npt2);

    // Cálculos da segunda carta
    densidade2 = populacao2 / area2;
    pibPerCapita2 = (pib2 * 1000000000) / populacao2;
    superPoder2 = populacao2 + area2 + (pib2 * 1000000000) + npt2 + pibPerCapita2 + (1.0 / densidade2);

    // --- Exibição das Cartas ---
    printf("\n--- Carta 1 ---\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("População: %lu\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Pontos turísticos: %d\n", npt1);
    printf("Densidade populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per capita: R$ %.2f\n", pibPerCapita1);
    printf("Super Poder: %.2f\n", superPoder1);

    printf("\n--- Carta 2 ---\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Pontos turísticos: %d\n", npt2);
    printf("Densidade populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per capita: R$ %.2f\n", pibPerCapita2);
    printf("Super Poder: %.2f\n", superPoder2);

    // --- Comparação de Atributo Único ---
    printf("\n--- Comparação: Densidade Populacional ---\n");
    printf("Carta 1: %.2f hab/km²\n", densidade1);
    printf("Carta 2: %.2f hab/km²\n", densidade2);

    if (densidade1 < densidade2) {
        printf("Resultado: Carta 1 vence! (Menor densidade populacional)\n");
    } else if (densidade2 < densidade1) {
        printf("Resultado: Carta 2 vence! (Menor densidade populacional)\n");
    } else {
        printf("Resultado: Empate! Ambas têm a mesma densidade.\n");
    }

    return 0;
}

