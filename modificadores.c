#include <stdio.h>

int main() {

    /* //unsigned int

    int numeroSinal = 3000000000; // Este valor excede o limite de um int normal
    unsigned int numeroSemSinal = 3000000000;

    printf("Numero com sinal: %d\n", numeroSinal);
    printf("Numero sem sinal: %u\n", numeroSemSinal);

    return 0; */

   /*  printf("Tamanho de int: %u bytes\n", sizeof(int));
    printf("Tamanho de long int: %u bytes\n", sizeof(long int));
    printf("Tamanho de long long int: %u bytes\n", sizeof(long long int));
    printf("Tamanho de double: %u bytes\n", sizeof(double));
    printf("Tamanho de long double: %u bytes\n", sizeof(long double));

    return 0; */
/* 
    int numeroNormal = 434643347; // valor max de int
    long long int numeroGrande = 4346433476;

    printf("Numero normal (int): %d\n", numeroNormal);
    printf("Numero grande (long int): %ld\n", numeroGrande);

    numeroGrande = 43464334763; // Valor maior que o max de int
    printf("Numero grande atualizado (long int): %lld\n", numeroGrande);

    return 0; */

    /* unsigned long int numeroGrandePositivo = 4000000000;
    unsigned int numeroPositivo = 4000000000;
    long int numeroGrande = 4000000000;
    int numero = 4000000000;

    printf("Número positivo grande: %lu\n", numeroGrandePositivo);
    printf("Número positivo: %u\n", numeroPositivo);
    printf("Número grande: %ld\n", numeroGrande);
    printf("Número: %d\n", numero);

    return 0; */

    //short

    short int numeroPequeno = 32767; // valor máx de short int
    printf("Número pequeno (short int): %d\n", numeroPequeno);

    numeroPequeno = 32768; // valor maior que o máx de short int
    printf("Número pequeno atualizado (short int): %d\n", numeroPequeno);

    return 0;

}

/* Numero com sinal: -1294967296
Numero sem sinal: 3000000000 */