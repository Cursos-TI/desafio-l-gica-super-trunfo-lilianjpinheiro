#include <stdio.h>

int main() {
    // --- Nível Aventureiro: Menu interativo ---
    printf("\n===== SUPER TRUNFO - NIVEL AVENTUREIRO =====\n");

    /*---------- Declaracao das Variáveis ----------*/
    // Cartas pré-definidas
    char nome1[50] = "Brasil", nome2[50] = "Argentina";
    int populacao1 = 213000000, populacao2 = 47680000;
    float area1 = 85160.00, area2 = 27800.00;
    float pib1 = 230.00, pib2 = 550.00;
    int pontos1 = 6500, pontos2 = 2480;
    float densidade1 = populacao1 / area1;
    float densidade2 = populacao2 / area2;

    int opcao;
    printf("\nEscolha o atributo para comparar:\n");
    printf("1 - Populacao\n2 - Area\n3 - PIB\n4 - Pontos Turisticos\n5 - Densidade Demografica\n");
    printf("Opcao: ");
    scanf("%d", &opcao);
    
    printf("===================================\n");
    printf("Países: %s x %s\n", nome1, nome2);
    printf("===================================\n");

    switch (opcao) {      
    
        case 1:
            printf("Comparacao: Populacao\n");
            printf("\nCarta 1 - %s: %d habitantes\n", nome1, populacao1);
            printf("Carta 2 - %s: %d habitantes\n", nome2, populacao2);

            if (populacao1 > populacao2){
                printf("%s venceu!\n", nome1);
            } else if (populacao2 > populacao1){
                printf("%s venceu!\n", nome2);
            } else {
                printf("Empate!\n"); }
            printf("===================================\n");
            break;

        case 2:
            printf("\nComparacao: Área\n");

            printf("\nCarta 1 - %s: %.2f km²\n", nome1, area1);
            printf("Carta 2 - %s: %.2f km²\n", nome2, area2);

            if (area1 > area2) {
            printf("Resultado: %s venceu!\n", nome1);
            } else if (area2 > area1) {
            printf("Resultado: %s venceu!\n", nome2);
            } else {
            printf("Resultado: Empate!\n");
            }
            printf("===================================\n");
            break;

        case 3:
            printf("\nComparacao: PIB\n");

            printf("\nCarta 1 - %s: %.2f Bilhões de Reais\n", nome1, pib1);
            printf("Carta 2 - %s: %.2f Bilhões de Reais\n", nome2, pib2);
            if (pib1 > pib2) {
                printf("%s venceu!\n", nome1);
            } else if (pib2 > pib1) {
                printf("%s venceu!\n", nome2);
            } else {
                printf("Empate!\n"); }
            printf("===================================\n");
            break;

        case 4:
            printf("\nComparacao: Pontos Turísticos\n");

            printf("\nCarta 1 - %s: %d Pontos Tuísticos\n", nome1, pontos1);
            printf("Carta 2 - %s: %d Pontos Turísticos\n", nome2, pontos2);
            if (pontos1 > pontos2) {
                printf("%s venceu!\n", nome1);
            } else if (pontos2 > pontos1) {
                printf("%s venceu!\n", nome2);
            } else {
                printf("Empate!\n"); }
            printf("===================================\n");
            break;

        case 5:
            printf("\nComparacao: Densidade Populacional\n");

            printf("\nCarta 1 - %s: %.2f hab/km²\n", nome1, densidade1);
            printf("Carta 2 - %s: %.2f hab/km²\n", nome2, densidade2);
            if (densidade1 < densidade2) {
                printf("%s venceu!\n", nome1);
            } else if (densidade2 < densidade1){
                printf("%s venceu!\n", nome2);
            } else {
                printf("Empate!\n"); }
            printf("===================================\n");
            break;
            
        default:
            printf("\nOpcao invalida! Tente novamente.\n");
    }
    return 0;
}
