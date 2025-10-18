#include <stdio.h>

// Desafio Super Trunfo

int main() {

  // === Variáveis CARTA 1 === //

  char estado1[3];
  char codigocarta1[30];
  char nomecidade1[30];
  unsigned long int populacao1;
  float areakm2_1;
  float pib1;
  int pontosturisticos1;
  float densidadepopulacional1;
  float pibpercapta1;
  float superpoder1;

    // === Variáveis Carta 2 === //

  char estado2[3];
  char codigocarta2[30];
  char nomecidade2[30];
  unsigned long int populacao2;
  float areakm2_2;
  float pib2;
  int pontosturisticos2;
  float densidadepopulacional2;
  float pibpercapta2;
  float superpoder2;

  // CARTA 1

  printf(" ***DADOS CARTA 1 *** \n");

  printf("Digite o Estado (sigla): \n");
  scanf(" %s", estado1);

  printf("Digite o código da carta: \n");
  scanf(" %s", codigocarta1);

  printf("Digite o nome da cidade: \n");
  scanf(" %s", nomecidade1);

  printf("Digite a população: \n");
  scanf(" %lu", &populacao1);

  printf("Digite a área km2: \n");
  scanf(" %f", &areakm2_1);

  printf("Digite o PIB: \n");
  scanf(" %f", &pib1);

  printf("Digite o número de pontos turísticos: \n");
  scanf(" %d", &pontosturisticos1);

  printf("Digite a densidade populacional: \n");
  scanf(" %f", &densidadepopulacional1);

  printf("Digite o PIB per capita: \n");
  scanf(" %f", &pibpercapta1);

  printf("Digite o Super Poder: \n");
  scanf(" %f", &superpoder1);

  // --- Cálculos Automáticos ---

  densidadepopulacional1 = populacao1 / areakm2_1;
  pibpercapta1 = pib1 / populacao1;

  // CARTA 2

  printf(" ***DADOS CARTA 2 *** \n");

  printf("Digite o Estado (sigla): \n");
  scanf(" %s", estado2);

  printf("Digite o código da carta: \n");
  scanf(" %s", codigocarta2);

  printf("Digite o nome da cidade: \n");
  scanf(" %s", nomecidade2);

  printf("Digite a população: \n");
  scanf(" %lu", &populacao2);

  printf("Digite a área km2: \n");
  scanf(" %f", &areakm2_2);

  printf("Digite o PIB: \n");
  scanf(" %f", &pib2);

  printf("Digite o número de pontos turísticos: \n");
  scanf(" %d", &pontosturisticos2);

  printf("Digite a densidade populacional: \n");
  scanf(" %f", &densidadepopulacional2);

  printf("Digite o PIB per capita: \n");
  scanf(" %f", &pibpercapta2);

  printf("Digite o Super Poder: \n");
  scanf(" %f", &superpoder2);

  // --- Cálculos Automáticos ---

  densidadepopulacional2 = populacao2 / areakm2_2;
  pibpercapta2 = pib2 / populacao2;
 
  // Área para exibição dos dados da cidade

  printf(" ***DADOS DAS CIDADES*** \n");

  printf("CARTA 1: %s - %s \n", codigocarta1, nomecidade1);
  printf("Estado: %s \n", estado1);
  printf("População: %lu \n", populacao1);
  printf("Área km2: %.2f \n", areakm2_1);
  printf("PIB: %.2f \n", pib1);
  printf("Pontos Turísticos: %d \n", pontosturisticos1);
  printf("Densidade Populacional: %.2f \n", densidadepopulacional1);
  printf("PIB per capita: %.2f \n", pibpercapta1);
  printf("Super Poder: %.2f \n", superpoder1);
  printf("CARTA 2: %s - %s \n", codigocarta2, nomecidade2);
  printf("Estado: %s \n", estado2);
  printf("População: %lu \n", populacao2);
  printf("Área km2: %.2f \n", areakm2_2);
  printf("PIB: %.2f \n", pib2);
  printf("Pontos Turísticos: %d \n", pontosturisticos2);
  printf("Densidade Populacional: %.2f \n", densidadepopulacional2);
  printf("PIB per capita: %.2f \n", pibpercapta2);
  printf("Super Poder: %.2f \n", superpoder2);
  
  return 0;
}
