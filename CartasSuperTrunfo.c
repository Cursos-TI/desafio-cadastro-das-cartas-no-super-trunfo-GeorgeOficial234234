#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    char codLetra1, codLetra2;
    int codNum1, codNum2;

    char nome1[20], nome2[20];
    unsigned long int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pntsTurist1, pntsTurist2;
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    printf("Insira o código com Letra e Número da Primeira Carta:\n");
    scanf("%c %d", &codLetra1, &codNum1);

    printf("\nDigite o Nome da cidade da Primeira Carta:\n");
    scanf("%s", nome1);
    
    printf("\nDigite o número de Habitantes da Primeira Carta:\n");
    scanf("%lu", &populacao1);

    printf("\nInsira o valor da Área da Primeira Carta:\n");
    scanf("%f", &area1);

    printf("\nInsira o PIB da cidade da Primeira Carta:\n");
    scanf("%f", &pib1);

    printf("\nDigite a quantidade de Pontos Turísticos da Primeira Carta:\n");
    scanf("%d", &pntsTurist1);

    //Calculando a Densidade Demográfica e o PIB per capita
    float densidadeDemografica1 = (float) populacao1 / area1;
    float pibPerCapita1 = (float) pib1 / populacao1;
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
    /*
    printf("\nCódigo da cidade: %c0%d \nNome da cidade: %s \nNúmero de habitantes: %lu \n", codLetra, codNum, nome, populacao);
    printf("Área da cidade: %.2f \nPIB da cidade : %.2f \nPontos Turísticos: %d \n", area, pib, pntsTurist);
    printf("Densidade Demográfica: %.2f \nPib per capita %.2f", densidadeDemografica, pibPerCapita);
    */


    //SEGUNDA CARTA

    
    printf("\n\nInsira o código com Letra e Número da Segunda Carta:\n");
    scanf(" %c %d", &codLetra2, &codNum2);

    printf("\nDigite o Nome da cidade da Segunda Carta:\n");
    scanf("%s", nome2);
    
    printf("\nDigite o número de Habitantes da Segunda Carta:\n");
    scanf("%lu", &populacao2);

    printf("\nInsira o valor da Área da Segunda Carta:\n");
    scanf("%f", &area2);

    printf("\nInsira o PIB da cidade da Segunda Carta:\n");
    scanf("%f", &pib2);

    printf("\nDigite a quantidade de Pontos Turísticos da Segunda Carta:\n");
    scanf("%d", &pntsTurist2);

    float densidadeDemografica2 = (float) populacao2 / area2;
    float pibPerCapita2 = (float) pib2 / populacao2;
    
    /*
    printf("\nCódigo da cidade: %c0%d \nNome da cidade: %s \nNúmero de habitantes: %lu \n", codLetra, codNum, nome, populacao);
    printf("Área da cidade: %.2f \nPIB da cidade : %.2f \nPontos Turísticos: %d \n", area, pib, pntsTurist);
    printf("Densidade Demográfica: %.2f \nPib per capita %.2f", densidadeDemografica, pibPerCapita);
    */

float superPoder1 = (float) populacao1 + area1 + pib1 + pntsTurist1 + pibPerCapita1 + (1/densidadeDemografica1);
float superPoder2 = (float) populacao2 + area2 + pib2 + pntsTurist2 + pibPerCapita2 + (1/densidadeDemografica2);
float sP = superPoder1 > superPoder2;

float pT = populacao1 > populacao2;
float aT = area1 > area2;
float piT = pib1 > pib2;
float tT = pntsTurist1 > pntsTurist2;
float pibT = pibPerCapita1 > pibPerCapita2;
float dT = (1/densidadeDemografica1) < (1/densidadeDemografica2);

printf("\nPopulação: Carta %d venceu (%.f)\n", (pT) ? 1 : 2, (pT));
printf("Área: Carta %d venceu (%.f)\n", (aT) ? 1 : 2, (aT));
printf("PIB: Carta %d venceu (%.f)\n", (piT) ? 1 : 2, (piT));
printf("Pontos Turísticos: Carta %d venceu (%.f)\n", (tT) ? 1 : 2, (tT));
printf("Densidade Populacional: Carta %d venceu (%.f)\n", (dT) ? 1 : 2, (dT));
printf("PIB per Capita: Carta %d venceu (%.f)\n", (pibT) ? 1 : 2, (pibT));
printf("Super Poder: Carta %d venceu (%.f)\n", (sP) ? 1 : 2, (sP));

    return 0;
}
