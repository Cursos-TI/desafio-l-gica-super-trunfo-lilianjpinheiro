#include <stdio.h>

int main() {

    /*---------- Variáveis da carta 1 ----------*/

    char estado1, codigo1[4], nomeCidade1[50];
    int populacao1, numPontosTuristicos1;
    float area1, pib1, densidade1, pibpercapta1, superpoder1;

    /*---------- Variáveis da carta 2 ----------*/

    char estado2, codigo2[4], nomeCidade2[50];
    int populacao2, numPontosTuristicos2;
    float area2, pib2, densidade2, pibpercapta2, superpoder2;

    /*---------- Entrada de Dados ----------*/

    printf("Cadastro de Cartas do Super Trunfo\n");
    printf("-----------------------------------\n");
    printf("\n");

    // Carta 1
    printf("Digite os dados da Carta 1:\n");
    printf("\n");

    printf("Estado (letra de A a H): ");
    scanf(" %c", &estado1);  // espaço antes do %c para ignorar espaços em branco

    printf("Código da Carta (ex: A01): ");
    scanf("%s", codigo1);

    printf("Nome da Cidade: ");
    scanf(" %[^\n]", nomeCidade1); // lê string com espaços

    printf("População: ");
    scanf("%d", &populacao1);

    printf("Área (em km²): ");
    scanf("%f", &area1);

    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib1);

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &numPontosTuristicos1);


    // Carta 2
    printf("\nDigite os dados da Carta 2:\n");
    printf("\n");

    printf("Estado (letra de A a H): ");
    scanf(" %c", &estado2);

    printf("Código da Carta (ex: B02): ");
    scanf("%s", codigo2);

    printf("Nome da Cidade: ");
    scanf(" %[^\n]", nomeCidade2);

    printf("População: ");
    scanf("%d", &populacao2);

    printf("Área (em km²): ");
    scanf("%f", &area2);

    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib2);

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &numPontosTuristicos2);

    /*---------- Calculos ----------*/

    //Densidade (hab/km²)

    densidade1 = (float)populacao1 / area1;
    densidade2 = (float)populacao2 / area2;

    //PIB per capta (PIB em bilhões * 1.000.000.000) / população - (reais por habitante)

    pibpercapta1 = (pib1 * 1000000000.0f) / (float) populacao1;
    pibpercapta2 = (pib2 * 1000000000.0f) / (float) populacao2;

    // Super Poder:
    // População + área + PIB + pontos + PIB per capita + inverso da densidade
    superpoder1 = (float)populacao1 + area1 + pib1 +(float)numPontosTuristicos1 
                  + pibpercapta1 + (1.0f / densidade1);
    superpoder2 = (float)populacao2 + area2 + pib2 +(float)numPontosTuristicos2 
                  + pibpercapta2 + (1.0f / densidade2);

    /*---------- Exibição das Cartas ----------*/

    printf ("\n===== CARTAS CADASTRADAS =====\n");

    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", numPontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/Km²\n", densidade1);
    printf("PIB per Capta: %.2f reais\n", pibpercapta1);
    printf("Super Poder: %.2f\n", superpoder1);

    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", numPontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/Km²\n", densidade2);
    printf("PIB per Capta: %.2f reais\n", pibpercapta2);
    printf("Super Poder: %.2f\n", superpoder2);

    /*---------- Comparação das Cartas ----------*/
    
    printf("\n===== Comparação de Cartas =====\n");

    // 1 = Carta 1 venceu, 0 = Carta 2 venceu
    if (populacao1 > populacao2){
    printf("População: Carta 1 venceu!\n");
    } else {
    printf("População: Carta 2 venceu!\n");       
    }

    if (area1 > area2){
    printf("Área: Carta 1 venceu!\n");
    } else {
    printf("Área: Carta 2 venceu!\n");
    }

    if (pib1 > pib2){
    printf("PIB: Carta 1 venceu!\n");
    } else {
    printf("PIB: Carta 2 venceu!\n");
    }
   
    if (numPontosTuristicos1 > numPontosTuristicos2){
    printf("Pontos Turísticos: Carta 1 venceu!\n");
    } else {
    printf("Pontos Turísticos: Carta 2 venceu!\n");
    }
   
    // para densidade, menor vence
    if (densidade1 < densidade2){
    printf("Densidade Populacional: Carta 1 Venceu!\n");
    } else {
    printf("Densidade Populacional: Carta 2 Venceu!\n");
    }
        
    if (pibpercapta1 > pibpercapta2){
    printf("PIB per Capita: Carta 1 venceu!\n");
    } else {
    printf("PIB per Capita: Carta 2 venceu!\n");
    }
    
    if (superpoder1 > superpoder2){
    printf("Super Poder: Carta 1 venceu!\n");
    } else {
    printf("Super Poder: Carta 2 venceu!");
    }
    return 0;
}