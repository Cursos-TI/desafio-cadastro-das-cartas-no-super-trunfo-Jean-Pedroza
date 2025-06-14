#include <stdio.h>

int main() {
    // Dados da Carta 1
    char nomePais1[] = "Brasil";
    int populacao1 = 213000000;
    float area1 = 8515767.0;
    float pib1 = 1868.0;
    int pontosTuristicos1 = 55;
    float densidade1 = populacao1 / area1;

    // Dados da Carta 2
    char nomePais2[] = "Argentina";
    int populacao2 = 45376763;
    float area2 = 2780400.0;
    float pib2 = 487.2;
    int pontosTuristicos2 = 40;
    float densidade2 = populacao2 / area2;

    int opcao1, opcao2;
    float valor1_c1, valor1_c2, valor2_c1, valor2_c2;

    printf("\nEscolha o primeiro atributo para comparar:\n");
    printf("1 - Mostrar dados das cartas\n");
    printf("2 - Populacao\n");
    printf("3 - Area\n");
    printf("4 - PIB\n");
    printf("5 - Pontos Turisticos\n");
    printf("6 - Densidade Demografica\n");
    printf("Digite a opcao: ");
    scanf("%d", &opcao1);

    if (opcao1 == 1) {
        printf("\n--- Carta 1 ---\n");
        printf("Nome do País: %s\n", nomePais1);
        printf("Populacao: %d\n", populacao1);
        printf("Area: %.2f km^2\n", area1);
        printf("PIB: %.2f bilhões\n", pib1);
        printf("Pontos Turísticos: %d\n", pontosTuristicos1);
        printf("Densidade Demográfica: %.2f hab/km^2\n", densidade1);

        printf("\n--- Carta 2 ---\n");
        printf("Nome do País: %s\n", nomePais2);
        printf("Populacao: %d\n", populacao2);
        printf("Area: %.2f km^2\n", area2);
        printf("PIB: %.2f bilhões\n", pib2);
        printf("Pontos Turísticos: %d\n", pontosTuristicos2);
        printf("Densidade Demográfica: %.2f hab/km^2\n", densidade2);
        return 0;
    }

    if (opcao1 < 2 || opcao1 > 6) {
        printf("\nOpcao invalida!\n");
        return 0;
    }

    printf("\nEscolha o segundo atributo para comparar:\n");
    for (int i = 2; i <= 6; i++) {
        if (i != opcao1) {
            switch (i) {
                case 2: printf("2 - Populacao\n"); break;
                case 3: printf("3 - Area\n"); break;
                case 4: printf("4 - PIB\n"); break;
                case 5: printf("5 - Pontos Turisticos\n"); break;
                case 6: printf("6 - Densidade Demografica\n"); break;
            }
        }
    }
    printf("Digite a segunda opcao: ");
    scanf("%d", &opcao2);

    if (opcao2 == opcao1 || opcao2 < 2 || opcao2 > 6) {
        printf("\nOpcao invalida ou repetida!\n");
        return 0;
    }

    // Função para pegar o valor de um atributo
    float getValor(int opcao, int carta) {
        switch (opcao) {
            case 2: return carta == 1 ? populacao1 : populacao2;
            case 3: return carta == 1 ? area1 : area2;
            case 4: return carta == 1 ? pib1 : pib2;
            case 5: return carta == 1 ? pontosTuristicos1 : pontosTuristicos2;
            case 6: return carta == 1 ? densidade1 : densidade2;
            default: return 0;
        }
    }

    valor1_c1 = getValor(opcao1, 1);
    valor1_c2 = getValor(opcao1, 2);
    valor2_c1 = getValor(opcao2, 1);
    valor2_c2 = getValor(opcao2, 2);

    printf("\nComparando %s e %s\n", nomePais1, nomePais2);

    printf("\nAtributo 1:\n");
    printf("%s: %.2f\n", nomePais1, valor1_c1);
    printf("%s: %.2f\n", nomePais2, valor1_c2);
    int ponto1 = (opcao1 == 6) ? (valor1_c1 < valor1_c2) : (valor1_c1 > valor1_c2);
    printf("Vencedor do atributo 1: %s\n", ponto1 ? nomePais1 : (valor1_c1 == valor1_c2 ? "Empate" : nomePais2));

    printf("\nAtributo 2:\n");
    printf("%s: %.2f\n", nomePais1, valor2_c1);
    printf("%s: %.2f\n", nomePais2, valor2_c2);
    int ponto2 = (opcao2 == 6) ? (valor2_c1 < valor2_c2) : (valor2_c1 > valor2_c2);
    printf("Vencedor do atributo 2: %s\n", ponto2 ? nomePais1 : (valor2_c1 == valor2_c2 ? "Empate" : nomePais2));

    float soma1 = valor1_c1 + valor2_c1;
    float soma2 = valor1_c2 + valor2_c2;

    printf("\nSoma dos Atributos:\n");
    printf("%s: %.2f\n", nomePais1, soma1);
    printf("%s: %.2f\n", nomePais2, soma2);

    printf("\nResultado Final: %s ganhou!\n", (soma1 > soma2) ? nomePais1 : (soma2 > soma1) ? nomePais2 : "Empate!");

    return 0;
}
