#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Definição das variáveis para armazenar as propriedades das cidades
    // Você pode utilizar o código do primeiro desafio

    // ===== Carta 1 =====
    // char estado1 = 'A';
    //char codigo1[4] = "A01";
    //char cidade1[50] = "São Paulo";
    //int populacao1 = 12325000;
    //float area1 = 1521.11;
    //float pib1 = 699.28;
    //int pontosTuristicos1 = 50;

    // ===== Carta 2 =====
    //char estado2 = 'B';
    //char codigo2[4] = "B02";
    //char cidade2[50] = "Rio de Janeiro";
    //int populacao2 = 6748000;
    //float area2 = 1200.25;
    //float pib2 = 300.50;
    //int pontosTuristicos2 = 30;

    // Cadastro das Cartas:
     // ===== Carta 1 =====
    char estado1 
    char codigo1[4];
    char cidade1[50];
    int populacao1; 
    float area1;
    float pib1;
    int pontosTuristicos1;

    // ===== Carta 2 =====
    char estado2;
    char codigo2[4];
    char cidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;

    // Implemente a lógica para solicitar ao usuário que insira os dados das cidades
    // utilizando a função scanf para capturar as entradas.
    // utilize o código do primeiro desafio
    printf("Digite o estado da primeira carta");
    scanf("%s \n", &estado1);
   
    printf("Digite o estado da segunda carta");
    scanf("%s \n", &estado2);

    printf("Digite o codigo da primeira carta");
    scanf("%s \n", &codigo1);

    printf("Digite o codigo da segunda carta");
    scanf("%s \n", &codigo2)

    printf("Digite a cidade da primeira carta");
    scanf("%s \n", &cidade1);

     printf("Digite a cidade da segunda cidade");
    scanf("%s \n", &cidade2);

     printf("Digite a população da primeira cidade");
    scanf("%d \n", &populacao1);

    printf("Digite a população da segunda cidade");
    scanf("%d \n", &populacao2);

    printf("Digite a área da primeira cidade");
    scanf("%f \n", &area1);

    printf("Digite a área da segunda cidade");
    scanf("%f \n", &area2);

     printf("Digite o PIB da primeira cidade");
    scanf("%f \n", &pib1);

    printf("Digite o PIB da segunda cidade");
    scanf("%f \n", &pib2);

    printf("Digite os pontos turísticos da primeira cidade");
    scanf("%d \n", &pontosTuristicos1);

    printf("Digite os pontos turísticos da segunda cidade");
    scanf("%d \n", &pontosTuristicos2);

    // Exemplo:
    // printf("Digite o código da cidade: ");
    // scanf("%s", codigo);
    // 
    // (Repita para cada propriedade)

    // Comparação de Cartas:
    // Desenvolva a lógica de comparação entre duas cartas.
    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.

    // Exemplo:
    // if (populacaoA > populacaoB) {
    //     printf("Cidade 1 tem maior população.\n");
    // } else {
    //     printf("Cidade 2 tem maior população.\n");
    // }
     if (populacao1 > populacao2) {
        printf("Carta 1 tem maior população.\n");
     } else {
         printf("Carta 2 tem maior população.\n");
     }

     if (area1 > area2) {
        printf("Carta 1 tem a maior área. \n");
     } else{
         printf("Carta 2 tem a maior área. \n");
     }

     if (pib1 > pib2) {
        printf("Carta 1 tem o maior PIB.\n");
     } else{}
         printf("Carta 2 tem o maior PIB.\n");
     }
 
     

    // Exibição dos Resultados:
    // Após realizar as comparações, exiba os resultados para o usuário.
    // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.

    // Exemplo:
    // printf("A cidade vencedora é: %s\n", cidadeVencedora);

    return 0;
}
