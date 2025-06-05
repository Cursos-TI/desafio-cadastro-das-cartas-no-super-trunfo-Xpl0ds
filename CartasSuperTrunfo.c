#include <stdio.h>

int main(){

    printf("Desafio Super Trunfo");
    printf("\n");
    char Cidade[20];
    int CodigoDaCidade;
    int Populacao;
    int Area;
    int PIB;
    int NumeroDePontosTuristicos;

    printf("Digite o Nome da Cidade: \n");
    scanf("%s", &Cidade);

    printf("Digite o Codigo da Cidade: \n");
    scanf("%d", &CodigoDaCidade);

    printf("Digite a Populacao: \n");
    scanf("%d", &Populacao);

    printf("Digite a Area: \n");
    scanf("%d", &Area);

    printf("Digite o PIB: \n");
    scanf("%d", &PIB);

    printf("Digite o NumeroDePontosTuristicos: \n");
    scanf("%d", &NumeroDePontosTuristicos);

    printf("\n");
    printf("Digite o Nome da Cidade: %s", Cidade);
    printf("\n");
    printf("Digite o CodigoDaCidade: %d", CodigoDaCidade);
    printf("\n");
    printf("Digite a Populacao: %d", Populacao);
    printf("\n");
    printf("Digite a Area: %d", Area);
    printf("\n");
    printf("Digite o PIB: %d", PIB);
    printf("\n");
    printf("Digite o NumeroDePontosTuristicos: %d", NumeroDePontosTuristicos);
    printf("\n");
    
    return 0;
}