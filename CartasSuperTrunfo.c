#include <stdio.h>

int main() {
    // Declaração das variáveis da Carta 1
    char estado1;
    char codigo1[4];
    char nomeCidade1[50];
    unsigned long int populacao1;
    float area1, pib1;
    int pontosTuristicos1;
    float densidade1, pibPerCapita1, superPoder1;

    // Declaração das variáveis da Carta 2
    char estado2;
    char codigo2[4];
    char nomeCidade2[50];
    unsigned long int populacao2;
    float area2, pib2;
    int pontosTuristicos2;
    float densidade2, pibPerCapita2, superPoder2;

    // Leitura dos dados da Carta 1
    printf("Cadastro da Carta 1:\n");
    printf("Digite o Estado (A-H): ");
    scanf(" %c", &estado1);
    printf("Digite o Código da Carta (ex: A01): ");
    scanf(" %3s", codigo1);
    printf("Digite o Nome da Cidade: ");
    scanf(" %49s", nomeCidade1);
    printf("Digite a População: ");
    scanf(" %lu", &populacao1);
    printf("Digite a Área (em km²): ");
    scanf(" %f", &area1);
    printf("Digite o PIB (em bilhões de Reais): ");
    scanf(" %f", &pib1);
    printf("Digite o Número de Pontos Turísticos: ");
    scanf(" %d", &pontosTuristicos1);

    // Leitura dos dados da Carta 2
    printf("\nCadastro da Carta 2:\n");
    printf("Digite o Estado (A-H): ");
    scanf(" %c", &estado2);
    printf("Digite o Código da Carta (ex: B03): ");
    scanf(" %3s", codigo2);
    printf("Digite o Nome da Cidade: ");
    scanf(" %49s", nomeCidade2);
    printf("Digite a População: ");
    scanf(" %lu", &populacao2);
    printf("Digite a Área (em km²): ");
    scanf(" %f", &area2);
    printf("Digite o PIB (em bilhões de Reais): ");
    scanf(" %f", &pib2);
    printf("Digite o Número de Pontos Turísticos: ");
    scanf(" %d", &pontosTuristicos2);

    // Cálculos das variáveis adicionais
    densidade1 = (float)populacao1 / area1;
    pibPerCapita1 = pib1 * 1000000000 / populacao1;
    superPoder1 = populacao1 + area1 + pib1 + pontosTuristicos1 + pibPerCapita1 + (1.0f / densidade1);

    densidade2 = (float)populacao2 / area2;
    pibPerCapita2 = pib2 * 1000000000 / populacao2;
    superPoder2 = populacao2 + area2 + pib2 + pontosTuristicos2 + pibPerCapita2 + (1.0f / densidade2);

    // Exibição das informações e cálculos
    printf("\nCarta 1:\n");
    printf("Estado: %c\nCódigo: %s\nCidade: %s\nPopulação: %lu\n", estado1, codigo1, nomeCidade1, populacao1);
    printf("Área: %.2f km²\nPIB: %.2f bi\nPontos Turísticos: %d\n", area1, pib1, pontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km²\nPIB per Capita: %.2f Reais\nSuper Poder: %.2f\n",
           densidade1, pibPerCapita1, superPoder1);

    printf("\nCarta 2:\n");
    printf("Estado: %c\nCódigo: %s\nCidade: %s\nPopulação: %lu\n", estado2, codigo2, nomeCidade2, populacao2);
    printf("Área: %.2f km²\nPIB: %.2f bi\nPontos Turísticos: %d\n", area2, pib2, pontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km²\nPIB per Capita: %.2f Reais\nSuper Poder: %.2f\n",
           densidade2, pibPerCapita2, superPoder2);

    // Comparações
    printf("\nComparação de Cartas:\n");
    printf("População: Carta 1 venceu (%d)\n", populacao1 > populacao2);
    printf("Área: Carta 1 venceu (%d)\n", area1 > area2);
    printf("PIB: Carta 1 venceu (%d)\n", pib1 > pib2);
    printf("Pontos Turísticos: Carta 1 venceu (%d)\n", pontosTuristicos1 > pontosTuristicos2);
    printf("Densidade Populacional: Carta 1 venceu (%d)\n", densidade1 < densidade2);
    printf("PIB per Capita: Carta 1 venceu (%d)\n", pibPerCapita1 > pibPerCapita2);
    printf("Super Poder: Carta 1 venceu (%d)\n", superPoder1 > superPoder2);

    return 0;
}
