#include <stdio.h>

int main(){
    printf("***super trunfo***\n");

    
    int populacao;
    char nome [4];
    char estado [15];
    float area;
    float pib;
    int numerosdepontosturisticos;
    float densidadepopulacional;
    float pibpercapita;

    printf("insira os dados carta 1:\n");



    printf("insira o codigo:\n");
    scanf("%s" , nome);
    printf("insira o nome do estado:\n");
    scanf("%s" , estado);
    printf("insira a populaçao:\n");
    scanf("%d" , &populacao);
    printf("insira a area:\n");
    scanf("%f" , &area);
    printf("insira o pib:\n");
    scanf("%f" , &pib);
    printf("insira numero de pontos turisticos:\n");
    scanf("%d" , &numerosdepontosturisticos);

    densidadepopulacional = (float)(populacao / area);
    printf("densidade populacional é: %.1f\n" , densidadepopulacional);
    pibpercapita = (float)(pib / populacao);
    printf("o pib per capita é: %.1f\n" , pibpercapita);

    printf("insira os dados carta 2:\n");



    printf("insira o codigo:\n");
    scanf("%s" , nome);
    printf("insira o nome do estado:\n");
    scanf("%s" , estado);
    printf("insira a populaçao:\n");
    scanf("%d" , &populacao);
    printf("insira a area:\n");
    scanf("%f" , &area);
    printf("insira o pib:\n");
    scanf("%f" , &pib);
    printf("insira numero de pontos turisticos:\n");
    scanf("%d" , &numerosdepontosturisticos);
    
    densidadepopulacional = (float)(populacao / area);
    printf("densidade populacional é %.1f\n" , densidadepopulacional);
    pibpercapita = (float)(pib / populacao);
    printf("o pib per capita é: %.1f\n" , pibpercapita);


}