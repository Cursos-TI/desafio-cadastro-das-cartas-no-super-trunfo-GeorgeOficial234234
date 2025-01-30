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
    double pib;
    int pntsTurist;
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    printf("Insira o código com Letra e Número:\n");
    scanf("%c %d", &codLetra, &codNum);

    printf("Digite o Nome da cidade:\n");
    scanf("%c", &nome);
    
    printf("Digite o número de Habitantes:\n");
    scanf("%d", &populacao);

    printf("Insira o valor da Área:\n");
    scanf("%f", &area);

    printf("Insira o PIB da cidade:\n");
    scanf("%e", &pib);

    printf("Digite a quantidade de Pontos Turísticos");
    scanf("%d", &pntsTurist);
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
    printf("Código da cidade: %c0%d \nNome da cidade: %c \nNúmero de habitantes: %d \n", codLetra, codNum, nome, populacao);
    printf("Área da cidade: %f \nPIB da cidade : %e \nPontos Turísticos: %d \n", area, pib, pntsTurist);

    return 0;
}
