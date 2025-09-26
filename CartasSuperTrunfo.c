#include <stdio.h>

int main() {
    // Variáveis da Carta 1
    char estado1;                   // Letra representando o estado (de A a H)
    char codigo1[4];                // Código da carta (ex: A01)
    char cidade1[50];               // Nome da cidade
    unsigned long int populacao1;   // População
    float area1;                    // Área da cidade em km²
    float pib1;                     // PIB da cidade
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

    // Variáveis para armazenar resultados das comparações
    char *resultadoPopulacao;
    char *resultadoArea;
    char *resultadoPIB;
    char *resultadoPontosTuristicos;
    char *resultadoDensidade;
    char *resultadoPIBperCapita;
    char *resultadoSuperPoder;

    // Entrada de dados da Carta 1
    printf("Digite o Estado (A-H) da carta 1: ");
    scanf(" %c", &estado1);

    printf("Digite o Código da carta 1 (ex: A01): ");
    scanf("%s", codigo1);

    printf("Digite o Nome da Cidade da carta 1: ");
    scanf(" %[^\n]", cidade1);

    printf("Digite a População da cidade da carta 1: ");
    scanf("%lu", &populacao1);

    printf("Digite a Área (km²) da cidade da carta 1: ");
    scanf("%f", &area1);

    printf("Digite o PIB da cidade da carta 1: ");
    scanf("%f", &pib1);

    printf("Digite o Número de Pontos Turísticos da cidade da carta 1: ");
    scanf("%d", &pontosTuristicos1);

    // Cálculos da Carta 1
    densidade1 = populacao1 / area1;
    pibPerCapita1 = (pib1 * 1000000000.0) / populacao1;
    superPoder1 = (float)populacao1 + area1 + pib1 + pontosTuristicos1 + pibPerCapita1 + (1.0 / densidade1);

    printf("\n");

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

    // Determinar resultados usando operador ternário
    resultadoPopulacao = populacao1 > populacao2 ? "Carta 1 venceu" :
                         populacao2 > populacao1 ? "Carta 2 venceu" : "Empate";

    resultadoArea = area1 > area2 ? "Carta 1 venceu" :
                    area2 > area1 ? "Carta 2 venceu" : "Empate";

    resultadoPIB = pib1 > pib2 ? "Carta 1 venceu" :
                   pib2 > pib1 ? "Carta 2 venceu" : "Empate";

    resultadoPontosTuristicos = pontosTuristicos1 > pontosTuristicos2 ? "Carta 1 venceu" :
                                pontosTuristicos2 > pontosTuristicos1 ? "Carta 2 venceu" : "Empate";

    resultadoDensidade = densidade1 < densidade2 ? "Carta 1 venceu" : 
                         densidade2 < densidade1 ? "Carta 2 venceu" : "Empate";

    resultadoPIBperCapita = pibPerCapita1 > pibPerCapita2 ? "Carta 1 venceu" :
                            pibPerCapita2 > pibPerCapita1 ? "Carta 2 venceu" : "Empate";

    resultadoSuperPoder = superPoder1 > superPoder2 ? "Carta 1 venceu" :
                          superPoder2 > superPoder1 ? "Carta 2 venceu" : "Empate";

    // Exibição dos resultados das comparações
    printf("Comparação de Cartas:\n");
    printf("População: %s\n", resultadoPopulacao);
    printf("Área: %s\n", resultadoArea);
    printf("PIB: %s\n", resultadoPIB);
    printf("Pontos Turísticos: %s\n", resultadoPontosTuristicos);
    printf("Densidade Populacional: %s\n", resultadoDensidade);
    printf("PIB per Capita: %s\n", resultadoPIBperCapita);
    printf("Super Poder: %s\n", resultadoSuperPoder);

    return 0;
}
