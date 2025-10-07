#include <stdio.h> 
#include <string.h>

// Função para comparar a população
void compararPopulacao(unsigned long long int pop1, unsigned long long int pop2, const char* nome1, const char* nome2) {
    printf("\nComparacao de cartas (Atributo: Populacao):\n");
    if (pop1 > pop2) {
        printf("Carta 1 - %s: %llu\n", nome1, pop1);
        printf("Carta 2 - %s: %llu\n", nome2, pop2);
        printf("\nCarta 1 Venceu!\n");
    } else if (pop2 > pop1) {
        printf("Carta 1 - %s: %llu\n", nome1, pop1);
        printf("Carta 2 - %s: %llu\n", nome2, pop2);
        printf("\nCarta 2 Venceu!\n");
    } else {
        printf("Carta 1 - %s: %llu\n", nome1, pop1);
        printf("Carta 2 - %s: %llu\n", nome2, pop2);
        printf("\nEmpate!\n");
    }
}

// Função para comparar a área
void compararArea(float area1, float area2, const char* nome1, const char* nome2) {
    printf("\nComparacao de cartas (Atributo: Area):\n");
    if (area1 > area2) {
        printf("Carta 1 - %s: %.2f\n", nome1, area1);
        printf("Carta 2 - %s: %.2f\n", nome2, area2);
        printf("\nCarta 1 Venceu!\n");
    } else if (area2 > area1) {
        printf("Carta 1 - %s: %.2f\n", nome1, area1);
        printf("Carta 2 - %s: %.2f\n", nome2, area2);
        printf("\nCarta 2 Venceu!\n");
    } else {
        printf("Carta 1 - %s: %.2f\n", nome1, area1);
        printf("Carta 2 - %s: %.2f\n", nome2, area2);
        printf("\nEmpate!\n");
    }
}

// Função para comparar o PIB
void compararPIB(float pib1, float pib2, const char* nome1, const char* nome2) {
    printf("\nComparacao de cartas (Atributo: PIB):\n");
    if (pib1 > pib2) {
        printf("Carta 1 - %s: %.2f\n", nome1, pib1);
        printf("Carta 2 - %s: %.2f\n", nome2, pib2);
        printf("\nCarta 1 Venceu!\n");
    } else if (pib2 > pib1) {
        printf("Carta 1 - %s: %.2f\n", nome1, pib1);
        printf("Carta 2 - %s: %.2f\n", nome2, pib2);
        printf("\nCarta 2 Venceu!\n");
    } else {
        printf("Carta 1 - %s: %.2f\n", nome1, pib1);
        printf("Carta 2 - %s: %.2f\n", nome2, pib2);
        printf("\nEmpate!\n");
    }
}

// Função para comparar o número de pontos turísticos
void compararPontosTuristicos(int pontos1, int pontos2, const char* nome1, const char* nome2) {
    printf("\nComparacao de cartas (Atributo: Numero de pontos turisticos):\n");
    if (pontos1 > pontos2) {
        printf("Carta 1 - %s: %d\n", nome1, pontos1);
        printf("Carta 2 - %s: %d\n", nome2, pontos2);
        printf("\nCarta 1 Venceu!\n");
    } else if (pontos2 > pontos1) {
        printf("Carta 1 - %s: %d\n", nome1, pontos1);
        printf("Carta 2 - %s: %d\n", nome2, pontos2);
        printf("\nCarta 2 Venceu!\n");
    } else {
        printf("Carta 1 - %s: %d\n", nome1, pontos1);
        printf("Carta 2 - %s: %d\n", nome2, pontos2);
        printf("\nEmpate!\n");
    }
}

