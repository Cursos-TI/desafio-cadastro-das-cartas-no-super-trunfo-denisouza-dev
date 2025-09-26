#include <stdio.h>

int main(){
    // Variáveis da Carta 1
    char estado1;                   // Letra representando o estado (de A a H)
    char codigo1[4];                // Código da carta (ex: A01)
    char cidade1[50];               // Nome da cidade
    unsigned long int populacao1;   // População agora é unsigned long int
    float area1;                    // Área da cidade em km²
    float pib1;                     // PIB da cidade em bilhões
    int pontosTuristicos1;          // Número de pontos turísticos
    float densidade1;               // Densidade populacional calculada
    float pibPerCapita1;            // PIB per capita calculado
    float superPoder1;              // Super Poder calculado

    // Variáveis da Carta 2
    char estado2;
    char codigo2[4];
    char cidade2[50];
    unsigned long int populacao2;   
    float area2;
    float pib2;
    int pontosTuristicos2;
    float densidade2;
    float pibPerCapita2;
    float superPoder2;

    // Entrada de dados da Carta 1
    printf("Digite o Estado (A-H) da carta 1: ");
    scanf(" %c", &estado1); // Lê um caractere (estado), espaço antes de %c ignora enter pendente

    printf("Digite o Código da carta 1 (ex: A01): ");
    scanf("%s", codigo1);  // Lê uma string (código da carta)

    printf("Digite o Nome da Cidade da carta 1: ");
    scanf(" %[^\n]", cidade1); // Lê até a quebra de linha (permite espaços no nome)

    printf("Digite a População da cidade da carta 1: ");
    scanf("%lu", &populacao1); // Lê unsigned long int (%lu)

    printf("Digite a Área (km²) da cidade da carta 1: ");
    scanf("%f", &area1); // Lê float

    printf("Digite o PIB da cidade da carta 1: ");
    scanf("%f", &pib1); // Lê float

    printf("Digite o Número de Pontos Turísticos da cidade da carta 1: ");
    scanf("%d", &pontosTuristicos1); // Lê int

    // Cálculos da Carta 1
    densidade1 = populacao1 / area1;  // Calcula habitantes por km²
    pibPerCapita1 = (pib1 * 1000000000.0) / populacao1; // Converte PIB de bilhões para reais e divide pela população
    superPoder1 = (float)populacao1 + area1 + pib1 + pontosTuristicos1 + pibPerCapita1 + (1.0 / densidade1);
    // Super Poder = soma de atributos numéricos + inverso da densidade (menor densidade aumenta poder)

    printf("\n"); // Linha em branco para organização

    // Entrada de dados da Carta 2
    printf("Digite o Estado (A-H) da carta 2: ");
    scanf(" %c", &estado2);

    printf("Digite o Código da carta 2 (ex: B02): ");
    scanf("%s", codigo2);

    printf("Digite o Nome da Cidade da carta 2: ");
    scanf(" %[^\n]", cidade2);

    printf("Digite a População da cidade da carta 2: ");
    scanf("%lu", &populacao2);

    printf("Digite a Área (km²) da cidade da carta 2: ");
    scanf("%f", &area2);

    printf("Digite o PIB da cidade da carta 2: ");
    scanf("%f", &pib2);

    printf("Digite o Número de Pontos Turísticos da cidade da carta 2: ");
    scanf("%d", &pontosTuristicos2);

    // Cálculos da Carta 2
    densidade2 = populacao2 / area2;
    pibPerCapita2 = (pib2 * 1000000000.0) / populacao2;
    superPoder2 = (float)populacao2 + area2 + pib2 + pontosTuristicos2 + pibPerCapita2 + (1.0 / densidade2);

    printf("\n");

    // Exibição dos dados da Carta 1
    printf("Carta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %lu\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita1);
    printf("Super Poder: %.2f\n\n", superPoder1);

    // Exibição dos dados da Carta 2
    printf("Carta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita2);
    printf("Super Poder: %.2f\n\n", superPoder2);

    // Comparação entre Cartas
    printf("Comparação de Cartas:\n");

    // Variáveis que armazenam o resultado da comparação
    int resultadoPopulacao = populacao1 > populacao2;
    int resultadoArea = area1 > area2;
    int resultadoPIB = pib1 > pib2;
    int resultadoPontos = pontosTuristicos1 > pontosTuristicos2;
    int resultadoDensidade = densidade1 < densidade2;
    int resultadoPIBPerCapita = pibPerCapita1 > pibPerCapita2;
    int resultadoSuperPoder = superPoder1 > superPoder2;

    // Impressão dos resultados usando as variáveis
    printf("População: Carta 1 venceu (%d)\n", resultadoPopulacao);
    printf("Área: Carta 1 venceu (%d)\n", resultadoArea);
    printf("PIB: Carta 1 venceu (%d)\n", resultadoPIB);
    printf("Pontos Turísticos: Carta 1 venceu (%d)\n", resultadoPontos);
    printf("Densidade Populacional: Carta 1 venceu (%d)\n", resultadoDensidade);
    printf("PIB per Capita: Carta 1 venceu (%d)\n", resultadoPIBPerCapita);
    printf("Super Poder: Carta 1 venceu (%d)\n", resultadoSuperPoder);

    return 0;
}
