#include <stdio.h>

// Desafio Super Trunfo - Países
// Nível 1 (Novato) - Cadastro das Cartas


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
    printf("Área em kilometros quadrados - então... Espero que você seja bom em geografia :)\n");
    printf("PIB (Produto Interno Bruto) - o quanto esse lugar é rico?\n");
    printf("Pontos turísticos (quantidade) - nesse lugar dá para passear ou não?\n");
    printf("____________________________________________________________________________________________________\n\n");
    printf("Te dei a lista, agora vamos montar as cidades, então... MÃOS À OBRA!!! ~ Entendeu? cidades... obras... construir... Ah deixa pra lá\n\n");
    printf("Vamos começar determinando cada valor de atributo. Mas pega leve heim, seu oponente também tem que ter a chance de vencer.\n\n");

    // Declaração das variáveis das cartas:
    char codigo1[6], codigo2[6];
    char nome1[50], nome2 [50];
    unsigned long int populacao1, populacao2;
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
    scanf("%lu", &populacao1);

    printf("\nÁrea em kilometros quadrados: \n");
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
    printf("População: %lu\n", populacao1);
    printf("Área em kilometros quadrados: %.2fkm²\n", area1);
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
    scanf("%lu", &populacao2);

    printf("\nÁrea em kilometros quadrados: \n");
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
    printf("População: %lu\n", populacao2);
    printf("Área em kilometros quadrados: %.2fkm²\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Pontos turísticos: %d\n", turistico2);
    printf("---------------------------------------------------------------------------\n\n");

    // Desafio Super Trunfo Países
    // Nível 2 (Aventureiro) - Cálculo de PIB per capta e Densidade populacional

    printf("Você foi bem, mas acho que esquecemos de duas coisas que verdadeiramente nos dizem MUITO sobre o país. Elas são:\n");
    printf("PIB per capta - É a média de riqueza por pessoa;\n");
    printf("Densidade populacional - É a quantidade de pessoas por área (km²)\n\n");
    printf("Eu estava esperando que você notasse que faltava esses dois, mas como não disse nada, deixa que eu ajusto as cartas para você.\n\n");
    printf("---------------------------------------------------------------------------\n\n");

    // Processamento de dados carta 1 - Cálculo do PIB per capta e densidade populacional

    float pibCapta1 = pib1 / populacao1;
    float densidadePopulacional1 = populacao1 / area1;

    // Processamento de dados carta 2 - Cálculo do PIB per capta e densidade populacional

    float pibCapta2 = pib2 / populacao2;
    float densidadePopulacional2 = populacao2 / area2;

    // Saída de dados - Expondo as cartas para o usuário com as novas informações

    printf("Carta 1:\n\n");
    printf("___________________________________________________________________________\n\n");
    printf("Código da carta: %s\n", codigo1);
    printf("Nome da cidade: %s\n", nome1);
    printf("População: %lu\n", populacao1);
    printf("Área em kilometros quadrados: %.2fkm²\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Pontos turísticos: %d\n", turistico1);
    printf("PIB per capta: %.2f reais\n", pibCapta1);
    printf("Densidade populacional: %.2fkm²\n", densidadePopulacional1);
    printf("___________________________________________________________________________\n\n");

    printf("Carta 2:\n\n");
    printf("___________________________________________________________________________\n\n");
    printf("Código da carta: %s\n", codigo2);
    printf("Nome da cidade: %s\n", nome2);
    printf("População: %lu\n", populacao2);
    printf("Área em kilometros quadrados: %.2fkm²\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Pontos turísticos: %d\n", turistico2);
    printf("PIB per capta: %.2f reais\n", pibCapta2);
    printf("Densidade populacional: %.2fkm²\n", densidadePopulacional2);
    printf("___________________________________________________________________________\n\n");


    // Desafio Super Trunfo Países
    // Nivel 3 (Mestre) - Batalha de Cartas no Super Trunfo + Super Poder

    printf("Cartas interessantes... Mas você sabia que elas têm SUPERPODERES?\nEles nada mais são que a soma de todos os atributos numéricos!\n\n ");
    printf("Aproveitando a deixa, vamos ver quem têm mais vitórias e quem tem o MAIOR SUPERPODER!\n\n");

    float superPoder1 = populacao1 + area1 + pib1 + (float)turistico1 + pibCapta1 + (1.0 / densidadePopulacional1);
    float superPoder2 = populacao2 + area2 + pib2 + (float)turistico2 + pibCapta2 + (1.0 / densidadePopulacional2);

    float resultadoPopulacao = (populacao1 > populacao2);
    float resultadoArea = (area1 > area2);
    float resultadoPib = (pib1 > pib2);
    float resultadoTuristico = (turistico1 > turistico2);
    float resultadoPibCapta = (pibCapta1 > pibCapta2);
    float resultadoDensidadePopulacional = (densidadePopulacional1 < densidadePopulacional2);

    printf("Vamos organizar os resultados para as comparações!\nA Carta 1 ganha quando resultado for '1', já a Carta 2 ganha quando o resultado for '0'.\n\nQUEM GANHOU:\n\n");
    printf("---Comparação das cartas---\n\n");
    printf("População: %.0f\n", resultadoPopulacao);
    printf("Área: %.0f\n", resultadoArea);
    printf("PIB: %.0f\n", resultadoPib);
    printf("Pontos turísticos: %.0f\n", resultadoTuristico);
    printf("PIB per capta: %.0f\n", resultadoPibCapta);
    printf("Densidade populacional: %.0f\n", resultadoDensidadePopulacional);
    printf("-----------------------------------------\n\n");



    // Agradecimento ao usuário:

    printf("Então, o que achou? Espero que tenha gostado e entendido como tudo funciona!\n");
    printf("Agora é só se divertir!         ~ Que a sorte esteja sempre a seu favor... ~\n\n");

    return 0;
}