// Função para comparar a densidade demográfica (lembre-se: menor densidade vence)
void compararDensidade(float densidade1, float densidade2, const char* nome1, const char* nome2) {
    printf("\nComparacao de cartas (Atributo: Densidade demografica):\n");
    if (densidade1 < densidade2) {
        printf("Carta 1 - %s: %.2f\n", nome1, densidade1);
        printf("Carta 2 - %s: %.2f\n", nome2, densidade2);
        printf("\nCarta 1 Venceu!\n");
    } else if (densidade2 < densidade1) {
        printf("Carta 1 - %s: %.2f\n", nome1, densidade1);
        printf("Carta 2 - %s: %.2f\n", nome2, densidade2);
        printf("\nCarta 2 Venceu!\n");
    } else {
        printf("Carta 1 - %s: %.2f\n", nome1, densidade1);
        printf("Carta 2 - %s: %.2f\n", nome2, densidade2);
        printf("\nEmpate!\n");
    }
}

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
    int opcao1, opcao2;
    float soma_atributos1, soma_atributos2;
    soma_atributos1 = 0.0f;
    soma_atributos2 = 0.0f;
    
    printf("\nEscolha dois atributos a ser comparado: \n");
    printf("Opcao 1 = Nome da cidade (apenas exibir informacoes!)\n");
    printf("Opcao 2 = Populacao\n");
    printf("Opcao 3 = Area\n");
    printf("Opcao 4 = PIB\n");
    printf("Opcao 5 = Número de pontos turísticos\n");
    printf("Opcao 6 = Densidade demográfica\n");
    printf("Digite sua primeira opcao: ");
    scanf("%d", &opcao1);

    switch (opcao1) {
    case 1:
        printf("\nEscolha dois atributos a ser comparado: \n");
        printf("Opcao 2 = Populacao\n");
        printf("Opcao 3 = Area\n");
        printf("Opcao 4 = PIB\n");
        printf("Opcao 5 = Número de pontos turísticos\n");
        printf("Opcao 6 = Densidade demográfica\n");
        printf("Digite sua segunda opcao: ");
        scanf("%d", &opcao2);

        switch (opcao2) {
        case 1:
        //Opcao repetida
            printf("Voce ja digitou esta opcao!\n");
            break;
        case 2:
        //Opcao 1 + 2 (nome da cidades + comparacao populacao)
            printf("Nome da cidade (Apenas informacao!): \n");
            printf("Carta 1: %s\n", nome_da_cidade1);
            printf("Carta 2: %s\n", nome_da_cidade2);

            soma_atributos1 = soma_atributos1 + (float)populacao1;
            soma_atributos2 = soma_atributos2 + (float)populacao2;

            printf("\n--- Comparacao do segundo atributo ---\n");
            compararPopulacao(populacao1, populacao2, nome_da_cidade1, nome_da_cidade2);
            break;
        case 3:
        //Opcao 1 + 3(nome da cidades + comparacao area)
            printf("Nome da cidade (Apenas informacao!): \n");
            printf("Carta 1: %s\n", nome_da_cidade1);
            printf("Carta 2: %s\n", nome_da_cidade2);

            soma_atributos1 = soma_atributos1 + (float)area_km1;
            soma_atributos2 = soma_atributos2 + (float)area_km2;

            printf("\n--- Comparacao do segundo atributo ---\n");
            compararArea(area_km1, area_km2, nome_da_cidade1, nome_da_cidade2);
            break;
        case 4:
        //Opcao 1 + 4 (nome da cidades + comparacao PIB)
            printf("Nome da cidade (Apenas informacao!): \n");
            printf("Carta 1: %s\n", nome_da_cidade1);
            printf("Carta 2: %s\n", nome_da_cidade2);

            soma_atributos1 = soma_atributos1 + ((float)pib1 * 1000000000);
            soma_atributos2 = soma_atributos2 + ((float)pib2 * 1000000000);

            printf("\n--- Comparacao do segundo atributo ---\n");
            compararPIB(pib1, pib2, nome_da_cidade1, nome_da_cidade2);
            break;
        case 5:
        //Opcao 1 + 5 (nome da cidades + comparacao numeros  de pontos turisticos)
            printf("Nome da cidade (Apenas informacao!): \n");
            printf("Carta 1: %s\n", nome_da_cidade1);
            printf("Carta 2: %s\n", nome_da_cidade2);

            soma_atributos1 = soma_atributos1 + (float)numero_pontos_turisticos1;
            soma_atributos2 = soma_atributos2 + (float)numero_pontos_turisticos2;
            
            printf("\n--- Comparacao do segundo atributo ---\n");        
            compararPontosTuristicos(numero_pontos_turisticos1, numero_pontos_turisticos2, nome_da_cidade1, nome_da_cidade2);
            break;
        case 6:
        //Opcao 1 + 6 (nome da cidades + comparacao densidade demografica)
            printf("Nome da cidade (Apenas informacao!): \n");
            printf("Carta 1: %s\n", nome_da_cidade1);
            printf("Carta 2: %s\n", nome_da_cidade2);

            soma_atributos1 = soma_atributos1 + (float)densidade_populacional1;
            soma_atributos2 = soma_atributos2 + (float)densidade_populacional2; 

            printf("\n--- Comparacao do segundo atributo ---\n");
            compararDensidade(densidade_populacional1, densidade_populacional2, nome_da_cidade1, nome_da_cidade2);
            break;
        default:
            printf("Opcao invalida!\n");
            break;
        }
        break;
    case 2:
        printf("\nEscolha dois atributos a ser comparado: \n");
        printf("Opcao 1 = Nome da cidade (apenas exibir informacoes!)\n");
        printf("Opcao 3 = Area\n");
        printf("Opcao 4 = PIB\n");
        printf("Opcao 5 = Número de pontos turísticos\n");
        printf("Opcao 6 = Densidade demográfica\n");
        printf("Digite sua segunda opcao: ");
        scanf("%d", &opcao2);

        switch (opcao2) {
        case 1:
        //Opcao 2 + 1  (Comparacao populacao + Nome da cidade)
            soma_atributos1 = soma_atributos1 + (float)populacao1;
            soma_atributos2 = soma_atributos2 + (float)populacao2;    

            printf("\n--- Comparacao do primeiro atributo ---\n");
            compararPopulacao(populacao1, populacao2, nome_da_cidade1, nome_da_cidade2);

            printf("Nome da cidade (Apenas informacao!): \n");
            printf("Carta 1: %s\n", nome_da_cidade1);
            printf("Carta 2: %s\n", nome_da_cidade2);
            
            break;
        case 2:
        //Opcao repetida (Comparacao populacao + Comparacao populacao)
            printf("Voce ja digitou esta opcao!\n");
            break;
        case 3:
        //Opcao 2 + 3 (Comparacao populacao + comparacao area)
            soma_atributos1 = soma_atributos1 + (float)populacao1;
            soma_atributos2 = soma_atributos2 + (float)populacao2;
            soma_atributos1 = soma_atributos1 + (float)area_km1;
            soma_atributos2 = soma_atributos2 + (float)area_km2;

            printf("\n\n--- RESULTADO FINAL DA RODADA ---");
            printf("\nCarta 1 (%s): Soma dos atributos = %.2f", nome_da_cidade1, soma_atributos1);
            printf("\nCarta 2 (%s): Soma dos atributos = %.2f\n", nome_da_cidade2, soma_atributos2);

            if (soma_atributos1 > soma_atributos2) {
                printf("\n>>> CARTA 1 VENCEU! <<<\n");
            } else if (soma_atributos2 > soma_atributos1) {
                printf("\n>>> CARTA 2 VENCEU! <<<\n");
            } else {
                printf("\n>>> EMPATE! <<<\n");
            }
            break;
        case 4:
        //Opcao 2 + 4 (Comparacao populacao + comparacao PIB)
            soma_atributos1 = soma_atributos1 + (float)populacao1;
            soma_atributos2 = soma_atributos2 + (float)populacao2;

            soma_atributos1 = soma_atributos1 + ((float)pib1 * 1000000000);
            soma_atributos2 = soma_atributos2 + ((float)pib2 * 1000000000);

            printf("\n\n--- RESULTADO FINAL DA RODADA ---");
            printf("\nCarta 1 (%s): Soma dos atributos = %.2f", nome_da_cidade1, soma_atributos1);
            printf("\nCarta 2 (%s): Soma dos atributos = %.2f\n", nome_da_cidade2, soma_atributos2);

            if (soma_atributos1 > soma_atributos2) {
                printf("\n>>> CARTA 1 VENCEU! <<<\n");
            } else if (soma_atributos2 > soma_atributos1) {
                printf("\n>>> CARTA 2 VENCEU! <<<\n");
            } else {
                printf("\n>>> EMPATE! <<<\n");
            }
        break;
            break;
        case 5:
        //Opcao 2 + 5 (Comparacao populacao + comparacao numeros  de pontos turisticos)
            soma_atributos1 = soma_atributos1 + (float)populacao1;
            soma_atributos2 = soma_atributos2 + (float)populacao2;

            soma_atributos1 = soma_atributos1 + (float)numero_pontos_turisticos1;
            soma_atributos2 = soma_atributos2 + (float)numero_pontos_turisticos2;

            printf("\n\n--- RESULTADO FINAL DA RODADA ---");
            printf("\nCarta 1 (%s): Soma dos atributos = %.2f", nome_da_cidade1, soma_atributos1);
            printf("\nCarta 2 (%s): Soma dos atributos = %.2f\n", nome_da_cidade2, soma_atributos2);

            if (soma_atributos1 > soma_atributos2) {
                printf("\n>>> CARTA 1 VENCEU! <<<\n");
            } else if (soma_atributos2 > soma_atributos1) {
                printf("\n>>> CARTA 2 VENCEU! <<<\n");
            } else {
                printf("\n>>> EMPATE! <<<\n");
            }
            break;
        case 6:
        //Opcao 2 + 6(Comparacao populacao + comparacao densidade demografica)
            soma_atributos1 = soma_atributos1 + (float)populacao1;
            soma_atributos2 = soma_atributos2 + (float)populacao2;

            soma_atributos1 = soma_atributos1 + (float)densidade_populacional1;
            soma_atributos2 = soma_atributos2 + (float)densidade_populacional2;
            
            printf("\n\n--- RESULTADO FINAL DA RODADA ---");
            printf("\nCarta 1 (%s): Soma dos atributos = %.2f", nome_da_cidade1, soma_atributos1);
            printf("\nCarta 2 (%s): Soma dos atributos = %.2f\n", nome_da_cidade2, soma_atributos2);

            if (soma_atributos1 > soma_atributos2) {
                printf("\n>>> CARTA 1 VENCEU! <<<\n");
            } else if (soma_atributos2 > soma_atributos1) {
                printf("\n>>> CARTA 2 VENCEU! <<<\n");
            } else {
                printf("\n>>> EMPATE! <<<\n");
            }
            break;
        default:
            printf("Opcao invalida!\n");
            break;
        }
        break;
    case 3:
        printf("\nEscolha dois atributos a ser comparado: \n");
        printf("Opcao 1 = Nome da cidade (apenas exibir informacoes!)\n");
        printf("Opcao 2 = Populacao\n");
        printf("Opcao 4 = PIB\n");
        printf("Opcao 5 = Número de pontos turísticos\n");
        printf("Opcao 6 = Densidade demográfica\n");
        printf("Digite sua segunda opcao: ");
        scanf("%d", &opcao2);

        switch (opcao2) {
        case 1:
            //Opcao 3 + 1 (Comparacao Area + Nomes da cidade)
            soma_atributos1 = soma_atributos1 + (float)area_km1;
            soma_atributos2 = soma_atributos2 + (float)area_km2;

            printf("\n--- Comparacao do primeiro atributo ---\n");
            compararArea(area_km1, area_km2, nome_da_cidade1, nome_da_cidade2);

            printf("Nome da cidade (Apenas informacao!): \n");
            printf("Carta 1: %s\n", nome_da_cidade1);
            printf("Carta 2: %s\n", nome_da_cidade2);
            break;
        case 2:
            //Opcao 3 + 2 (Comparacao Area + Comparacao Populacao)
            soma_atributos1 = soma_atributos1 + (float)area_km1;
            soma_atributos2 = soma_atributos2 + (float)area_km2;

            soma_atributos1 = soma_atributos1 + (float)populacao1;
            soma_atributos2 = soma_atributos2 + (float)populacao2;

            printf("\n\n--- RESULTADO FINAL DA RODADA ---");
            printf("\nCarta 1 (%s): Soma dos atributos = %.2f", nome_da_cidade1, soma_atributos1);
            printf("\nCarta 2 (%s): Soma dos atributos = %.2f\n", nome_da_cidade2, soma_atributos2);

            if (soma_atributos1 > soma_atributos2) {
                printf("\n>>> CARTA 1 VENCEU! <<<\n");
            } else if (soma_atributos2 > soma_atributos1) {
                printf("\n>>> CARTA 2 VENCEU! <<<\n");
            } else {
                printf("\n>>> EMPATE! <<<\n");
            }
            break;
        case 3:
            //Opcao 3 + 3 (Comparacao Area + Comparacao Area) Repetida
            printf("Opcao ja escolhida!");
            break;
        case 4:
            //Opcao 3 + 4 (Comparacao Area + Comparacao PIB
            soma_atributos1 = soma_atributos1 + (float)area_km1;
            soma_atributos2 = soma_atributos2 + (float)area_km2;

            soma_atributos1 = soma_atributos1 + ((float)pib1 * 1000000000);
            soma_atributos2 = soma_atributos2 + ((float)pib2 * 1000000000);
            
            printf("\n\n--- RESULTADO FINAL DA RODADA ---");
            printf("\nCarta 1 (%s): Soma dos atributos = %.2f", nome_da_cidade1, soma_atributos1);
            printf("\nCarta 2 (%s): Soma dos atributos = %.2f\n", nome_da_cidade2, soma_atributos2);

            if (soma_atributos1 > soma_atributos2) {
                printf("\n>>> CARTA 1 VENCEU! <<<\n");
            } else if (soma_atributos2 > soma_atributos1) {
                printf("\n>>> CARTA 2 VENCEU! <<<\n");
            } else {
                printf("\n>>> EMPATE! <<<\n");
            }
            break;
        case 5:
            //Opcao 3 + 5 (Comparacao Area + Comparacao Número de pontos turísticos)
            soma_atributos1 = soma_atributos1 + (float)area_km1;
            soma_atributos2 = soma_atributos2 + (float)area_km2;

            soma_atributos1 = soma_atributos1 + (float)numero_pontos_turisticos1;
            soma_atributos2 = soma_atributos2 + (float)numero_pontos_turisticos2;

            printf("\n\n--- RESULTADO FINAL DA RODADA ---");
            printf("\nCarta 1 (%s): Soma dos atributos = %.2f", nome_da_cidade1, soma_atributos1);
            printf("\nCarta 2 (%s): Soma dos atributos = %.2f\n", nome_da_cidade2, soma_atributos2);

            if (soma_atributos1 > soma_atributos2) {
                printf("\n>>> CARTA 1 VENCEU! <<<\n");
            } else if (soma_atributos2 > soma_atributos1) {
                printf("\n>>> CARTA 2 VENCEU! <<<\n");
            } else {
                printf("\n>>> EMPATE! <<<\n");
            }
            break;
        case 6:
            //Opcao 3 + 6 (Comparacao Area + Comparacao Densidade demográfica)
            soma_atributos1 = soma_atributos1 + (float)area_km1;
            soma_atributos2 = soma_atributos2 + (float)area_km2;

            soma_atributos1 = soma_atributos1 + (float)densidade_populacional1;
            soma_atributos2 = soma_atributos2 + (float)densidade_populacional2;

            printf("\n\n--- RESULTADO FINAL DA RODADA ---");
            printf("\nCarta 1 (%s): Soma dos atributos = %.2f", nome_da_cidade1, soma_atributos1);
            printf("\nCarta 2 (%s): Soma dos atributos = %.2f\n", nome_da_cidade2, soma_atributos2);

            if (soma_atributos1 > soma_atributos2) {
                printf("\n>>> CARTA 1 VENCEU! <<<\n");
            } else if (soma_atributos2 > soma_atributos1) {
                printf("\n>>> CARTA 2 VENCEU! <<<\n");
            } else {
                printf("\n>>> EMPATE! <<<\n");
            }
            break;
        default:
            printf("Opcao invalida");
            break;
        }
        break;
    case 4:
        printf("\nEscolha dois atributos a ser comparado: \n");
        printf("Opcao 1 = Nome da cidade (apenas exibir informacoes!)\n");
        printf("Opcao 2 = Populacao\n");
        printf("Opcao 3 = Area\n");
        printf("Opcao 5 = Número de pontos turísticos\n");
        printf("Opcao 6 = Densidade demográfica\n");
        printf("Digite sua segunda opcao: ");
        scanf("%d", &opcao2);

        switch (opcao2) {
        case 1:
        //Opcao 4 + 1
            soma_atributos1 = soma_atributos1 + ((float)pib1 * 1000000000);
            soma_atributos2 = soma_atributos2 + ((float)pib2 * 1000000000);

            printf("\n--- Comparacao do primeiro atributo ---\n");
            compararPIB(pib1, pib2, nome_da_cidade1, nome_da_cidade2);

            printf("Nome da cidade (Apenas informacao!): \n");
            printf("Carta 1: %s\n", nome_da_cidade1);
            printf("Carta 2: %s\n", nome_da_cidade2);
            break;
        case 2:
        //Opcao 4 + 2
            soma_atributos1 = soma_atributos1 + ((float)pib1 * 1000000000);
            soma_atributos2 = soma_atributos2 + ((float)pib2 * 1000000000);

            soma_atributos1 = soma_atributos1 + (float)populacao1;
            soma_atributos2 = soma_atributos2 + (float)populacao2;

            printf("\n\n--- RESULTADO FINAL DA RODADA ---");
            printf("\nCarta 1 (%s): Soma dos atributos = %.2f", nome_da_cidade1, soma_atributos1);
            printf("\nCarta 2 (%s): Soma dos atributos = %.2f\n", nome_da_cidade2, soma_atributos2);

            if (soma_atributos1 > soma_atributos2) {
                printf("\n>>> CARTA 1 VENCEU! <<<\n");
            } else if (soma_atributos2 > soma_atributos1) {
                printf("\n>>> CARTA 2 VENCEU! <<<\n");
            } else {
                printf("\n>>> EMPATE! <<<\n");
            }
            break;
        case 3:
        //Opcao 4 + 3
            soma_atributos1 = soma_atributos1 + ((float)pib1 * 1000000000);
            soma_atributos2 = soma_atributos2 + ((float)pib2 * 1000000000);

            soma_atributos1 = soma_atributos1 + (float)area_km1;
            soma_atributos2 = soma_atributos2 + (float)area_km2;

            printf("\n\n--- RESULTADO FINAL DA RODADA ---");
            printf("\nCarta 1 (%s): Soma dos atributos = %.2f", nome_da_cidade1, soma_atributos1);
            printf("\nCarta 2 (%s): Soma dos atributos = %.2f\n", nome_da_cidade2, soma_atributos2);

            if (soma_atributos1 > soma_atributos2) {
                printf("\n>>> CARTA 1 VENCEU! <<<\n");
            } else if (soma_atributos2 > soma_atributos1) {
                printf("\n>>> CARTA 2 VENCEU! <<<\n");
            } else {
                printf("\n>>> EMPATE! <<<\n");
            }
            break;
        case 4:
            //opcao repetida
            printf("Opcao ja escolhida!\n");
            break;
        case 5:
        //Opcao 4 + 5
            soma_atributos1 = soma_atributos1 + ((float)pib1 * 1000000000);
            soma_atributos2 = soma_atributos2 + ((float)pib2 * 1000000000);

            soma_atributos1 = soma_atributos1 + (float)numero_pontos_turisticos1;
            soma_atributos2 = soma_atributos2 + (float)numero_pontos_turisticos2;

            printf("\n\n--- RESULTADO FINAL DA RODADA ---");
            printf("\nCarta 1 (%s): Soma dos atributos = %.2f", nome_da_cidade1, soma_atributos1);
            printf("\nCarta 2 (%s): Soma dos atributos = %.2f\n", nome_da_cidade2, soma_atributos2);

            if (soma_atributos1 > soma_atributos2) {
                printf("\n>>> CARTA 1 VENCEU! <<<\n");
            } else if (soma_atributos2 > soma_atributos1) {
                printf("\n>>> CARTA 2 VENCEU! <<<\n");
            } else {
                printf("\n>>> EMPATE! <<<\n");
            }
            break;
        case 6:
        //Opcao 4 + 6   
            soma_atributos1 = soma_atributos1 + ((float)pib1 * 1000000000);
            soma_atributos2 = soma_atributos2 + ((float)pib2 * 1000000000);

            soma_atributos1 = soma_atributos1 + (float)densidade_populacional1;
            soma_atributos2 = soma_atributos2 + (float)densidade_populacional2;

            printf("\n\n--- RESULTADO FINAL DA RODADA ---");
            printf("\nCarta 1 (%s): Soma dos atributos = %.2f", nome_da_cidade1, soma_atributos1);
            printf("\nCarta 2 (%s): Soma dos atributos = %.2f\n", nome_da_cidade2, soma_atributos2);

            if (soma_atributos1 > soma_atributos2) {
                printf("\n>>> CARTA 1 VENCEU! <<<\n");
            } else if (soma_atributos2 > soma_atributos1) {
                printf("\n>>> CARTA 2 VENCEU! <<<\n");
            } else {
                printf("\n>>> EMPATE! <<<\n");
            }
            break;
        default:
            printf("Opcao invalida\n");
            break;
        }
        break;
    case 5:
        printf("\nEscolha dois atributos a ser comparado: \n");
        printf("Opcao 1 = Nome da cidade (apenas exibir informacoes!)\n");
        printf("Opcao 2 = Populacao\n");
        printf("Opcao 3 = Area\n");
        printf("Opcao 4 = PIB\n");
        printf("Opcao 6 = Densidade demográfica\n");
        printf("Digite sua segunda opcao: ");
        scanf("%d", &opcao2);

        switch (opcao2)
        {
        case 1:
            //Opcao 5 + 1
            soma_atributos1 = soma_atributos1 + (float)numero_pontos_turisticos1;
            soma_atributos2 = soma_atributos2 + (float)numero_pontos_turisticos2;

            printf("\n--- Comparacao do primeiro atributo ---\n");
            compararPontosTuristicos(numero_pontos_turisticos1, numero_pontos_turisticos2, nome_da_cidade1, nome_da_cidade2);

            printf("Nome da cidade (Apenas informacao!): \n");
            printf("Carta 1: %s\n", nome_da_cidade1);
            printf("Carta 2: %s\n", nome_da_cidade2);
            break;
        case 2:
            //Opcao 5 + 2
            soma_atributos1 = soma_atributos1 + (float)numero_pontos_turisticos1;
            soma_atributos2 = soma_atributos2 + (float)numero_pontos_turisticos2;

            soma_atributos1 = soma_atributos1 + (float)populacao1;
            soma_atributos2 = soma_atributos2 + (float)populacao2;
            
            printf("\n\n--- RESULTADO FINAL DA RODADA ---");
            printf("\nCarta 1 (%s): Soma dos atributos = %.2f", nome_da_cidade1, soma_atributos1);
            printf("\nCarta 2 (%s): Soma dos atributos = %.2f\n", nome_da_cidade2, soma_atributos2);

            if (soma_atributos1 > soma_atributos2) {
                printf("\n>>> CARTA 1 VENCEU! <<<\n");
            } else if (soma_atributos2 > soma_atributos1) {
                printf("\n>>> CARTA 2 VENCEU! <<<\n");
            } else {
                printf("\n>>> EMPATE! <<<\n");
            }
            break;
        case 3:
            //Opcao 5 + 3
            soma_atributos1 = soma_atributos1 + (float)numero_pontos_turisticos1;
            soma_atributos2 = soma_atributos2 + (float)numero_pontos_turisticos2;

            soma_atributos1 = soma_atributos1 + (float)area_km1;
            soma_atributos2 = soma_atributos2 + (float)area_km2;
            
            printf("\n\n--- RESULTADO FINAL DA RODADA ---");
            printf("\nCarta 1 (%s): Soma dos atributos = %.2f", nome_da_cidade1, soma_atributos1);
            printf("\nCarta 2 (%s): Soma dos atributos = %.2f\n", nome_da_cidade2, soma_atributos2);

            if (soma_atributos1 > soma_atributos2) {
                printf("\n>>> CARTA 1 VENCEU! <<<\n");
            } else if (soma_atributos2 > soma_atributos1) {
                printf("\n>>> CARTA 2 VENCEU! <<<\n");
            } else {
                printf("\n>>> EMPATE! <<<\n");
            }
            break;
        case 4:
            //Opcao 5 + 4
            soma_atributos1 = soma_atributos1 + (float)numero_pontos_turisticos1;
            soma_atributos2 = soma_atributos2 + (float)numero_pontos_turisticos2;

            soma_atributos1 = soma_atributos1 + ((float)pib1 * 1000000000);
            soma_atributos2 = soma_atributos2 + ((float)pib2 * 1000000000);

            printf("\n\n--- RESULTADO FINAL DA RODADA ---");
            printf("\nCarta 1 (%s): Soma dos atributos = %.2f", nome_da_cidade1, soma_atributos1);
            printf("\nCarta 2 (%s): Soma dos atributos = %.2f\n", nome_da_cidade2, soma_atributos2);

            if (soma_atributos1 > soma_atributos2) {
                printf("\n>>> CARTA 1 VENCEU! <<<\n");
            } else if (soma_atributos2 > soma_atributos1) {
                printf("\n>>> CARTA 2 VENCEU! <<<\n");
            } else {
                printf("\n>>> EMPATE! <<<\n");
            }
            break;
        case 5:
            //Opcao repetida 
            printf("Opcao ja escolhida!");            
            break;
        case 6:
            //Opcao 5 + 6
            soma_atributos1 = soma_atributos1 + (float)numero_pontos_turisticos1;
            soma_atributos2 = soma_atributos2 + (float)numero_pontos_turisticos2;

            soma_atributos1 = soma_atributos1 + (float)densidade_populacional1;
            soma_atributos2 = soma_atributos2 + (float)densidade_populacional2;

            printf("\n\n--- RESULTADO FINAL DA RODADA ---");
            printf("\nCarta 1 (%s): Soma dos atributos = %.2f", nome_da_cidade1, soma_atributos1);
            printf("\nCarta 2 (%s): Soma dos atributos = %.2f\n", nome_da_cidade2, soma_atributos2);

            if (soma_atributos1 > soma_atributos2) {
                printf("\n>>> CARTA 1 VENCEU! <<<\n");
            } else if (soma_atributos2 > soma_atributos1) {
                printf("\n>>> CARTA 2 VENCEU! <<<\n");
            } else {
                printf("\n>>> EMPATE! <<<\n");
            }
            break;
        default:
            printf("Opcao invalida!");
            break;
        }
        break;
    case 6:
        printf("\nEscolha dois atributos a ser comparado: \n");
        printf("Opcao 1 = Nome da cidade (apenas exibir informacoes!)\n");
        printf("Opcao 2 = Populacao\n");
        printf("Opcao 3 = Area\n");
        printf("Opcao 4 = PIB\n");
        printf("Opcao 5 = Número de pontos turísticos\n");
        printf("Digite sua segunda opcao: ");
        scanf("%d", &opcao2);
        break;
        
        switch (opcao2)
        {
        case 1:
            //Opcao 6 + 1
            soma_atributos1 = soma_atributos1 + (float)densidade_populacional1;
            soma_atributos2 = soma_atributos2 + (float)densidade_populacional2;

            printf("\n--- Comparacao do primeiro atributo ---\n");
            compararDensidade(densidade_populacional1, densidade_populacional2, nome_da_cidade1, nome_da_cidade2);

            printf("Nome da cidade (Apenas informacao!): \n");
            printf("Carta 1: %s\n", nome_da_cidade1);
            printf("Carta 2: %s\n", nome_da_cidade2);
            break;
        case 2:
            //Opcao 6 + 2
            soma_atributos1 = soma_atributos1 + (float)densidade_populacional1;
            soma_atributos2 = soma_atributos2 + (float)densidade_populacional2;

            soma_atributos1 = soma_atributos1 + (float)populacao1;
            soma_atributos2 = soma_atributos2 + (float)populacao2;

            printf("\n\n--- RESULTADO FINAL DA RODADA ---");
            printf("\nCarta 1 (%s): Soma dos atributos = %.2f", nome_da_cidade1, soma_atributos1);
            printf("\nCarta 2 (%s): Soma dos atributos = %.2f\n", nome_da_cidade2, soma_atributos2);

            if (soma_atributos1 > soma_atributos2) {
                printf("\n>>> CARTA 1 VENCEU! <<<\n");
            } else if (soma_atributos2 > soma_atributos1) {
                printf("\n>>> CARTA 2 VENCEU! <<<\n");
            } else {
                printf("\n>>> EMPATE! <<<\n");
            }
            break;
        case 3:
            //Opcao 6 + 3
            soma_atributos1 = soma_atributos1 + (float)densidade_populacional1;
            soma_atributos2 = soma_atributos2 + (float)densidade_populacional2;

            soma_atributos1 = soma_atributos1 + (float)area_km1;
            soma_atributos2 = soma_atributos2 + (float)area_km2;

            printf("\n\n--- RESULTADO FINAL DA RODADA ---");
            printf("\nCarta 1 (%s): Soma dos atributos = %.2f", nome_da_cidade1, soma_atributos1);
            printf("\nCarta 2 (%s): Soma dos atributos = %.2f\n", nome_da_cidade2, soma_atributos2);

            if (soma_atributos1 > soma_atributos2) {
                printf("\n>>> CARTA 1 VENCEU! <<<\n");
            } else if (soma_atributos2 > soma_atributos1) {
                printf("\n>>> CARTA 2 VENCEU! <<<\n");
            } else {
                printf("\n>>> EMPATE! <<<\n");
            }
            break;
        case 4:
            //Opcao 6 + 4
            soma_atributos1 = soma_atributos1 + (float)densidade_populacional1;
            soma_atributos2 = soma_atributos2 + (float)densidade_populacional2;

            soma_atributos1 = soma_atributos1 + ((float)pib1 * 1000000000);
            soma_atributos2 = soma_atributos2 + ((float)pib2 * 1000000000);

            printf("\n\n--- RESULTADO FINAL DA RODADA ---");
            printf("\nCarta 1 (%s): Soma dos atributos = %.2f", nome_da_cidade1, soma_atributos1);
            printf("\nCarta 2 (%s): Soma dos atributos = %.2f\n", nome_da_cidade2, soma_atributos2);

            if (soma_atributos1 > soma_atributos2) {
                printf("\n>>> CARTA 1 VENCEU! <<<\n");
            } else if (soma_atributos2 > soma_atributos1) {
                printf("\n>>> CARTA 2 VENCEU! <<<\n");
            } else {
                printf("\n>>> EMPATE! <<<\n");
            }
            break;
        case 5:
            //Opcao 6 + 5
            soma_atributos1 = soma_atributos1 + (float)densidade_populacional1;
            soma_atributos2 = soma_atributos2 + (float)densidade_populacional2;

            soma_atributos1 = soma_atributos1 + (float)numero_pontos_turisticos1;
            soma_atributos2 = soma_atributos2 + (float)numero_pontos_turisticos2;

            printf("\n\n--- RESULTADO FINAL DA RODADA ---");
            printf("\nCarta 1 (%s): Soma dos atributos = %.2f", nome_da_cidade1, soma_atributos1);
            printf("\nCarta 2 (%s): Soma dos atributos = %.2f\n", nome_da_cidade2, soma_atributos2);

            if (soma_atributos1 > soma_atributos2) {
                printf("\n>>> CARTA 1 VENCEU! <<<\n");
            } else if (soma_atributos2 > soma_atributos1) {
                printf("\n>>> CARTA 2 VENCEU! <<<\n");
            } else {
                printf("\n>>> EMPATE! <<<\n");
            }
            break;
        case 6:
            //Opcao repetida 
            printf("Opcao ja escolhida!");
            break;
        default:
            printf("Opcao invalida!");
            break;
        }
    default:
        printf("Opcao invalida!");
        break;
    }
}