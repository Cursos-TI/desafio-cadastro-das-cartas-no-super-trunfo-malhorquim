#include <stdio.h>

int main (){
    char estado;
    char codigodacarta[12];
    char nomedacidade[15];
    int populacao;
    float area;
    float pib;
    int pontoturisticos;

    printf("digite o seu estado: (A - H)\n");
    scanf("%c", &estado);

    printf("escreva o codigo da sua carta com a inicial do seu estado: (ex: A01, B02, ...)\n");
    scanf("%s", codigodacarta);

    printf("digite o noma da sua cidade: (ex: fortaleza, para)\n");
    scanf("%s", nomedacidade);

    printf("me informe a populacao: \n");
    scanf("%d", &populacao);
    
    printf("digite a area em km: \n");
    scanf("%f", &area);

    printf("informe o pib: \n");
    scanf("%f", &pib);

    printf("me informe quantos pontos turisticos: \n");
    scanf("%d", &pontoturisticos);

    
    char estado2;
    char codigodacarta2[12];
    char nomedacidade2[15];
    int populacao2;
    float area2;
    float pib2;
    int pontoturisticos2;
    getchar();
    printf("digite o seu estado: (A - H)\n");
    scanf("%c", &estado2);

    printf("escreva o codigo da sua carta com a inicial do seu estado: (ex: A01, B02, ...)\n");
    scanf("%s", codigodacarta2);

    printf("digite o noma da sua cidade: (ex: fortaleza, para)\n");
    scanf("%s", nomedacidade2);

    printf("me informe a populacao: \n");
    scanf("%d", &populacao2);
    
    printf("digite a area em km: \n");
    scanf("%f", &area2);

    printf("informe o pib: \n");
    scanf("%f", &pib2);

    printf("me informe quantos pontos turisticos: \n");
    scanf("%d", &pontoturisticos2);
    
    printf("\ncarta 1: \n");
    printf("Estado : %c\nCodigo Da Carta: %s\nCidade: %s\nPopulacao : %d\nArea : %.2fkm\nPib : %.2f BILHOES DE REAIS\nNumero de Pontos Turitiscos : %d\n", estado,codigodacarta,nomedacidade,populacao,area,pib,pontoturisticos);

    printf("\ncarta 2: \n");
    printf("Estado : %c\nCodigo Da Carta: %s\nCidade: %s\nPopulacao : %d\nArea : %.2fkm\nPib : %.2f BILHOES DE REAIS\nNumero de Pontos Turitiscos : %d\n", estado2,codigodacarta2,nomedacidade2,populacao2,area2,pib2,pontoturisticos2);

return 0;

}