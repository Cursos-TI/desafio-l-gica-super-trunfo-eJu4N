#include <stdio.h> 
#include <string.h>


int main() {
    // Definição das variáveis para armazenar as propriedades das cidades
    // Você pode utilizar o código do primeiro desafio

    
    // Cadastro das Cartas:
    // Declaracoes carta 1:
    char estado1;
    char codigo_carta1[10];
    char nome_da_cidade1[50];
    unsigned long int populacao1;
    int numero_pontos_turisticos1;
    float area_km1;
    float pib1;

    // Declaracoes carta 2:
    char estado2;
    char codigo_carta2[10];
    char nome_da_cidade2[50];
    unsigned long int populacao2;
    int numero_pontos_turisticos2;
    float area_km2;
    float pib2;

    
    //Cadastro carta 1:
    printf("Carta 1: \n");
    printf("Digite uma letra(A-H): ");
    scanf(" %c", &estado1);

    printf("Digite o codigo da carta(01-04): ");
    scanf(" %s", codigo_carta1);

    // Limpeza de buffer
    int c;
    while ((c = getchar()) != '\n' && c != EOF);

    printf("Digite o nome da cidade: ");
    fgets(nome_da_cidade1, sizeof(nome_da_cidade1), stdin);
    nome_da_cidade1[strcspn(nome_da_cidade1, "\n")] = '\0';

    printf("Digite a populacao: ");
    scanf(" %ld", &populacao1);


    printf("Digite a area em km²: ");
    scanf(" %f", &area_km1);

    printf("Digite o PIB da cidade: ");
    scanf(" %f", &pib1);

    printf("Digite a quantidade de pontos turisticos da cidade: ");
    scanf(" %d", &numero_pontos_turisticos1);

    //Cadastro carta 2:

    // Limpeza de buffer
    int d;
    while ((d = getchar()) != '\n' && d != EOF);

    printf("Carta 2: \n");
    printf("Digite uma letra(A-H): ");
    scanf(" %c", &estado2);

    

    printf("Digite o codigo da carta(01-04): ");
    scanf(" %s", codigo_carta2);

    // Limpeza de buffer
    int y;
    while ((y = getchar()) != '\n' && y != EOF);
    
    printf("Digite o nome da cidade: ");
    fgets(nome_da_cidade2, sizeof(nome_da_cidade2), stdin);
    nome_da_cidade2[strcspn(nome_da_cidade2, "\n")] = '\0';

    printf("Digite a populacao: ");
    scanf(" %ld", &populacao2);

    // Limpeza de buffer
    // Nao sei porque sem essa limpeza o codigo esta quebrando mesmo lendo somente numeros
    int e;
    while ((e = getchar()) != '\n' && e != EOF);

    printf("Digite a area em km²: ");
    scanf(" %f", &area_km2);

    printf("Digite o PIB da cidade: ");
    scanf(" %f", &pib2);

    printf("Digite a quantidade de pontos turisticos da cidade: ");
    scanf(" %d", &numero_pontos_turisticos2);
    
    // Calculo Densidade populacional:

    float densidade_populacional1;
    float densidade_populacional2;

    densidade_populacional1 = populacao1 / area_km1;
    densidade_populacional2 = populacao2 / area_km2;

    // Calculo PIB per capita:

    float pib_per_capita1;
    float pib_per_capita2;

    pib_per_capita1 = pib1 * 1000000000 / populacao1;
    pib_per_capita2 = pib2 * 1000000000 / populacao2;

    //Menu interativo para escolha de atributos
    int opcao;

    printf("Escolha o atributo a ser comparado: \n");
    printf("Opcao 1 = Nome da cidade (apenas exibir informacoes!)\n");
    printf("Opcao 2 = Populacao\n");
    printf("Opcao 3 = Area\n");
    printf("Opcao 4 = PIB\n");
    printf("Opcao 5 = Número de pontos turísticos\n");
    printf("Opcao 6 = Densidade demográfica\n");
    printf("Digite sua opcao: ");
    scanf("%d", &opcao);
    switch (opcao) {
        case 1:
            printf("Carta 1: %s\n", nome_da_cidade1);
            printf("Carta 2: %s\n", nome_da_cidade2);
        break;

        case 2:
        // Comparação de Cartas(Populacao):
            printf("\n");
            printf("Comparacao de cartas (Atributo: População):\n");

            if (populacao1 > populacao2) {
                printf("Carta 1 - %s: %ld\n", nome_da_cidade1, populacao1);
                printf("Carta 2 - %s: %ld\n",nome_da_cidade2, populacao2);
                printf("\n");
                printf("Carta 1 Venceu!");
            } else {
                printf("Carta 1 - %s: %ld\n", nome_da_cidade1, populacao1);
                printf("Carta 2 - %s: %ld\n", nome_da_cidade2, populacao2);
                printf("\n");
                printf("Carta 2 Venceu!");
            }    
        break;
        case 3:
        // Comparação de Cartas(Area):
            printf("\n");
            printf("Comparacao de cartas(Área): \n");

            if (area_km1 > area_km2) {
                printf("Carta 1 - %s: %.2f\n", nome_da_cidade1, area_km1);
                printf("Carta 2 - %s: %.2f\n", nome_da_cidade2, area_km2);
                printf("\n");
                printf("Carta 1 Venceu!");
            } else {
                printf("Carta 1 - %s: %.2f\n", nome_da_cidade1, area_km1);
                printf("Carta 2 - %s: %.2f\n", nome_da_cidade2, area_km2);
                printf("\n");
                printf("Carta 2 Venceu!");
            }
        break;
        case 4:
            printf("\n");
            printf("Comparacao de cartas(PIB): \n");
            if (pib1 > pib2) {
                printf("Carta 1 - %s: %.2f\n", nome_da_cidade1, pib1);
                printf("Carta 2 - %s: %.2f\n", nome_da_cidade2, pib2);
                printf("\n");
                printf("Carta 1 Venceu!");
            } else {
                printf("Carta 1 - %s: %.2f\n", nome_da_cidade1, pib1);
                printf("Carta 2 - %s: %.2f\n", nome_da_cidade2, pib2);
                printf("\n");
                printf("Carta 2 Venceu!");
            }
        break;
        case 5:
            printf("\n");
            printf("Comparacao de cartas(Numero de pontos turisticos): \n");
            if (numero_pontos_turisticos1 > numero_pontos_turisticos2) {
                printf("Carta 1 - %s: %d\n", nome_da_cidade1, numero_pontos_turisticos1);
                printf("Carta 2 - %s: %d\n", nome_da_cidade2, numero_pontos_turisticos2);
                printf("\n");
                printf("Carta 1 Venceu!");
            } else {
                printf("Carta 1 - %s: %d\n", nome_da_cidade1, numero_pontos_turisticos1);
                printf("Carta 2 - %s: %d\n", nome_da_cidade2, numero_pontos_turisticos2);
                printf("\n");
                printf("Carta 2 Venceu!");
            }
        break;
        case 6:
            printf("\n");
            printf("Comparacao de cartas(Densidade_Populacional): \n");
            if (densidade_populacional1 < densidade_populacional2) {
                printf("Carta 1 - %s: %.2f\n", nome_da_cidade1, densidade_populacional1);
                printf("Carta 2 - %s: %.2f\n", nome_da_cidade2, densidade_populacional2);
                printf("\n");
                printf("Carta 1 Venceu!");
            } else {
                printf("Carta 1 - %s: %.2f\n", nome_da_cidade1, densidade_populacional1);
                printf("Carta 2 - %s: %.2f\n", nome_da_cidade2, densidade_populacional2);
                printf("\n");
                printf("Carta 2 Venceu!");
            }
        break;
        default:
            printf("Opcao invalida!");
    }
    return 0;
}
