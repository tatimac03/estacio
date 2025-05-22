#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
//  Cada país está dividido em 8 estados
// Cada Estado tem 4 cidades 
// A carta tem que ser identificada por um código
// Criar uma estrutura, pra nao ter que ta repetindo as variaveis porque pode ficar confuso.
/* modelo aula 
carta 1: 
    estado : a
    codigo: a01
    nome : (lembrar de nao usar nome composto)
    populacao: 
    area: km2
    pib:
    numero de pontos turisticos: 

 NIVEL AVENTUREIRO 
  - acrescentar densidade populacional populacao/area
  - acrescentar PIB per capita pib/populacao 
  - e apresentar na saide de dados 
  - tentar usar funcoes (primeira aula aventureiro)


*/


// Função para calcular a densidade populacional
float calculo_densidade(float populacao, float area) {
    return populacao / area;
}

// Função para calcular o PIB per capita
float calculo_percapita(float pib, float populacao) {
    return pib / populacao;
}

// Estrutura da carta
struct carta_estrutura {
    char estado[25];
    char codigo[4]; 
    char cidade[25];
    float populacao;
    float area;
    float pib;
    int pontos_turisticos;
};

int main() {
    struct carta_estrutura carta_1, carta_2;

    printf(">>> Cadastro da Primeira Carta <<<\n");
    printf(" Observação: Use ponto (.) para separar casas decimais.\n");
    printf("Informe o PIB em milhões. Ex.: 17.6 significa 17,6 milhões.\n\n");

    // Dados da primeira carta
    printf("Estado: ");
    scanf(" %s", carta_1.estado);

    printf("Código da Cidade (ex.: A01): ");
    scanf(" %s", carta_1.codigo);

    printf("Cidade: ");
    scanf(" %s", carta_1.cidade);

    printf("População: ");
    scanf(" %f", &carta_1.populacao);

    printf("Área (em Km²): ");
    scanf(" %f", &carta_1.area);

    printf("PIB (em milhões): ");
    scanf(" %f", &carta_1.pib);

    printf("Quantidade de Pontos Turísticos: ");
    scanf(" %d", &carta_1.pontos_turisticos);

    // Dados da segunda carta
    printf("\n>>> Cadastro da Segunda Carta <<<\n");

    printf("Estado: ");
    scanf(" %s", carta_2.estado);

    printf("Código da Cidade (ex.: B01): ");
    scanf(" %s", carta_2.codigo);

    printf("Cidade: ");
    scanf(" %s", carta_2.cidade);

    printf("População: ");
    scanf(" %f", &carta_2.populacao);

    printf("Área (em Km²): ");
    scanf(" %f", &carta_2.area);

    printf("PIB (em milhões): ");
    scanf(" %f", &carta_2.pib);

    printf("Quantidade de Pontos Turísticos: ");
    scanf(" %d", &carta_2.pontos_turisticos);

    // Cálculos
    float densidade_1 = calculo_densidade(carta_1.populacao, carta_1.area);
    float pib_percapita_1 = calculo_percapita(carta_1.pib * 1000000, carta_1.populacao); // Convertendo PIB para unidades

    float densidade_2 = calculo_densidade(carta_2.populacao, carta_2.area);
    float pib_percapita_2 = calculo_percapita(carta_2.pib * 1000000, carta_2.populacao); // Convertendo PIB para unidades

    // Impressão dos dados
    printf("\n\n------- CARTAS CADASTRADAS -------\n");

    printf("\n>>> Primeira Carta <<<\n");
    printf("Estado: %s\n", carta_1.estado);
    printf("Código da Cidade: %s\n", carta_1.codigo);
    printf("Cidade: %s\n", carta_1.cidade);
    printf("População: %.0f habitantes\n", carta_1.populacao);
    printf("Área: %.2f Km²\n", carta_1.area);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_1);
    printf("PIB: %.2f milhões\n", carta_1.pib);
    printf("PIB per capita: %.2f\n", pib_percapita_1);
    printf("Pontos Turísticos: %d\n", carta_1.pontos_turisticos);

    printf("\n>>> Segunda Carta <<<\n");
    printf("Estado: %s\n", carta_2.estado);
    printf("Código da Cidade: %s\n", carta_2.codigo);
    printf("Cidade: %s\n", carta_2.cidade);
    printf("População: %.0f habitantes\n", carta_2.populacao);
    printf("Área: %.2f Km²\n", carta_2.area);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_2);
    printf("PIB: %.2f milhões\n", carta_2.pib);
    printf("PIB per capita: %.2f\n", pib_percapita_2);
    printf("Pontos Turísticos: %d\n", carta_2.pontos_turisticos);

    return 0;
}

