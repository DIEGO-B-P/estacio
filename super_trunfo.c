#include <stdio.h>

int main(void){
    char estado, codigoCarta[3], nomeCidade[25];
    int populacao, numPontosTuristico;
    float area, PIB;

    printf("Olá, seja bem-vindo ao jogo...\n");
    printf("Para iniciarmos, vamos cadastrar a 1ª carta!\n");
    printf("Insira a letra do Estado de 'A' - 'H':\n");
    scanf("%c", &estado);

    printf("Insira o código da carta Ex 'A01':\n");
    scanf("%s", &codigoCarta);

    printf("Insira o nome da cidade:\n");
    scanf("%s", &nomeCidade);

    printf("Insira o número de habitantes da cidade:\n");
    scanf("%d", &populacao);

    printf("Agora a área da cidade em quilometros quadrados :\n");
    scanf("%f", &area);
    
    printf("Insira o PIB:\n");
    scanf("%f", &PIB);

    printf("Por fim, a quantidade de pontos túristicos:\n");
    scanf("%d", &numPontosTuristico);

    printf("Carta 1.\n");
    printf("Estado: %c.\n", estado);
    printf("Código: %s.\n", codigoCarta);
    printf("Nome da cidade: %s.\n", nomeCidade);
    printf("População: %d habitantes.\n", populacao);
    printf("Área: %.2f.\n", area);
    printf("PIB: R$ %.2f.\n", PIB);
    printf("Números de pontos turísticos: %d.\n", numPontosTuristico);

    printf("==================================================!\n");

    estado = "";

    printf("Agora, vamos cadastrar a 2ª carta!\n");
    printf("Insira a letra do Estado de 'A' - 'H':\n");
    scanf("%c", &estado);

    printf("Insira o código da carta Ex 'A01':\n");
    scanf("%s", &codigoCarta);

    printf("Insira o nome da cidade:\n");
    scanf("%s", &nomeCidade);

    printf("Insira o número de habitantes da cidade:\n");
    scanf("%d", &populacao);

    printf("Agora a área da cidade em quilometros quadrados :\n");
    scanf("%f", &area);
    
    printf("Insira o PIB:\n");
    scanf("%f", &PIB);

    printf("Por fim, a quantidade de pontos túristicos:\n");
    scanf("%d", &numPontosTuristico);

    printf("Carta 2.\n");
    printf("Estado: %c.\n", estado);
    printf("Código: %s.\n", codigoCarta);
    printf("Nome da cidade: %s.\n", nomeCidade);
    printf("População: %d habitantes.\n", populacao);
    printf("Área: %.2f.\n", area);
    printf("PIB: R$ %.2f.\n", PIB);
    printf("Números de pontos turísticos: %d.\n", numPontosTuristico);

    printf("Cartas cadastrada com sucesso!!\n");    
}