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

    //Variaveis relacionadas aos menus switch e para resultado final
    unsigned short int opcao1, opcao2, comparacao1,comparacao2;
    char nome_atributo1[30], nome_atributo2[30];
    float valor_atributo1Carta1, valor_atributo2Carta1;
    float valor_atributo1Carta2, valor_atributo2Carta2;
  

   // Cadastro da carta 1
    printf("\n++++ Olá, bem-vindo ao Super Trunfo! ++++\n\nCadastre a primeira carta.\n\n");

    printf("Digite a sigla do estado da cidade: ");
    scanf(" %s", estado1);

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

    // Verificação de divisão por zero para densidade_pop1
    if (area1 != 0.0f) {
        densidade_pop1 = populacao1 / area1;
    } else {
        densidade_pop1 = 0.0f;
        printf("Aviso: Área da Carta 1 é zero. Densidade Populacional definida como 0.\n");
    }

    // Verificação de divisão por zero para pib_per_capita1
    if (populacao1 != 0UL) {
        pib_per_capita1 = (pib1 * 1000000000.0f) / populacao1;
    } else {
        pib_per_capita1 = 0.0f;
        printf("Aviso: População da Carta 1 é zero. PIB per Capita definido como 0.\n");
    }

    // Cadastro da carta 2
    printf("\n\nCadastre a segunda carta.\n\n");

    printf("Digite a sigla do estado da cidade: ");
    scanf(" %s", estado2);

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

    
    // Verificação de divisão por zero para densidade_pop2
    if (area2 != 0.0f) {
        densidade_pop2 = populacao2 / area2;
    } else {
        densidade_pop2 = 0.0f;
        printf("Aviso: Área da Carta 2 é zero. Densidade Populacional definida como 0.\n");
    }

    // Verificação de divisão por zero para pib_per_capita2
    if (populacao2 != 0UL) {
        pib_per_capita2 = (pib2 * 1000000000.0f) / populacao2;
    } else {
        pib_per_capita2 = 0.0f;
        printf("Aviso: População da Carta 2 é zero. PIB per Capita definido como 0.\n");
    }


    // Switch para escolha do primeiro atributo
    printf("\n++==================++ Escolha dois atributos para comparação ++==================++\n\n");
    printf("\n======== Escolha o primeiro atributo: ========\n");
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
            comparacao1 = (populacao1>populacao2) ? 1:0;
            strcpy(nome_atributo1, "População");
            break;
        case 2:
            comparacao1 = (area1>area2) ? 1:0;
            strcpy(nome_atributo1, "Área");
            valor_atributo1Carta1 = area1;
            valor_atributo1Carta2 = area2;
            break;
        case 3:
            comparacao1 = (pib1>pib2) ? 1:0;
            strcpy(nome_atributo1, "PIB");
            valor_atributo1Carta1 = pib1;
            valor_atributo1Carta2 = pib2;
            break;
        case 4:
            comparacao1 = (pib_per_capita1>pib_per_capita2) ? 1:0;
            strcpy(nome_atributo1, "PIB per capita");
            valor_atributo1Carta1 = pib_per_capita1;
            valor_atributo1Carta2 = pib_per_capita2;
            break;
        case 5:
            comparacao1 = (pontos_turisticos1>pontos_turisticos2) ? 1:0;
            strcpy(nome_atributo1, "Pontos turísticos");
            break;
        case 6:
            comparacao1 = (densidade_pop1<densidade_pop2) ? 1:0;
            strcpy(nome_atributo1, "Densidade demográfica");
            valor_atributo1Carta1 = densidade_pop1;
            valor_atributo1Carta2 = densidade_pop2;
            break;
        default:
            printf("Opção inválida!\n");
            return 1;
    }

    // Switch para a escolha do segundo atributo
    printf("\n======== Escolha o segundo atributo: ========\n");
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
            comparacao2 = (populacao1>populacao2) ? 1:0;
            strcpy(nome_atributo2, "População");
            break;
        case 2:
            comparacao2 = (area1>area2) ? 1:0;
            strcpy(nome_atributo2, "Área");
            valor_atributo2Carta1 = area1;
            valor_atributo2Carta2 = area2;
            break;
        case 3:
            comparacao2 = (pib1>pib2) ? 1:0;
            strcpy(nome_atributo2, "PIB");
            valor_atributo2Carta1 = pib1;
            valor_atributo2Carta2 = pib2;
            break;
        case 4:
            comparacao2 = (pib_per_capita1>pib_per_capita2) ? 1:0;
            strcpy(nome_atributo2, "PIB per capita");
            valor_atributo2Carta1 = pib_per_capita1;
            valor_atributo2Carta2 = pib_per_capita2;
            break;
        case 5:
            comparacao2 = (pontos_turisticos1>pontos_turisticos2) ? 1:0;
            strcpy(nome_atributo2, "Pontos turísticos");
            break;
        case 6:
            comparacao2 = (densidade_pop1<densidade_pop2) ? 1:0;
            strcpy(nome_atributo2, "Densidade demográfica");
            valor_atributo2Carta1 = densidade_pop1;
            valor_atributo2Carta2 = densidade_pop2;
            break;
        default:
            printf("Opção inválida!\n");
            return 1;
    }

    //Bloco abaixo mostra as atributos selecionados da carta 1 x carta 2
    printf("\n==========++ Resultado Final ++==========\n\n");
    printf("%s x %s\n", nome_cidade1, nome_cidade2);
    printf("Atributos escolhidos: %s e %s\n", nome_atributo1, nome_atributo2);
    if (opcao1 == 1) { //Testa se opção1 tem valor 1 (Pontos turisticos), caso verdadeiro mostrará o valor_atributo em formato unsigned long int
        printf("Valores atributos 1: %lu   x   %lu\n", populacao1, populacao2);
    } else if (opcao1 == 5) { // Senão testa se tem valor 5 (População), caso verdadeiro mostrará o valor_atributo em formato int
        printf("Valores atributos 1: %d   x   %d\n", pontos_turisticos1, pontos_turisticos2);
    } else { // Caso não atenda as condições acima, mostrara em formato float
        printf("Valores atributos 1: %.2f   x   %.2f\n", valor_atributo1Carta1, valor_atributo1Carta2);
    }
    // Os mesmos testes do bloco acima, porem referente ao nome_atributo2
    if (opcao2 == 1) {
        printf("Valores atributos 2: %lu   x   %lu\n", populacao1, populacao2);
    } else if (opcao2 == 5) {
        printf("Valores atributos 1: %d   x   %d\n", pontos_turisticos1, pontos_turisticos2);
    } else {
        printf("Valores atributos 2: %.2f   x   %.2f\n", valor_atributo2Carta1, valor_atributo2Carta2);
    }
        
        
    //Resultato final das comparações - Se na comparacao1 e comparacao2 for "verdadeiro" carta 1 vence, se uma das comparações for "falso" é empate, se as forem "falso" Carta 2 Vence
    if (comparacao1 && comparacao2) {
        printf("Vencedor é... CARTA 1!!\n");
    } else if (comparacao1 != comparacao2) {
        printf("Empate!\n");
    } else {
        printf("Vencedor é... CARTA 2!!\n");
    }

    return 0;
}
