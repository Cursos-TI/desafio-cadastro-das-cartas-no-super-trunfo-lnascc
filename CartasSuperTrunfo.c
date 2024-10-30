#include <stdio.h>

int main() {

    char codigo[] = "v43", nome[] = "Lapa";
    int populacao, pturisticos;
    float area, pib;

    printf("codigo: \n");
    scanf("%s", &codigo);

    printf("nome: \n");
    scanf("%s", &nome);

    printf("populacao: \n");
    scanf("%d", &populacao);

    printf("pontos turisticos: \n");
    scanf("%d", &pturisticos);

    printf("area: \n");
    scanf("%f", &area);

    printf("pib: \n");
    scanf("%f", &pib);

    float dpopulacional = populacao / area;
    float percapta = pib / populacao;

    printf("codigo: %s\n", codigo);
    printf("nome: %s\n", nome);
    printf("populacao: %d\n", populacao);
    printf("pontos turisticos: %d\n", pturisticos);
    printf("area: %f\n", area);
    printf("pib: %f\n", pib);

    printf("densidade populacional: %f\n", dpopulacional);
    printf("PIB percapta: %f\n", percapta);

    return 0;
}