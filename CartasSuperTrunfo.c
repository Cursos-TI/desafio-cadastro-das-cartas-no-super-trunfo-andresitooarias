#include <stdio.h>

int main()
{

    // iniciando variáveis que serão utilizadas no nosso jogo.

    char codigoCarta[10], nomeCidade[30];
    char estado;
    int populacao, numeroPontosTuristicos;
    float area, pib;

    // Manual do jogo.

    printf("***Seja bem vindo ao Super Trunfo!***\n\n");
    printf("Para que comecemos nosso jogo será necessário que você insira os dados abaixo que serão utilizados para suas duas cartas. Sendo os seguintes dados; Estado, uma letra de A - H; Código de carta, o código deve conter a letra do estado seguida de um número de 01 a 04; Nome da Cidade, sendo o nome da sua cidade; População, sendo o número de habitantes da cidade; Área, a área da cidade em quilômetros quadrados; PIB, sendo o produto interno bruto da cidade e não menos importantes, o número de pontos turísticos, a quantidade de pontos turísticos da sua cidade.\n\n");

    // Comandos para seguir com a criação da primeira carta do player.

    printf("Iremos começar com as informações da sua primeira carta, ok? Vamos nessa!\n");

    printf("Para que possamos começar por favor insira uma letra de A - H para seu Estado:\n");
    scanf("%c", &estado);
   // printf("A letra inserida foi: %c\n\n", estado);

    printf("Em seguida preciso que você insira a letra do Estado seguido de um número de 01 a 04, (ex: A01, B03). Este será o código da sua carta:\n");
    scanf("%s", codigoCarta);
   // printf("O código da carta inserido foi: %s\n\n", codigoCarta);

    printf("Insira o nome da sua Cidade:\n");
    scanf("%s", nomeCidade);
  //  printf("O nome da cidade é: %s\n\n", nomeCidade);

    printf("Insira o número de habitantes da sua cidade:\n");
    scanf("%d", &populacao);
   // printf("O número de habitantes da sua cidade é: %d\n\n", populacao);

    printf("Insira a área da sua cidade em (km²):\n");
    scanf("%f", &area);
    //printf("O número de habitantes da sua cidade é: %.2fkm²\n\n", area);

    printf("Insira o pib da sua cidade:\n");
    scanf("%f", &pib);
    //printf("O PIB digitado foi: %.2f bilhões de reais\n\n", pib);

    printf("Insira a quantidade de pontos turísticos que a sua Cidade possui:\n");
    scanf("%d", &numeroPontosTuristicos);
    //printf("O número de pontos turísticos da sua cidade é: %d\n\n", numeroPontosTuristicos);

    printf("Muito bem! Você acabou de inserir os dados da sua primeira carta, eles estarão sendo mostrados abaixo:\n\n");

    printf("A letra inserida foi: %c\n", estado);
    printf("O código da carta inserido foi: %s\n", codigoCarta);
    printf("O nome da cidade é: %s\n", nomeCidade);
    printf("O número de habitantes da sua cidade é: %d\n", populacao);
    printf("O número de habitantes da sua cidade é: %.2fkm²\n", area);
    printf("O PIB digitado foi: %.2f bilhões de reais\n", pib);
    printf("O número de pontos turísticos da sua cidade é: %d\n", numeroPontosTuristicos);

    return 0;
}
