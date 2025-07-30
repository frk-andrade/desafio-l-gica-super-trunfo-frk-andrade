#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Definição das variáveis para armazenar as propriedades das cidades
    // Você pode utilizar o código do primeiro desafio

    
    // Cadastro das Cartas:
    // Implemente a lógica para solicitar ao usuário que insira os dados das cidades
    // utilizando a função scanf para capturar as entradas.
    // utilize o código do primeiro desafio

    // Exemplo:
    // printf("Digite o código da cidade: ");
    // scanf("%s", codigo);
    // 
    // (Repita para cada propriedade)

    //declaração das variáveis
    char letra_estado1, letra_estado2;
    char cod_carta1[4], cod_carta2[4];
    char nome_cidade1[30], nome_cidade2[30];
    unsigned long int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int p_turistico1, p_turistico2;

    //Lógica para obtenção das informações da carta 1
    printf("Bem-vindo ao Desafio Super Trunfo - Países!\n");
    printf("Vamos começar cadastrando a Carta 1! \n");
    printf("Informe letra do Estado no intervalo de A a H: \n");
    scanf("%c", letra_estado1);
    printf("Informe novamente a letra do Estado, seguida do número no intervalo entre 01 a 04: \n");
    scanf("%s", cod_carta1);
    printf("Informe o nome da cidade: \n");
    scanf("%s", nome_cidade1);
    printf("Informe a população: \n");
    scanf("%lu", &populacao1);
    printf("Informe o tamanho da cidade em km²: \n");
    scanf("%f", &area1);
    printf("Informe o PIB: \n");
    scanf("%f", &pib1);
    printf("Informe a quantidade de pontos turísticos: \n");
    scanf("%d", &p_turistico1);

    //Nível aventureiro
    //Calculando a densidade populacional
    float densidade1 = populacao1 / area1;
    //Calculando o PIB per capta
    float pib_capita1 = (float) (pib1 * 1000000000.0) / populacao1;

    //Exibição dos resultados de nível aventureiro
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", pib_capita1);

    //Nível mestre
    //Calculando o super poder
    float superPoder1 = (float) populacao1 + area1 + pib1 + p_turistico1 + pib_capita1 + (1.0 / densidade1);

    //Lógica para obtenção das informações da carta 2
    printf("Agora a Carta 2! \n");
    printf("Informe letra do Estado no intervalo de A a H: \n");
    scanf("%c", letra_estado2 ); 
    while (getchar() != '\n');
    printf("Informe novamente a letra do Estado, seguida do número no intervalo entre 01 a 04: \n");
    scanf("%s", cod_carta2);
    printf("Informe o nome da cidade: \n");
    scanf("%s", nome_cidade2);
    printf("Informe a população: \n");
    scanf("%lu", &populacao2);
    printf("Informe o tamanho da cidade em km²: \n");
    scanf("%f", &area2);
    printf("Informe o PIB: \n");
    scanf("%f", &pib2);
    printf("Informe a quantidade de pontos turísticos: \n");
    scanf("%d", &p_turistico2);

    //Nível aventureiro
    //Calculando a densidade populacional
    float densidade2 = populacao2 / area2;
    //Calculando o PIB per capta
    float pib_capita2 = (float) (pib2 * 1000000000.0) / populacao2;

    //Exibição dos resultados de nível aventureiro
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", pib_capita2);

    //Nível mestre
    //Calculando o super poder
    float superPoder2 = (float) populacao2 + area2 + pib2 + p_turistico2 + pib_capita2 + (1.0 / densidade2);

    // Comparação de Cartas:
    // Desenvolva a lógica de comparação entre duas cartas.
    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.

    // Exemplo:
    // if (populacaoA > populacaoB) {
    //     printf("Cidade 1 tem maior população.\n");
    // } else {
    //     printf("Cidade 2 tem maior população.\n");
    // }

     //Exibição do comparativo das cartas
    //implementando a lógica com switch case

    int atributo;

    //Menu de exibição com os dados que serão usados para a primeira comparação.
    printf("Vamos comparar as cartas no Jogo Super Trunfo - Países!\n");
    printf("Escolha o atributo para comparar as cartas: \n");
     printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Número de Pontos Turísticos\n");
    printf("5 - Densidade Populacional \n");
    printf("6 - PIB per Capta \n");
    printf("7 - Super Poder \n");
    printf("Digite o número do primeiro atributo: \n ");
    scanf("%d", &atributo);

    if (atributo > 7 ) //Verifica se o usuário digitou um número diferente das opções
    {
        printf("Selecione um número válido! \n");
    } else {
        switch (atributo)
        {
        case 1:
        printf("Resultado do comparativo de População entre %s e %s \n", nome_cidade1, nome_cidade2);
        printf("A Carta 1 da cidade %s possui %lu habitantes\n", nome_cidade1, populacao1);
        printf("A Carta 2 da cidade %s possui %lu habitantes\n", nome_cidade2, populacao2);

        if (populacao1 > populacao2) {
        printf("A cidade vencedora é: %s\n", nome_cidade1);
        } else if (populacao1 == populacao2){
        printf("Empate!\n");
        } else {
        printf("A cidade vencedora é: %s\n", nome_cidade2);
        };
        break;
   
        case 2:
        printf("Resultado do comparativo de Área entre %s e %s \n", nome_cidade1, nome_cidade2);
        printf("A Carta 1 da cidade %s possui %.2f km²\n", nome_cidade1, area1);
        printf("A Carta 2 da cidade %s possui %.2f km²\n", nome_cidade2, area2);

        if (area1 > area2) {
        printf("A cidade vencedora é: %s\n", nome_cidade1);
        } else if (area1 == area2){
        printf("Empate!\n");
        } else {
        printf("A cidade vencedora é: %s\n", nome_cidade2);
        };
        break;

        case 3:
        printf("Resultado do comparativo do PIB entre %s e %s \n", nome_cidade1, nome_cidade2);
        printf("A Carta 1 da cidade %s possui R$ %.2f Bilhões\n", nome_cidade1, pib1);
        printf("A Carta 2 da cidade %s possui R$ %.2f Bilhões\n", nome_cidade2, pib2);

        if (pib1 > pib2) {
        printf("A cidade vencedora é: %s\n", nome_cidade1);
        } else if (pib1 == pib2){
        printf("Empate!\n");
        } else {
        printf("A cidade vencedora é: %s\n", nome_cidade2);
        };
        break;

        case 4:
        printf("Resultado do comparativo de Pontos Turísticos entre %s e %s \n", nome_cidade1, nome_cidade2);
        printf("A Carta 1 da cidade %s possui %d pontos\n", nome_cidade1, p_turistico1);
        printf("A Carta 2 da cidade %s possui %d pontos\n", nome_cidade2, p_turistico2);

        if (p_turistico1 > p_turistico2) {
        printf("A cidade vencedora é: %s\n", nome_cidade1);
        } else if (p_turistico1 == p_turistico2){
        printf("Empate!\n");
        } else {
        printf("Carta 2 venceu!\n");
        }
        break;

        case 5:
        printf("Resultado do comparativo da Densidade Demográfica entre %s e %s \n", nome_cidade1, nome_cidade2);
        printf("A Carta 1 da cidade %s possui %.2f hab/km²\n", nome_cidade1, densidade1);
        printf("A Carta 2 da cidade %s possui %.2f hab/km²\n", nome_cidade2, densidade2);

        if (densidade1 < densidade2) {
        printf("A cidade vencedora é: %s\n", nome_cidade1);
        } else if (densidade1 == densidade2){
        printf("Empate!\n");
        } else {
        printf("A cidade vencedora é: %s\n", nome_cidade2);
        }
        break;

        case 6:
        printf("Resultado do comparativo do PIB per Capta entre %s e %s \n", nome_cidade1, nome_cidade2);
        printf("A Carta 1 da cidade %s possui R$ %.2f bilhões\n", nome_cidade1, pib_capita1);
        printf("A Carta 2 da cidade %s possui R$ %.2f bilhões\n", nome_cidade2, pib_capita2);

        if (pib_capita1 > pib_capita2) {
        printf("A cidade vencedora é: %s\n", nome_cidade1);

        } else if (pib_capita1 == pib_capita2){
        printf("Empate!\n");
        } else {
        printf("A cidade vencedora é: %s\n", nome_cidade2);
        }
        break;

        case 7:
        printf("Resultado do comparativo do Super Poder entre %s e %s \n", nome_cidade1, nome_cidade2);
        printf("A Carta 1 da cidade %s possui %.2f pontos\n", nome_cidade1, superPoder1);
        printf("A Carta 2 da cidade %s possui %.2f pontos\n", nome_cidade2, superPoder2);

        if (superPoder1 > superPoder2) {
        printf("A cidade vencedora do é: %s\n", nome_cidade1);
        } else if (superPoder1 == superPoder2){
        printf("Empate!\n");
        } else {
        printf("A cidade vencedora é: %s\n", nome_cidade2);
        }
        break;
    }
    
    

    // Exibição dos Resultados:
    // Após realizar as comparações, exiba os resultados para o usuário.
    // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.

    // Exemplo:
    // printf("A cidade vencedora é: %s\n", cidadeVencedora);

    return 0;
}
