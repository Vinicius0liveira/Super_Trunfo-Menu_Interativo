#include <stdio.h>
#include <string.h>

int main() {

    // ==== Dados da primeira carta ====
    char estado[] = "A";
    char codigo_da_carta[] = "A01";
    char Nome_da_Cidade[] = "São Paulo";
    int Populacao = 12325000;
    float Area = 1521.0;
    float Pib = 699280000000.0;
    int Numero_de_pontos_Turisticos = 50;

    // ==== Dados da segunda carta ====
    char estado2[] = "B";
    char codigo_da_carta2[] = "B02";
    char Nome_da_Cidade2[] = "Rio de Janeiro";
    int Populacao2 = 6748000;
    float Area2 = 1200.25;
    float Pib2 = 300000000000.50;
    int Numero_de_pontos_Turisticos2 = 30;

    // ==== Cálculos ====
    float Densidade_Populacional = Populacao / Area;
    float Densidade_Populacional2 = Populacao2 / Area2;

    // ==== Menu interativo ====
    int opcao;

    printf("=== COMPARATIVO DE CARTAS ===\n");
    printf("Escolha o atributo para comparar:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Número de pontos turísticos\n");
    printf("5 - Densidade demográfica\n");
    printf("Escolha uma opção: ");
    scanf("%d", &opcao);

    printf("\n=== RESULTADO DA COMPARAÇÃO ===\n");

    // ==== Estrutura de decisão com switch e if-else aninhados ====
    switch (opcao) {

        case 1: // População
            printf("Comparação de cartas (Atributo: População)\n");
            printf("%s: %d habitantes\n", Nome_da_Cidade, Populacao);
            printf("%s: %d habitantes\n", Nome_da_Cidade2, Populacao2);

            if (Populacao > Populacao2) {
                printf("Resultado: %s venceu!\n", Nome_da_Cidade);
            } else if (Populacao < Populacao2) {
                printf("Resultado: %s venceu!\n", Nome_da_Cidade2);
            } else {
                printf("Empate!\n");
            }
            break;

        case 2: // Área
            printf("Comparação de cartas (Atributo: Área)\n");
            printf("%s: %.2f km²\n", Nome_da_Cidade, Area);
            printf("%s: %.2f km²\n", Nome_da_Cidade2, Area2);

            if (Area > Area2) {
                printf("Resultado: %s venceu!\n", Nome_da_Cidade);
            } else if (Area < Area2) {
                printf("Resultado: %s venceu!\n", Nome_da_Cidade2);
            } else {
                printf("Empate!\n");
            }
            break;

        case 3: // PIB
            printf("Comparação de cartas (Atributo: PIB)\n");
            printf("%s: R$ %.2f\n", Nome_da_Cidade, Pib);
            printf("%s: R$ %.2f\n", Nome_da_Cidade2, Pib2);

            if (Pib > Pib2) {
                printf("Resultado: %s venceu!\n", Nome_da_Cidade);
            } else if (Pib < Pib2) {
                printf("Resultado: %s venceu!\n", Nome_da_Cidade2);
            } else {
                printf("Empate!\n");
            }
            break;

        case 4: // Número de pontos turísticos
            printf("Comparação de cartas (Atributo: Pontos Turísticos)\n");
            printf("%s: %d pontos\n", Nome_da_Cidade, Numero_de_pontos_Turisticos);
            printf("%s: %d pontos\n", Nome_da_Cidade2, Numero_de_pontos_Turisticos2);

            if (Numero_de_pontos_Turisticos > Numero_de_pontos_Turisticos2) {
                printf("Resultado: %s venceu!\n", Nome_da_Cidade);
            } else if (Numero_de_pontos_Turisticos < Numero_de_pontos_Turisticos2) {
                printf("Resultado: %s venceu!\n", Nome_da_Cidade2);
            } else {
                printf("Empate!\n");
            }
            break;

        case 5: // Densidade demográfica (regra invertida)
            printf("Comparação de cartas (Atributo: Densidade Demográfica)\n");
            printf("%s: %.2f hab/km²\n", Nome_da_Cidade, Densidade_Populacional);
            printf("%s: %.2f hab/km²\n", Nome_da_Cidade2, Densidade_Populacional2);

            // Estrutura aninhada: regra especial
            if (Densidade_Populacional < Densidade_Populacional2) {
                printf("Resultado: %s venceu! (Menor densidade populacional)\n", Nome_da_Cidade);
            } else if (Densidade_Populacional > Densidade_Populacional2) {
                printf("Resultado: %s venceu! (Menor densidade populacional)\n", Nome_da_Cidade2);
            } else {
                printf("Empate!\n");
            }
            break;

        default:
            printf("Opção inválida! Escolha um número de 1 a 5.\n");
            break;
    }

    return 0;
}
