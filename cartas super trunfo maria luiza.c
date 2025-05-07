cartas super trunfo
#include <stdio.h>
// Definição da struct para armazenar os dados 
struct Cidade {
    char codigo [10];
    char nome[50];
    int população;
    float area;
    float pib;
    int pontosTuristicos;
};
int main() {
//Carta 1 - Rio de Janeiro
struct Cidade cidade = {
    "C01",              //codigo
    "Rio de Janeiro",   //nome
    6748000,            //população
    1182.3,            //area
    364.5,             //PIB 
    25                //pontosturisticos


};
//Carta 2 - Salvador
struct Cidade cidade2 = {
    "C02",         //Codigo
    "Salvador",   // nome
    2887000,      //população
    693.8,        //area
    85.2,         //PIN
    18           //pontosturisticos
};

//Exibindo os dados da carta 1
printf("\n--- Carta da Cidade Cadastrada ---\n");
printf("Codigo:%s\n", cidade1.codigo);
printf("nome:%s\n", cidade1.nome);
printf("população:%\n", cidade1.população);
printf("area: %.2f km²\n", cidade1.pib);
printf("Pontos Turisticos: %d\n, cidade1.pontosTuristicos"); 

//Exibindo dados da carta 2 
printf("\n--- Carta2 ---\n");
printf("Codigo: %s\n", cidade2.codigo);
printf("Nome: %s\n", cidade2.nome);
printf("População: %d\n", cidade2.população);
printf("Área: %.2f km²\n";cidade2.Área);
printf("PIB: %.2f bilhões\n, cidade2.pin");
printf("Pontos Turisticos: %d\n", cidade2.pontosTuristicos);

return 0;
}
