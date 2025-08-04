#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Variáveis da primeira cidade
    char estado1;
    char codigo_carta1[4];
    char nome_cidade1[30];
    unsigned long int populacao1;
    float area1;
    float densidade_pop1;
    float pib1;
    float pib_per_capita1;
    int pontos_turisticos1;
    float super_poder1;

    // Variáveis da segunda cidade
    char estado2;
    char codigo_carta2[4];
    char nome_cidade2[30];
    unsigned long int populacao2;
    float area2;
    float densidade_pop2;
    float pib2;
    float pib_per_capita2;
    int pontos_turisticos2;
    float super_poder2;

    //Cadastrando as cartas do jogo

    // Cadastro da carta 1
    printf("\n++++ Olá, bem-vindo ao Super Trunfo! ++++\n\nCadastre a primeira carta.\n\n");

    printf("Digite uma letra entre A e H para representar o estado da cidade: ");
    scanf(" %c", &estado1);

    printf("Digite o código da carta (ex: 01): ");
    scanf("%s", codigo_carta1);

    printf("Digite o nome da cidade: ");
    scanf(" %29[^\n]", nome_cidade1);

    printf("Digite a população da cidade: ");
    scanf("%lu", &populacao1);

    printf("Digite o tamanho da área da cidade (em km²): ");
    scanf("%f", &area1);

    printf("Digite o valor do PIB da cidade (em bilhoes): R$ ");
    scanf("%f", &pib1);

    printf("Digite a quantidade de pontos turísticos da cidade: ");
    scanf("%d", &pontos_turisticos1);
    
    //Calculos de densidade populacional, PIP per capita e Super Poder - Cidade 1
    
    //Para a densidade populacional, é calculado (População / área)
    densidade_pop1 = populacao1 / area1;
    //Para mostrar o PIP per capita, é feito calculo (PIP / população x 1bilhão)
    pib_per_capita1 = (pib1 * 1000000000.0f)/populacao1;
    //Para mostrar o Super Poder
    super_poder1 = (float)populacao1 + area1 + pib1 + pontos_turisticos1 + pib_per_capita1 +(1.0f / densidade_pop1);

    // Cadastro da carta 2
    printf("\n\nCadastre a segunda carta.\n\n");

    printf("Digite uma letra entre A e H para representar o estado da cidade: ");
    scanf(" %c", &estado2);

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

    //Calculos de densidade populacional, PIP per capita e Super Poder - Cidade 2

    //Para a densidade populacional, é calculado (População / área)
    densidade_pop2 = populacao2 / area2;
    //Para mostrar o PIP per capita, é feito calculo (PIP / população x 1bilhão)
    pib_per_capita2 = (pib2 * 1000000000.f)/populacao2;
    //Para calcular o Super Poder
    super_poder2 = (float)populacao2 + area2 + pib2 + pontos_turisticos2 + pib_per_capita2 +(1.0f / densidade_pop2);


    printf("===================== Resultado =====================\n\n");

    printf("Qual o maior PIP per capita ?\n\n");
    printf("Carta 1 - %s: R$ %2.f\n",nome_cidade1,pib_per_capita1);
    printf("Carta 2 - %s: R$ %2.f\n",nome_cidade2,pib_per_capita2);
    
    //Teste para saber a carta vencedora
    if (pib_per_capita1 > pib_per_capita2){ // Caso o pib per capital da carta 1 seja maior que carta 2, Carta 1 Vence
        printf("Carta 1(%s) é a vencedora !\n",nome_cidade1);
    } else if (pib_per_capita2 > pib_per_capita1) {// Caso o pib per capital da carta 2 seja maior que carta 1, Carta 2 Vence
        printf("Carta 2(%s) é a vencedora !\n",nome_cidade2);
        }
        else{// Se ambos os teste são falsos, ouve um empate
            printf("Ambas a cartas tem o mesmo PIB per capita\n");
        }
 

    return 0;
}
