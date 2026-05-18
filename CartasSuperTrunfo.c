#include <stdio.h>

struct Carta {

    char estado;
    char codigo[30];
    char cidade[20];
    int populacao;
    float areakm;
    float pib;
    int turistico;

};

int main() {

    struct Carta carta1;
    struct Carta carta2;

    // CARTA 1

    printf("=== CARTA 1 ===\n");

    printf("Estado: ");
    scanf(" %c", &carta1.estado);

    printf("Codigo: ");
    scanf("%s", carta1.codigo);

    printf("Cidade: ");
    scanf("%s", carta1.cidade);

    printf("Populacao: ");
    scanf("%d", &carta1.populacao);

    printf("Area em km²: ");
    scanf("%f", &carta1.areakm);

    printf("PIB: ");
    scanf("%f", &carta1.pib);

    printf("Pontos turisticos: ");
    scanf("%d", &carta1.turistico);


    // CARTA 2

    printf("\n=== CARTA 2 ===\n");

    printf("Estado: ");
    scanf(" %c", &carta2.estado);

    printf("Codigo: ");
    scanf("%s", carta2.codigo);

    printf("Cidade: ");
    scanf("%s", carta2.cidade);

    printf("Populacao: ");
    scanf("%d", &carta2.populacao);

    printf("Area em km²: ");
    scanf("%f", &carta2.areakm);

    printf("PIB: ");
    scanf("%f", &carta2.pib);

    printf("Pontos turisticos: ");
    scanf("%d", &carta2.turistico);


    // MOSTRAR DADOS

    printf("\n=== DADOS CARTA 1 ===\n");
    printf("Estado: %c\n", carta1.estado);
    printf("Codigo: %s\n", carta1.codigo);
    printf("Cidade: %s\n", carta1.cidade);

    printf("\n=== DADOS CARTA 2 ===\n");
    printf("Estado: %c\n", carta2.estado);
    printf("Codigo: %s\n", carta2.codigo);
    printf("Cidade: %s\n", carta2.cidade);

    return 0;
}