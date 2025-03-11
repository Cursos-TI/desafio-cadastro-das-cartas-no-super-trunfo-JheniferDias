#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.


int main() {
    
    printf("Desafio Cartas Super Trunfo");

    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.

    char codigo[4];
    char cidade[50];
    int populacao;
    float area;
    float pib;
    int pontos_turisticos;
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    printf("Cadastro da primeira carta:\n");
    printf("Código (ex: A01): ");
    scanf("%s", carta1.codigo);
    printf("Nome da cidade: ");
    scanf("%s", carta1.nome);
    printf("População: ");
    scanf("%d", &carta1.populacao);
    printf("Área (km²): ");
    scanf("%f", &carta1.area);
    printf("PIB (bilhões): ");
    scanf("%f", &carta1.pib);
    printf("Número de pontos turísticos: ");
    scanf("%d", &carta1.pontos_turisticos);
    printf("\n");


   // Cadastro da segunda carta
   printf("Cadastro da segunda carta:\n");
   printf("Código (ex: B02): ");
   scanf("%s", carta2.codigo);
   printf("Nome da cidade: ");
   scanf("%s", carta2.nome);
   printf("População: ");
   scanf("%d", &carta2.populacao);
   printf("Área (km²): ");
   scanf("%f", &carta2.area);
   printf("PIB (bilhões): ");
   scanf("%f", &carta2.pib);
   printf("Número de pontos turísticos: ");
   scanf("%d", &carta2.pontos_turisticos);
   printf("\n");

   // Exibição dos dados cadastrados
   printf("Dados cadastrados:\n\n");
   printf("Carta 1 - %s (%s)\n", carta1.codigo, carta1.nome);
   printf("População: %d\n", carta1.populacao);
   printf("Área: %.2f km²\n", carta1.area);
   printf("PIB: %.2f bilhões\n", carta1.pib);
   printf("Pontos turísticos: %d\n", carta1.pontos_turisticos);
   printf("\n");
   
   printf("Carta 2 - %s (%s)\n", carta2.codigo, carta2.nome);
   printf("População: %d\n", carta2.populacao);
   printf("Área: %.2f km²\n", carta2.area);
   printf("PIB: %.2f bilhões\n", carta2.pib);
   printf("Pontos turísticos: %d\n", carta2.pontos_turisticos);

    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
