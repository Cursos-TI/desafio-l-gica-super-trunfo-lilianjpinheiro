#include <stdio.h>
#include <string.h>

int main() {
    // --- Nível Aventureiro: Menu interativo ---
    printf("\n===== SUPER TRUNFO - NIVEL AVENTUREIRO =====\n");

    // Cartas pré-definidas
    char nome1[50] = "Sao Paulo", nome2[50] = "Rio de Janeiro";
    int populacao1 = 12300000, populacao2 = 6748000;
    float area1 = 1521.11, area2 = 1200.27;
    float pib1 = 699.28, pib2 = 364.00;
    int pontos1 = 20, pontos2 = 15;
    float densidade1 = populacao1 / area1;
    float densidade2 = populacao2 / area2;

    int opcao;
    printf("\nEscolha o atributo para comparar:\n");
    printf("1 - Populacao\n2 - Area\n3 - PIB\n4 - Pontos Turisticos\n5 - Densidade Demografica\n");
    printf("Opcao: ");
    scanf("%d", &opcao);

    switch (opcao) {
        case 1:
            printf("\nComparacao: Populacao\n");
            if (populacao1 > populacao2)
                printf("%s venceu!\n", nome1);
            else if (populacao2 > populacao1)
                printf("%s venceu!\n", nome2);
            else
                printf("Empate!\n");
            break;

        case 2:
            printf("\nComparacao: Area\n");
            if (area1 > area2)
                printf("%s venceu!\n", nome1);
            else if (area2 > area1)
                printf("%s venceu!\n", nome2);
            else
                printf("Empate!\n");
            break;

        case 3:
            printf("\nComparacao: PIB\n");
            if (pib1 > pib2)
                printf("%s venceu!\n", nome1);
            else if (pib2 > pib1)
                printf("%s venceu!\n", nome2);
            else
                printf("Empate!\n");
            break;

        case 4:
            printf("\nComparacao: Pontos Turisticos\n");
            if (pontos1 > pontos2)
                printf("%s venceu!\n", nome1);
            else if (pontos2 > pontos1)
                printf("%s venceu!\n", nome2);
            else
                printf("Empate!\n");
            break;

        case 5:
            printf("\nComparacao: Densidade Demografica\n");
            if (densidade1 < densidade2)
                printf("%s venceu!\n", nome1);
            else if (densidade2 < densidade1)
                printf("%s venceu!\n", nome2);
            else
                printf("Empate!\n");
            break;

        default:
            printf("\nOpcao invalida! Tente novamente.\n");
    }

    return 0;
}
