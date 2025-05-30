#include <stdio.h>

// Definição da struct Cidade
struct Cidade {
    char codigo[10];
    char nome[50];
    int populacao;
    float area;
    float pib;
    int pontosTuristicos;
    float densidadePopulacional;
    float pibPerCapita;
    float superPoder;
};

int main() {
    // Carta 1 - Rio de Janeiro
    struct Cidade cidade1 = {
        "C01", "Rio de Janeiro", 6748000, 
        1182.3,
         364.5, 
         25,
         0.0,
         0.0, 
         0.0
    };

    // Carta 2 - Salvador
    struct Cidade cidade2 = {
        "C02", 
        "Salvador", 
        2887000, 
        693.8, 
        85.2, 
        18, 
        0.0, 
        0.0, 
        0.0
    };

    // Calculando densidade populacional e PIB per capita para cidade1
    cidade1.densidadePopulacional = cidade1.populacao / cidade1.area;
    cidade1.pibPerCapita = cidade1.pib * 1000000 / cidade1.populacao; // PIB em milhões de reais

    // Calculando densidade populacional e PIB per capita para cidade2
    cidade2.densidadePopulacional = cidade2.populacao / cidade2.area;
    cidade2.pibPerCapita = cidade2.pib * 1000000 / cidade2.populacao; // PIB em milhões de reais

    // Calculando Super Poder para cidade1
    cidade1.superPoder = cidade1.populacao + cidade1.area + cidade1.pib + cidade1.pontosTuristicos +
                         (1 / cidade1.densidadePopulacional) + cidade1.pibPerCapita;

    // Calculando Super Poder para cidade2
    cidade2.superPoder = cidade2.populacao + cidade2.area + cidade2.pib + cidade2.pontosTuristicos +
                         (1 / cidade2.densidadePopulacional) + cidade2.pibPerCapita;

    // Comparando atributos e exibindo resultados
    printf("\n--- Comparação de Cartas ---\n");

    // Comparação População
    printf("População: ");
    printf("Carta 1 venceu (%d)\n", cidade1.populacao > cidade2.populacao);

    // Comparação Área
    printf("Área: ");
    printf("Carta 1 venceu (%d)\n", cidade1.area > cidade2.area);

    // Comparação PIB
    printf("PIB: ");
    printf("Carta 1 venceu (%d)\n", cidade1.pib > cidade2.pib);

    // Comparação Pontos Turísticos
    printf("Pontos Turísticos: ");
    printf("Carta 1 venceu (%d)\n", cidade1.pontosTuristicos > cidade2.pontosTuristicos);

    // Comparação Densidade Populacional
    printf("Densidade Populacional: ");
    printf("Carta 1 venceu (%d)\n", cidade1.densidadePopulacional < cidade2.densidadePopulacional);

    // Comparação PIB per Capita
    printf("PIB per Capita: ");
    printf("Carta 1 venceu (%d)\n", cidade1.pibPerCapita > cidade2.pibPerCapita);

    // Comparação Super Poder
    printf("Super Poder: ");
    printf("Carta 1 venceu (%d)\n", cidade1.superPoder > cidade2.superPoder);

    //exibindo carta 1
    printf("\n--- Carta 1 ---\n");
    printf("Código: %s\n", cidade1.codigo);
    printf("Nome da Cidade: %s\n", cidade1.nome);
    printf("População: %d\n", cidade1.populacao);
    printf("Área: %.2f km²\n", cidade1.area);
    printf("PIB: %.2f bilhões de reais\n", cidade1.pib);
    printf("Número de Pontos Turísticos: %d\n", cidade1.pontosTuristicos);
    printf("Densidade Populacional: %.2f hab/km²\n", cidade1.densidadePopulacional);
    printf("PIB per Capita: %.2f reais\n", cidade1.pibPerCapita);
    printf("Super Poder: %.2f\n", cidade1.superPoder);

    // Exibindo carta 2
    printf("\n--- Carta 2 ---\n");
    printf("Código: %s\n", cidade2.codigo);
    printf("Nome da Cidade: %s\n", cidade2.nome);
    printf("População: %d\n", cidade2.populacao);
    printf("Área: %.2f km²\n", cidade2.area);
    printf("PIB: %.2f bilhões de reais\n", cidade2.pib);
    printf("Número de Pontos Turísticos: %d\n", cidade2.pontosTuristicos);
    printf("Densidade Populacional: %.2f hab/km²\n", cidade2.densidadePopulacional);
    printf("PIB per Capita: %.2f reais\n", cidade2.pibPerCapita);
    printf("Super Poder: %.2f\n", cidade2.superPoder);

    return 0;
}
//Fim do código
