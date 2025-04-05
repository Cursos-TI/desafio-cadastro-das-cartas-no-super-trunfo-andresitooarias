#include <stdio.h>

int main()
{

    // CARTA 1.
    char codigoCarta1[10], nomeCidade1[30];
    char estado1;
    int populacao1;
    int numeroPontosTuristicos1;
    float area1;
    float pib1;

    // CARTA 2.
    char codigoCarta2[10], nomeCidade2[30];
    char estado2;
    int populacao2;
    int numeroPontosTuristicos2;
    float area2;
    float pib2;

    // Manual do jogo.
    printf("***Seja bem vindo ao Super Trunfo!***\n\n");
    printf("Para iniciarmos nosso jogo será necessário que você insira os dados abaixo que serão utilizados para suas duas cartas.\n\n");

    // Leitura dos dados da primeira carta.
    printf("Iremos começar com as informações da sua primeira carta, ok? Vamos nessa!\n");
    printf("Para que possamos começar por favor insira uma letra de A - H para seu Estado: ");
    scanf(" %c", &estado1);

    printf("Em seguida preciso que você insira a letra do Estado seguido de um número de 01 a 04, (ex: A01, B03). Este será o código da sua carta: ");
    scanf("%s", codigoCarta1);

    printf("Insira o nome da sua Cidade: ");
    scanf("%s", nomeCidade1);

    printf("Insira o número de habitantes da sua cidade: ");
    scanf("%d", &populacao1);

    printf("Insira a área da sua cidade em (km²): ");
    scanf("%f", &area1);

    printf("Insira o pib da sua cidade: ");
    scanf("%f", &pib1);

    printf("Insira a quantidade de pontos turísticos que a sua Cidade possui: ");
    scanf("%d", &numeroPontosTuristicos1);

    printf("\n\n");

    // Exibição de dados da primeira carta.
    printf("Muito bem! Você acabou de inserir os dados da sua primeira carta, eles serão mostrados abaixo:");

    printf("A letra inserida foi: %c\n", estado1);
    printf("O código da carta inserido foi: %s\n", codigoCarta1);
    printf("O nome da cidade é: %s\n", nomeCidade1);
    printf("O número de habitantes da sua cidade é: %d\n", populacao1);
    printf("A área da sua cidade é: %.2f km² \n", area1);
    printf("O PIB digitado foi: %.2f bilhões de reais\n", pib1);
    printf("O número de pontos turísticos da sua cidade é: %d\n", numeroPontosTuristicos1);

    printf("\n");

    // Leituda de dados da segunda carta;
    printf("Agora digite os dados para a sua segunda carta.\n\n");
    printf("Insira o estado da carta 2: ");
    scanf(" %c", &estado2);

    printf("Insira o código da segunda carta: ");
    scanf("%s", codigoCarta2);

    printf("Insira o nome da sua Cidade: ");
    scanf("%s", nomeCidade2);

    printf("Insira o número de habitantes da sua cidade: ");
    scanf("%d", &populacao2);

    printf("Insira a área da sua cidade em (km²): ");
    scanf("%f", &area2);

    printf("Insira o pib da sua cidade: ");
    scanf("%f", &pib2);

    printf("Insira a quantidade de pontos turísticos que a sua Cidade possui: ");
    scanf("%d", &numeroPontosTuristicos2);

    // Exibição de dados da segunda carta.
    printf("Muito bem! Você acabou de inserir os dados da sua segunda carta, eles serão mostrados abaixo:");

    printf("A letra inserida foi: %c\n", estado2);
    printf("O código da carta inserido foi: %s\n", codigoCarta2);
    printf("O nome da cidade é: %s\n", nomeCidade2);
    printf("O número de habitantes da sua cidade é: %d\n", populacao2);
    printf("A área da sua cidade é: %.2f km²\n", area2);
    printf("O PIB digitado foi: %.2f bilhões de reais\n", pib2);
    printf("O número de pontos turísticos da sua cidade é: %d\n", numeroPontosTuristicos2);

    return 0;
}
