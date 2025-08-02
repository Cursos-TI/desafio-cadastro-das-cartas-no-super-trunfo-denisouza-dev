#include <stdio.h>

int main(){
    // Variáveis da Carta 1
    char estado1;                   // Letra representando o estado (de A a H)
    char codigo1[4];                // Código da carta (ex: A01)
    char cidade1[50];               // Nome da cidade
    int populacao1;                 // Número de habitantes
    float area1;                    // Área da cidade em km²
    float pib1;                     // PIB da cidade em bilhões
    int pontosTuristicos1;          // Quantidade de pontos turísticos

    // Variáveis da Carta 2
    char estado2;
    char codigo2[4];
    char cidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;

    // Dados da Carta 1
    // Os dados são inseridos pelo usuário
    printf("Digite o Estado (A-H) da carta 1: ");
    scanf(" %c", &estado1);  // Espaço antes do %c para ignorar enter pendente

    printf("Digite o Código da carta 1 (ex: A01): ");
    scanf("%s", codigo1);

    printf("Digite o Nome da Cidade da carta 1: ");
    scanf(" %[^\n]", cidade1);  // Lê até a quebra de linha (permite espaços)

    printf("Digite a População da cidade da carta 1 (Sem ponto ou vírgula): ");
    scanf("%d", &populacao1);

    printf("Digite a Área (km²) da cidade da carta 1 (Sem ponto ou vírgula): ");
    scanf("%f", &area1);

    printf("Digite o PIB da cidade da carta 1 (Sem ponto ou vírgula): ");
    scanf("%f", &pib1);

    printf("Digite o Número de Pontos Turísticos da cidade da carta 1: ");
    scanf("%d", &pontosTuristicos1);

    printf("\n");

    // Dados da Carta 2
    printf("Digite o Estado (A-H) da carta 2: ");
    scanf(" %c", &estado2);

    printf("Digite o Código da carta 2 (ex: B02): ");
    scanf("%s", codigo2);

    printf("Digite o Nome da Cidade da carta 2: ");
    scanf(" %[^\n]", cidade2);

    printf("Digite a População da cidade da carta 2 (sem ponto ou vírgula): ");
    scanf("%d", &populacao2);

    printf("Digite a Área (km²) da cidade da carta 2 (sem ponto ou vírgula): ");
    scanf("%f", &area2);

    printf("Digite o PIB da cidade da carta 2 (em bilhões, sem ponto ou vírgula): ");
    scanf("%f", &pib2);

    printf("Digite o Número de Pontos Turísticos da cidade da carta 2: ");
    scanf("%d", &pontosTuristicos2);

    printf("\n");

    // Exibição dos dados da Carta 1
    printf("Carta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões\n", pib1);
    printf("Número de Pontos Turísticos: %d\n\n", pontosTuristicos1);

    // Exibição dos dados da Carta 2
    printf("Carta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);

    return 0;
}
