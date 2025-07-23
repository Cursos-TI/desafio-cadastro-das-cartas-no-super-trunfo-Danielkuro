#include <stdio.h>

int main() {
    char estado;
    char codigo_da_carta[20];
    char nome_da_cidade[50];
    int populacao;
    float area;
    float PIB;
    int numero_de_pontos_turisticos;

    printf("Carta 1:\n");

    printf("Estado: ");
    scanf(" %c", &estado);

    printf("Código da carta: ");
    scanf(" %s", codigo_da_carta);

    printf("Nome da cidade: ");
    scanf(" %s", nome_da_cidade);

    printf("População: ");
    scanf(" %d", &populacao);

    printf("Área: ");
    scanf(" %f", &area);

    printf("PIB: ");
    scanf(" %f", &PIB);

    printf("Número de pontos turísticos: ");
    scanf(" %d", &numero_de_pontos_turisticos);

    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado);
    printf("Código da carta: %s\n", codigo_da_carta);
    printf("Nome da cidade: %s\n", nome_da_cidade);
    printf("População: %d\n", populacao);
    printf("Área: %.3f km²\n", area);
    printf("PIB: %.2f bilhões de reais\n", PIB);
    printf("Número de pontos turísticos: %d\n", numero_de_pontos_turisticos);

    printf("\nCarta 2:\n");

    printf("Estado: ");
    scanf(" %c", &estado);

    printf("Código da carta: ");
    scanf(" %s", codigo_da_carta);

    printf("Nome da cidade: ");
    scanf(" %s", nome_da_cidade);

    printf("População: ");
    scanf(" %d", &populacao);

    printf("Área: ");
    scanf(" %f", &area);

    printf("PIB: ");
    scanf(" %f", &PIB);

    printf("Número de pontos turísticos: ");
    scanf(" %d", &numero_de_pontos_turisticos);

    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado);
    printf("Código da carta: %s\n", codigo_da_carta);
    printf("Nome da cidade: %s\n", nome_da_cidade);
    printf("População: %d\n", populacao);
    printf("Área: %.3f km²\n", area);
    printf("PIB: %.2f bilhões de reais\n", PIB);
    printf("Número de pontos turísticos: %d\n", numero_de_pontos_turisticos);

    return 0;
}
