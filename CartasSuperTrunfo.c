#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas


int main() {

    // Boas vindas ao usuário e instruções sobre o jogo.
    printf("Boas vindas ao SUPER TRUNFO C++!\nVamos jogar!?\n\n");
    printf("Este jogo consiste em você e seu adversário compararem cidades brasileiras para ver quem têm as MELHORES CIDADES!\n");
    printf("Mas não se preocupe, irei te ensinar como funciona este game!\n\n");
    printf("'ELAS SÃO TUDO!' ~ Digo... As cartas são as peças principais deste game...\n");
    printf("O que você acha de entendermos um pouco mais sobre elas? Nada melhor que cadastrá-las!\nIrei te ajudar:\n\n");
    printf("Primeiramente entenderemos os atributos, você precisará compará-los para vencer.\nVou te dar uma lista do que precisamos; podes fazer isto por mim?\n\n");
    printf("___________________________________________________________________________________________________\n");
    printf("Código da carta - é o 'serial' que identifica cada carta, pois cada uma é ÚNICA ~ Exemplo: Z09\n");
    printf("Nome da cidade - não preciso explicar né?\n");
    printf("População - quantas pessoas moram na cidade?\n");
    printf("Área em metros quadrados - então... Espero que você seja bom em geografia :)\n");
    printf("PIB (Produto Interno Bruto) - o quanto esse lugar é rico?\n");
    printf("Pontos turísticos (quantidade) - nesse lugar dá para passear ou não?\n");
    printf("____________________________________________________________________________________________________\n\n");
    printf("Te dei a lista, agora vamos montar as cidades, então... MÃOS À OBRA!!! ~ Entendeu? cidades... obras... construir... Ah deixa pra lá\n\n");
    printf("Vamos começar determinando cada valor de atributo. Mas pega leve heim, seu oponente também tem que ter a chance de vencer.\n\n");

    // Declaração das variáveis das cartas:
    char codigo1[6], codigo2[6];
    char nome1[50], nome2 [50];
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int turistico1, turistico2;

    // Entrada de dados do usuário; carta 1:

    printf("Carta 1\nInsira os dados - \n\n");
    printf("Código da carta: \n");
    scanf("%s", codigo1);

    printf("\nNome da cidade: \n");
    scanf("%s", nome1);

    printf("\nPopulação: \n");
    scanf("%d", &populacao1);

    printf("\nÁrea em metros quadrados: \n");
    scanf("%f", &area1);

    printf("\nPIB: \n");
    scanf("%f", &pib1);

    printf("\nPontos turísticos (quantidade): \n");
    scanf("%d", &turistico1);

    // Saída de dados; carta 1:

    printf("\nVamos ver como ficou? \n\n");
    printf("___________________________________________________________________________\n\n");
    printf("Código da carta: %s\n", codigo1);
    printf("Nome da cidade: %s\n", nome1);
    printf("População: %d\n", populacao1);
    printf("Área em metros quadrados: %.2fkm²\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Pontos turísticos: %d\n", turistico1);
    printf("---------------------------------------------------------------------------\n\n");
    printf("Gostou? Pois bem, vamos para a próxima!\n\n");


    // Entrada de dados do usuário; carta 2:

    printf("Carta 2\nInsira os dados - \n\n");
    printf("Código da carta: \n");
    scanf("%s", codigo2);

    printf("\nNome da cidade: \n");
    scanf("%s", nome2);

    printf("\nPopulação: \n");
    scanf("%d", &populacao2);

    printf("\nÁrea em metros quadrados: \n");
    scanf("%f", &area2);

    printf("\nPIB: \n");
    scanf("%f", &pib2);

    printf("\nPontos turísticos (quantidade): \n");
    scanf("%d", &turistico2);

    // Saída de dados; carta 2:

    printf("\nSerá que essa vai estar tão boa quanto a primeira? \n\n");
    printf("___________________________________________________________________________\n\n");
    printf("Código da carta: %s\n", codigo2);
    printf("Nome da cidade: %s\n", nome2);
    printf("População: %d\n", populacao2);
    printf("Área em metros quadrados: %.2fkm²\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Pontos turísticos: %d\n", turistico2);
    printf("---------------------------------------------------------------------------\n\n");

    // Agradecimento ao usuário:

    printf("Caramba, você é bom mesmo! Espero que tenha entendido como tudo funciona.\n");
    printf("Agora é só se divertir!         ~ Que a sorte esteja sempre a seu favor... ~\n\n");

    return 0;
}
