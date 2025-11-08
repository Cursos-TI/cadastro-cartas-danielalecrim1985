#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
 
  // Área para definição das variáveis para armazenar as propriedades das cidades
    //carta 1
    char estado[10], cod_carta[5], nome_cidade[20];
    int populacao, pontos_turisticos;
    float area_km, pib, densidade, pib_capita;

    //carta 2
    char estado_2[10], cod_carta_2[5], nome_cidade_2[20];
    int populacao_2, pontos_turisticos_2;
    float area_km_2, pib_2, densidade2, pib_capita2;


   // Área para entrada de dados
   
    //dados carta1
    printf("\n--- DADOS DA CARTA 1 ---\n");
    
    printf("Digite o Estado \n");
    scanf("%s", estado);

    printf("Digite o código da carta: \n");
    scanf("%s", cod_carta);

    printf("Digite o nome da cidade: \n");
    scanf("%s", nome_cidade);

    printf("Digite quantidade da população: \n");
    scanf("%d", &populacao);

    printf("Digite a Área em km² \n");
    scanf("%f", &area_km);

    printf("Digite o PIB \n");
    scanf("%f", &pib);

    printf("Digite o número de pontos turísticos \n");
    scanf("%d", &pontos_turisticos);

    densidade = (float) populacao / area_km;
    pib_capita = (float) pib / populacao;

    //dados carta2 
    printf("\n\n--- DADOS DA CARTA 2 ---\n");
    
    printf("Digite o Estado \n");
    scanf("%s", estado_2);

    printf("Digite o código da carta: \n");
    scanf("%s", cod_carta_2);

    printf("Digite o nome da cidade: \n");
    scanf("%s", nome_cidade_2);

    printf("Digite quantidade da população: \n");
    scanf("%d", &populacao_2);

    printf("Digite a Área em km² \n");
    scanf("%f", &area_km_2);

    printf("Digite o PIB \n");
    scanf("%f", &pib_2);

    printf("Digite o número de pontos turísticos \n");
    scanf("%d", &pontos_turisticos_2);

    densidade2 = (float) populacao_2 / area_km_2;
    pib_capita2 = (float) pib_2 / populacao_2;

    // Área para exibição dos dados da cidade
   
    printf("\n\n==========================================");
    printf("\n            CARTAS SUPERTRUNFO");
    printf("\n==========================================\n");

    // Impressão da CARTA 1
    printf("\n--- CARTA 1: %s / %s ---\n", nome_cidade, estado);
    printf("Código: %s\n", cod_carta);
    printf("População: %d habitantes\n", populacao);
    printf("Área: %.2f km²\n", area_km);
    printf("PIB: %.2f\n", pib);
    printf("Pontos Turísticos: %d\n", pontos_turisticos);
    printf("Densidade populacional: %.2f\n", densidade);
    printf("Pib per Capita: %.2f\n", pib_capita);

    // Impressão  da CARTA 2
    printf("\n--- CARTA 2: %s / %s ---\n", nome_cidade_2, estado_2);
    printf("Código: %s\n", cod_carta_2);
    printf("População: %d habitantes\n", populacao_2);
    printf("Área: %.2f km²\n", area_km_2);
    printf("PIB: %.2f\n", pib_2);
    printf("Pontos Turísticos: %d\n", pontos_turisticos_2);
    printf("Densidade populacional: %.2f\n", densidade2);
    printf("Pib per Capita: %.2f\n", pib_capita2);
    printf("\n==========================================\n");
return 0;
} 
