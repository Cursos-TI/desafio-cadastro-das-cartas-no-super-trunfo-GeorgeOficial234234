#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    char codLetra;
    int codNum;

    char nome[20];
    int populacao;
    float area;
    float pib;
    int pntsTurist;
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    printf("Insira o código com Letra e Número:\n");
    scanf("%c %d", &codLetra, &codNum);

    printf("\nDigite o Nome da cidade:\n");
    scanf("%s", &nome);
    
    printf("\nDigite o número de Habitantes:\n");
    scanf("%d", &populacao);

    printf("\nInsira o valor da Área:\n");
    scanf("%f", &area);

    printf("\nInsira o PIB da cidade:\n");
    scanf("%f", &pib);

    printf("\nDigite a quantidade de Pontos Turísticos\n");
    scanf("%d", &pntsTurist);

    //Calculando a Densidade Demográfica e o PIB per capita
    float densidadeDemografica = (float) populacao / area;
    float pibPerCapita = (float) pib / populacao;
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
    printf("\nCódigo da cidade: %c0%d \nNome da cidade: %s \nNúmero de habitantes: %d \n", codLetra, codNum, nome, populacao);
    printf("Área da cidade: %f \nPIB da cidade : %f \nPontos Turísticos: %d \n", area, pib, pntsTurist);
    printf("Densidade Demográfica: %f \nPib per capita %f", densidadeDemografica, pibPerCapita);

    return 0;
}
