
#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Nível Novato

int main() {

    //Declaração das Variáveis
    //Carta 1
    char estado1;
    char codigo_carta1[4];
    char cidade1[30];
    unsigned long int populacao1;
    float area1;
    float pib1;
    int pontos_turisticos1;
    
    //Carta 2
    char estado2;
    char codigo_carta2[4];
    char cidade2[30];
    unsigned long int populacao2;
    float area2;
    float pib2;
    int pontos_turisticos2;

    
    // Cadastro das Cartas:
    //Entrada de dados

    printf("------ Super Trunfo ------\n");
    printf("Seja bem-vindo(a) ao jogo Super Trunfo, para jogar insira as informações requeridas sobre as cartas.\n\n");
    
    printf("--- Carta N°1 ---\n");
    printf("Digite a letra que representa o Estado da carta : \n");
    scanf(" %c", &estado1);
    printf("Digite o código da carta (ex: A01, B02) : \n");
    scanf(" %s", &codigo_carta1);
    printf("Digite o nome da cidade (Obs: Nomes compostos não são suportados): \n");
    scanf(" %s", &cidade1);
    printf("Digite o número de habitantes : \n");
    scanf(" %lu", &populacao1);
    printf("Digite a área em km² da cidade : \n");
    scanf(" %f", &area1);
    printf("Digite o PIB em bilhões da carta : \n");
    scanf(" %f", &pib1);
    printf("Digite o número de pontos turísticos : \n");
    scanf(" %d", &pontos_turisticos1);
    
    printf("\n\n");
    
    printf("--- Carta N°2 ---\n");
    printf("Digite a letra que representa o Estado da carta : \n");
    scanf(" %c", &estado2);
    printf("Digite o código da carta (ex: A01, B02) : \n");
    scanf(" %s", &codigo_carta2);
    printf("Digite o nome da cidade (Obs: Nomes compostos não são suportados) : \n");
    scanf(" %s", &cidade2);
    printf("Digite o número de habitantes : \n");
    scanf(" %lu", &populacao2);
    printf("Digite a área em km² da cidade : \n");
    scanf(" %f", &area2);
    printf("Digite o PIB em bilhões da carta : \n");
    scanf(" %f", &pib2);
    printf("Digite o número de pontos turísticos : \n");
    scanf(" %d", &pontos_turisticos2);
    
    printf("\n\n");


    //Cálculo da variáveis que derivam de informações recebidas pelo usuário
    //carta 1
    float densidade_populacional1 = (float) populacao1 / area1;
    float per_capita1 = (float) (pib1 * 1000000000) / populacao1;

    //carta2
    float densidade_populacional2 = (float) populacao2 / area2;
    float per_capita2 = (float) (pib2 * 1000000000) / populacao2;


    //Todos os dados das cartas fornecidades pelo usuário
    printf("Dados da Carta N°1\n");
    printf("Estado : %c\n", estado1);
    printf("Código : %s\n", codigo_carta1);
    printf("Nome da Cidade : %s\n", cidade1);
    printf("População: %lu\n", populacao1);
    printf("Área : %.2f km²\n", area1);
    printf("PIB : %.2f bilhões de reais \n", pib1);
    printf("Número de Pontos Turísticos : %d \n", pontos_turisticos1);
    printf("Densidade Populacional : %.2f hab/km² \n", densidade_populacional1);
    printf("Per Capita : %.2f reais", per_capita1);

    printf("\n\n");

    printf("Dados da Carta N°2\n");
    printf("Estado : %c\n", estado2);
    printf("Código : %s\n", codigo_carta2);
    printf("Nome da Cidade : %s\n", cidade2);
    printf("População: %lu\n", populacao2);
    printf("Área : %.2f km²\n", area2);
    printf("PIB : %.2f bilhões de reais \n", pib2);
    printf("Número de Pontos Turísticos : %d\n", pontos_turisticos2);
    printf("Densidade Populacional : %.2f hab/km²\n", densidade_populacional2);
    printf("Per Capita : %.2f reais\n\n\n", per_capita2);



    //Comparação das cartas
    printf("Comparação das cartas : \n\n");

    printf("Atributo : População\n");
    printf("Carta 1 - %s : %lu\n", cidade1, populacao1);
    printf("Carta 2 - %s : %lu\n", cidade2, populacao2);

    if (populacao1 > populacao2)
    {
        printf("Resultado : Carta 1 é a vencedora por possuir um número maior de habitantes.\n");
    } else {
         printf("Resultado : Carta 2 é a vencedora por possuir um número maior de habitantes.\n");
    }

    return 0;
}
