#include <stdio.h>

int main() {
    printf("\n===== SUPER TRUNFO - NÍVEL MESTRE =====\n");

    //Declaração das variáveis

    // Cartas pré-definidas
    char nome1[50] = "Brasil", nome2[50] = "Argentina";
    int populacao1 = 213000000, populacao2 = 47680000;
    float area1 = 85160.00, area2 = 27800.00;
    float pib1 = 230.00, pib2 = 550.00;
    int pontos1 = 6500, pontos2 = 2480;
    float densidade1 = populacao1 / area1;
    float densidade2 = populacao2 / area2;

    int atributo1 = 0, atributo2 = 0;
    int pontosCarta1 = 0, pontosCarta2 = 0;
    float soma1 = 0, soma2 = 0;
    float val1, val2;
    char nomeAtributo1[30], nomeAtributo2[30];

    // ---------- Escolha do primeiro atributo ----------
    printf("\nEscolha o primeiro atributo para comparar:\n");
    printf("1 - Populacao\n2 - Area\n3 - PIB\n4 - Pontos Turisticos\n5 - Densidade Demografica\n");
    printf("Opcao: ");
    scanf("%d", &atributo1);

    if (atributo1 < 1 || atributo1 > 5) {
        printf("Opcao invalida! O primeiro atributo sera 1 - Populacao.\n");
        atributo1 = 1;
    }

    // ---------- Escolha do segundo atributo ----------
    printf("\nEscolha o segundo atributo (diferente do primeiro):\n");
    if (atributo1 != 1) printf("1 - Populacao\n");
    if (atributo1 != 2) printf("2 - Area\n");
    if (atributo1 != 3) printf("3 - PIB\n");
    if (atributo1 != 4) printf("4 - Pontos Turisticos\n");
    if (atributo1 != 5) printf("5 - Densidade Demografica\n");
    printf("Opcao: ");
    scanf("%d", &atributo2);

    if (atributo2 < 1 || atributo2 > 5 || atributo2 == atributo1) {
        printf("Opcao invalida! O segundo atributo sera definido automaticamente.\n");
        if (atributo1 != 1) atributo2 = 1;
        else if (atributo1 != 2) atributo2 = 2;
        else if (atributo1 != 3) atributo2 = 3;
        else if (atributo1 != 4) atributo2 = 4;
        else atributo2 = 5;
    }

    // ---------- Nomes dos atributos ----------
    switch (atributo1) {
        case 1: sprintf(nomeAtributo1, "Populacao"); break;
        case 2: sprintf(nomeAtributo1, "Area"); break;
        case 3: sprintf(nomeAtributo1, "PIB"); break;
        case 4: sprintf(nomeAtributo1, "Pontos Turisticos"); break;
        case 5: sprintf(nomeAtributo1, "Densidade Demografica"); break;
    }
    switch (atributo2) {
        case 1: sprintf(nomeAtributo2, "Populacao"); break;
        case 2: sprintf(nomeAtributo2, "Area"); break;
        case 3: sprintf(nomeAtributo2, "PIB"); break;
        case 4: sprintf(nomeAtributo2, "Pontos Turisticos"); break;
        case 5: sprintf(nomeAtributo2, "Densidade Demografica"); break;
    }

    // ---------- Cabeçalho ----------
    printf("\n===================================\n");
    printf("     SUPER TRUNFO - COMPARAÇÃO      \n");
    printf("===================================\n");
    printf("Cartas: %s x %s\n", nome1, nome2);
    printf("Atributos escolhidos: %s | %s\n", nomeAtributo1, nomeAtributo2);
    printf("===================================\n");

    // ---------- Comparação do primeiro atributo ----------
    printf("\n--- %s ---\n", nomeAtributo1);
    if (atributo1 == 1) { val1 = populacao1; val2 = populacao2; printf("%s: %.0f habitantes\n%s: %.0f habitantes\n", nome1, val1, nome2, val2);}
    else if (atributo1 == 2) { val1 = area1; val2 = area2; printf("%s: %.2f km²\n%s: %.2f km²\n", nome1, val1, nome2, val2);}
    else if (atributo1 == 3) { val1 = pib1; val2 = pib2; printf("%s: %.2f Bilhoes\n%s: %.2f Bilhoes\n", nome1, val1, nome2, val2);}
    else if (atributo1 == 4) { val1 = pontos1; val2 = pontos2; printf("%s: %.0f pontos\n%s: %.0f pontos\n", nome1, val1, nome2, val2);}
    else { val1 = densidade1; val2 = densidade2; printf("%s: %.2f hab/km²\n%s: %.2f hab/km²\n", nome1, val1, nome2, val2);}

    if (atributo1 == 5) { soma1 += 100000/val1; soma2 += 100000/val2; }
    else { soma1 += val1; soma2 += val2; }

    if ((atributo1 != 5 && val1 > val2) || (atributo1 == 5 && val1 < val2)) { printf("Vencedor: %s\n", nome1); pontosCarta1++; }
    else if ((atributo1 != 5 && val2 > val1) || (atributo1 == 5 && val2 < val1)) { printf("Vencedor: %s\n", nome2); pontosCarta2++; }
    else printf("Empate!\n");

    // ---------- Comparação do segundo atributo ----------
    printf("\n--- %s ---\n", nomeAtributo2);
    if (atributo2 == 1) { val1 = populacao1; val2 = populacao2; printf("%s: %.0f habitantes\n%s: %.0f habitantes\n", nome1, val1, nome2, val2);}
    else if (atributo2 == 2) { val1 = area1; val2 = area2; printf("%s: %.2f km²\n%s: %.2f km²\n", nome1, val1, nome2, val2);}
    else if (atributo2 == 3) { val1 = pib1; val2 = pib2; printf("%s: %.2f Bilhoes\n%s: %.2f Bilhoes\n", nome1, val1, nome2, val2);}
    else if (atributo2 == 4) { val1 = pontos1; val2 = pontos2; printf("%s: %.0f pontos\n%s: %.0f pontos\n", nome1, val1, nome2, val2);}
    else { val1 = densidade1; val2 = densidade2; printf("%s: %.2f hab/km²\n%s: %.2f hab/km²\n", nome1, val1, nome2, val2);}

    if (atributo2 == 5) { soma1 += 100000/val1; soma2 += 100000/val2; }
    else { soma1 += val1; soma2 += val2; }

    if ((atributo2 != 5 && val1 > val2) || (atributo2 == 5 && val1 < val2)) { printf("Vencedor: %s\n", nome1); pontosCarta1++; }
    else if ((atributo2 != 5 && val2 > val1) || (atributo2 == 5 && val2 < val1)) { printf("Vencedor: %s\n", nome2); pontosCarta2++; }
    else printf("Empate!\n");

    // ---------- Resultado final ----------
    printf("\n===================================\n");
    printf("              RESULTADO FINAL       \n");
    printf("===================================\n");
    printf("%s: %d pontos | Soma dos atributos: %.2f\n", nome1, pontosCarta1, soma1);
    printf("%s: %d pontos | Soma dos atributos: %.2f\n", nome2, pontosCarta2, soma2);

    if (soma1 > soma2) printf("Vencedor da rodada: %s\n", nome1);
    else if (soma2 > soma1) printf("Vencedor da rodada: %s\n", nome2);
    else printf("Empate na rodada!\n");
    printf("===================================\n");

    return 0;
}
