#include <stdio.h>
#include <string.h>

int main() {
    // Variáveis da primeira cidade
    char estado1[3];
    char codigo_carta1[3];
    char nome_cidade1[30];
    unsigned long int populacao1;
    float area1;
    float densidade_pop1;
    float pib1;
    float pib_per_capita1;
    int pontos_turisticos1;

    // Variáveis da segunda cidade
    char estado2[3];
    char codigo_carta2[3];
    char nome_cidade2[30];
    unsigned long int populacao2;
    float area2;
    float densidade_pop2;
    float pib2;
    float pib_per_capita2;
    int pontos_turisticos2;

    unsigned short int opcao1, opcao2;
    char nome_atributo1[30], nome_atributo2[30];
    float valor_atributo1Carta1, valor_atributo2Carta1;
    float valor_atributo1Carta2, valor_atributo2Carta2;
    float super_poder1, super_poder2;

    // Cadastro da carta 1
    printf("\n++++ Olá, bem-vindo ao Super Trunfo! ++++\n\nCadastre a primeira carta.\n\n");

    printf("Digite a sigla do estado da cidade: ");
    scanf(" %s", &estado1);

    printf("Digite o código da carta (ex: 01): ");
    scanf("%s", codigo_carta1);

    printf("Digite o nome da cidade: ");
    scanf(" %29[^\n]", nome_cidade1);

    printf("Digite a população da cidade: ");
    scanf("%lu", &populacao1);

    printf("Digite o tamanho da área da cidade (em km²): ");
    scanf("%f", &area1);

    printf("Digite o valor do PIB da cidade (em bilhões): R$ ");
    scanf("%f", &pib1);

    printf("Digite a quantidade de pontos turísticos da cidade: ");
    scanf("%d", &pontos_turisticos1);

    densidade_pop1 = populacao1 / area1;
    pib_per_capita1 = (pib1 * 1000000000.0f) / populacao1;

    // Cadastro da carta 2
    printf("\n\nCadastre a segunda carta.\n\n");

    printf("Digite a sigla do estado da cidade: ");
    scanf(" %s", &estado2);

    printf("Digite o código da carta (ex: 01): ");
    scanf("%s", codigo_carta2);

    printf("Digite o nome da cidade: ");
    scanf(" %29[^\n]", nome_cidade2);

    printf("Digite a população da cidade: ");
    scanf("%lu", &populacao2);

    printf("Digite o tamanho da área da cidade (em km²): ");
    scanf("%f", &area2);

    printf("Digite o valor do PIB da cidade (em bilhões): R$ ");
    scanf("%f", &pib2);

    printf("Digite a quantidade de pontos turísticos da cidade: ");
    scanf("%d", &pontos_turisticos2);

    densidade_pop2 = populacao2 / area2;
    pib_per_capita2 = (pib2 * 1000000000.0f) / populacao2;

    // Escolha do primeiro atributo
    printf("\n===================== Escolha o primeiro atributo: =====================\n\n");
    printf("1) População\n");
    printf("2) Área\n");
    printf("3) PIB\n");
    printf("4) PIB per Capita\n");
    printf("5) Número de pontos turísticos\n");
    printf("6) Densidade demográfica\n");
    printf("Digite a opção: ");
    scanf("%hu", &opcao1);

    switch (opcao1) {
        case 1:
            strcpy(nome_atributo1, "População");
            valor_atributo1Carta1 = (float) populacao1;
            valor_atributo1Carta2 = (float) populacao2;
            break;
        case 2:
            strcpy(nome_atributo1, "Área");
            valor_atributo1Carta1 = area1;
            valor_atributo1Carta2 = area2;
            break;
        case 3:
            strcpy(nome_atributo1, "PIB");
            valor_atributo1Carta1 = pib1;
            valor_atributo1Carta2 = pib2;
            break;
        case 4:
            strcpy(nome_atributo1, "PIB per capita");
            valor_atributo1Carta1 = pib_per_capita1;
            valor_atributo1Carta2 = pib_per_capita2;
            break;
        case 5:
            strcpy(nome_atributo1, "Pontos turísticos");
            valor_atributo1Carta1 = (float) pontos_turisticos1;
            valor_atributo1Carta2 = (float) pontos_turisticos2;
            break;
        case 6:
            strcpy(nome_atributo1, "Densidade demográfica");
            valor_atributo1Carta1 = densidade_pop1;
            valor_atributo1Carta2 = densidade_pop2;
            break;
        default:
            printf("Opção inválida!\n");
            return 1;
    }

    // Escolha do segundo atributo
    printf("\n===================== Escolha o segundo atributo: =====================\n\n");
    printf("1) População\n");
    printf("2) Área\n");
    printf("3) PIB\n");
    printf("4) PIB per Capita\n");
    printf("5) Número de pontos turísticos\n");
    printf("6) Densidade demográfica\n");
    printf("Digite a opção: ");
    scanf("%hu", &opcao2);

    if (opcao2 == opcao1) {
        printf("Opção não pode ser igual à anterior. Encerrando o jogo...\n");
        return 1;
    }

    switch (opcao2) {
        case 1:
            strcpy(nome_atributo2, "População");
            valor_atributo2Carta1 = (float) populacao1;
            valor_atributo2Carta2 = (float) populacao2;
            break;
        case 2:
            strcpy(nome_atributo2, "Área");
            valor_atributo2Carta1 = area1;
            valor_atributo2Carta2 = area2;
            break;
        case 3:
            strcpy(nome_atributo2, "PIB");
            valor_atributo2Carta1 = pib1;
            valor_atributo2Carta2 = pib2;
            break;
        case 4:
            strcpy(nome_atributo2, "PIB per capita");
            valor_atributo2Carta1 = pib_per_capita1;
            valor_atributo2Carta2 = pib_per_capita2;
            break;
        case 5:
            strcpy(nome_atributo2, "Pontos turísticos");
            valor_atributo2Carta1 = (float) pontos_turisticos1;
            valor_atributo2Carta2 = (float) pontos_turisticos2;
            break;
        case 6:
            strcpy(nome_atributo2, "Densidade demográfica");
            valor_atributo2Carta1 = densidade_pop1;
            valor_atributo2Carta2 = densidade_pop2;
            break;
        default:
            printf("Opção inválida!\n");
            return 1;
    }

    super_poder1 = valor_atributo1Carta1 + valor_atributo2Carta1;
    super_poder2 = valor_atributo1Carta2 + valor_atributo2Carta2;

    printf("\n==========++ Resultado Final ++==========\n\n");
    printf("%s x %s\n", nome_cidade1, nome_cidade2);
    printf("Atributos escolhidos: %s e %s\n", nome_atributo1, nome_atributo2);
    printf("Valores atributos 1: %.2f   x   %.2f\n", valor_atributo1Carta1, valor_atributo1Carta2);
    printf("Valores atributos 2: %.2f   x   %.2f\n", valor_atributo2Carta1, valor_atributo2Carta2);
    printf("Soma dos atributos: %.2f   x   %.2f\n", super_poder1, super_poder2);

    if (super_poder1 > super_poder2) {
        printf("Vencedor é... CARTA 1!!\n");
    } else if (super_poder1 < super_poder2) {
        printf("Vencedor é... CARTA 2!!\n");
    } else {
        printf("Empate! A soma dos atributos é igual.\n");
    }

    return 0;
}
