#include <stdio.h>

int main() {
    // Dados fixos da Carta 1
    char nomeCidade1[] = "Sao Paulo";
    int populacao1 = 12300000;
    float area1 = 1521.11;
    float pib1 = 699.28;

    // Dados fixos da Carta 2
    char nomeCidade2[] = "Rio de Janeiro";
    int populacao2 = 6000000;
    float area2 = 1200.25;
    float pib2 = 300.50;

    // Cálculo da densidade e PIB per capita
    float densidade1 = populacao1 / area1;
    float pibPerCapita1 = pib1 * 1000000000 / populacao1;

    float densidade2 = populacao2 / area2;
    float pibPerCapita2 = pib2 * 1000000000 / populacao2;

    // Comparar um atributo: PIB per capita
    printf("Comparacao de cartas (Atributo: PIB per capita):\n\n");
    printf("Carta 1 - %s: R$ %.2f\n", nomeCidade1, pibPerCapita1);
    printf("Carta 2 - %s: R$ %.2f\n", nomeCidade2, pibPerCapita2);

    if (pibPerCapita1 > pibPerCapita2) {
        printf("\nResultado: Carta 1 (%s) venceu!\n", nomeCidade1);
    } else if (pibPerCapita2 > pibPerCapita1) {
        printf("\nResultado: Carta 2 (%s) venceu!\n", nomeCidade2);
    } else {
        printf("\nResultado: Empate!\n");
    }

    return 0;
}
