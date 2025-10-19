#include <stdio.h>
#include <string.h>

int main() {
    printf("\n===== SUPER TRUNFO - NIVEL MESTRE =====\n");

    char nome1[50] = "Sao Paulo", nome2[50] = "Rio de Janeiro";
    int populacao1 = 12300000, populacao2 = 6748000;
    float area1 = 1521.11, area2 = 1200.27;
    float pib1 = 699.28, pib2 = 364.00;
    int pontos1 = 20, pontos2 = 15;
    float dens1 = populacao1 / area1, dens2 = populacao2 / area2;

    int attr1, attr2;
    float valor1a = 0, valor1b = 0, valor2a = 0, valor2b = 0;

    printf("\nEscolha o primeiro atributo para comparar:\n");
    printf("1-Populacao\n2-Area\n3-PIB\n4-Pontos Turisticos\n5-Densidade\n> ");
    scanf("%d", &attr1);


    printf("\nEscolha o segundo atributo (diferente do primeiro):\n");
    printf("1-Populacao\n2-Area\n3-PIB\n4-Pontos Turisticos\n5-Densidade\n> ");
    scanf("%d", &attr2);

    
    // Função auxiliar: retorna valor com base na escolha
    float getValue(int atributo, int carta) {
        switch (atributo) {
            case 1: return (carta == 1) ? populacao1 : populacao2;
            case 2: return (carta == 1) ? area1 : area2;
            case 3: return (carta == 1) ? pib1 : pib2;
            case 4: return (carta == 1) ? pontos1 : pontos2;
            case 5: return (carta == 1) ? dens1 : dens2;
        }
        return 0;
    }

    // Valores
    valor1a = getValue(attr1, 1);
    valor2a = getValue(attr1, 2);
    valor1b = getValue(attr2, 1);
    valor2b = getValue(attr2, 2);

    // Comparação com ternário
    float soma1 = valor1a + valor1b;
    float soma2 = valor2a + valor2b;

    printf("\n%s => %.2f + %.2f = %.2f\n", nome1, valor1a, valor1b, soma1);
    printf("%s => %.2f + %.2f = %.2f\n", nome2, valor2a, valor2b, soma2);

    (soma1 > soma2) ? printf("\n%s venceu!\n", nome1) :
    (soma2 > soma1) ? printf("\n%s venceu!\n", nome2) :
                      printf("\nEmpate!\n");

    return 0;
}
