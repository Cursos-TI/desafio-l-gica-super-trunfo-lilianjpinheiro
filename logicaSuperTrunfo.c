#include <stdio.h>
#include <string.h>

int main() {
    // --- Nível Novato: Comparação simples ---
    printf("====== SUPER TRUNFO - NIVEL NOVATO =====\n");

    // Estrutura das cartas
    char estado1[3] = "SP", nomeCidade1[50] = "Sao Paulo";
    int populacao1 = 12300000, pontosTuristicos1 = 20;
    float area1 = 1521.11, pib1 = 699.28;

    char estado2[3] = "RJ", nomeCidade2[50] = "Rio de Janeiro";
    int populacao2 = 6748000, pontosTuristicos2 = 15;
    float area2 = 1200.27, pib2 = 364.00;

    // Cálculos adicionais
    float densidade1 = populacao1 / area1;
    float densidade2 = populacao2 / area2;
    float pibPerCapita1 = pib1 / populacao1;
    float pibPerCapita2 = pib2 / populacao2;

    // Escolha fixa de atributo (exemplo: População)
    printf("\nComparacao de Cartas (Atributo: Populacao)\n");
    printf("%s (%s): %d habitantes\n", nomeCidade1, estado1, populacao1);
    printf("%s (%s): %d habitantes\n\n", nomeCidade2, estado2, populacao2);

    if (populacao1 > populacao2) {
        printf("Resultado: %s venceu!\n", nomeCidade1);
    } else if (populacao2 > populacao1) {
        printf("Resultado: %s venceu!\n", nomeCidade2);
    } else {
        printf("Empate!\n");
    }

    return 0;
}