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

    int opcao;

    // Menu interativo
    printf("\nEscolha o atributo para comparar:\n");
    printf("1 - Nome do País\n");
    printf("2 - Populacao\n");
    printf("3 - Area\n");
    printf("4 - PIB\n");
    printf("5 - Pontos Turisticos\n");
    printf("6 - Densidade Demografica\n");
    printf("Digite a opcao: ");
    scanf("%d", &opcao);

    if (opcao >=1 && opcao <= 6){
        printf("\nComparando %s e %s...\n\n", "Carta 1", "Carta 2");}
    else {printf("\n");}

    switch (opcao) {
        case 1:
        // Exibe as informações completas das duas cartas
        printf("--- Carta 1 ---\n");
        printf("Nome do País: %s\n", nomePais1);
        printf("População: %d\n", populacao1);
        printf("Área: %.2f km²\n", area1);
        printf("PIB: %.2f bilhões\n", pib1);
        printf("Pontos Turísticos: %d\n", pontosTuristicos1);
        printf("Densidade Demográfica: %.2f hab/km²\n", densidade1);

        printf("\n--- Carta 2 ---\n");
        printf("Nome do País: %s\n", nomePais2);
        printf("População: %d\n", populacao2);
        printf("Área: %.2f km²\n", area2);
        printf("PIB: %.2f bilhões\n", pib2);
        printf("Pontos Turísticos: %d\n", pontosTuristicos2);
        printf("Densidade Demográfica: %.2f hab/km²\n", densidade2);
        break;


        case 2:
            // Compara a População
            printf("Atributo: Populacao\n");
            printf("%s: %d\n", nomePais1, populacao1);
            printf("%s: %d\n", nomePais2, populacao2);
            if (populacao1 > populacao2) {
                printf("Resultado: %s venceu!\n", nomePais1);
            } else if (populacao2 > populacao1) {
                printf("Resultado: %s venceu!\n", nomePais2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        case 3:
            // Compara a Área
            printf("Atributo: Area\n");
            printf("%s: %.2f km^2\n", nomePais1, area1);
            printf("%s: %.2f km^2\n", nomePais2, area2);
            if (area1 > area2) {
                printf("Resultado: %s venceu!\n", nomePais1);
            } else if (area2 > area1) {
                printf("Resultado: %s venceu!\n", nomePais2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        case 4:
            // Compara o PIB
            printf("Atributo: PIB\n");
            printf("%s: %.2f bilhões\n", nomePais1, pib1);
            printf("%s: %.2f bilhões\n", nomePais2, pib2);
            if (pib1 > pib2) {
                printf("Resultado: %s venceu!\n", nomePais1);
            } else if (pib2 > pib1) {
                printf("Resultado: %s venceu!\n", nomePais2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        case 5:
            // Compara os Pontos Turísticos
            printf("Atributo: Pontos Turisticos\n");
            printf("%s: %d\n", nomePais1, pontosTuristicos1);
            printf("%s: %d\n", nomePais2, pontosTuristicos2);
            if (pontosTuristicos1 > pontosTuristicos2) {
                printf("Resultado: %s venceu!\n", nomePais1);
            } else if (pontosTuristicos2 > pontosTuristicos1) {
                printf("Resultado: %s venceu!\n", nomePais2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        case 6:
            // Compara a Densidade Demográfica
            printf("Atributo: Densidade Demografica\n");
            printf("%s: %.2f hab/km^2\n", nomePais1, densidade1);
            printf("%s: %.2f hab/km^2\n", nomePais2, densidade2);
            if (densidade1 < densidade2) {
                printf("Resultado: %s venceu!\n", nomePais1);
            } else if (densidade2 < densidade1) {
                printf("Resultado: %s venceu!\n", nomePais2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        default:
            // Caso o usuário digine algo inválido
            printf("Opcao inválida!\n");
    }

    return 0;
}
