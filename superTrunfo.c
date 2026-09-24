#include <stdio.h>
#include <string.h>

struct Carta {
    char estado;
    char codigo[4];
    char nomeCidade[100];
    unsigned long int populacao;
    double area;
    double pib;
    int pontosTuristicos;
    double densidadePopulacional;
    double pibPerCapita;
    double superPoder;
};

int main() {

    struct Carta carta1, carta2;

    char *resultado[] = {
        "Carta 2 venceu",
        "Carta 1 venceu"
    };

    /* =========================
       CADASTRO CARTA 1
    ========================== */

    printf("=================================\n");
    printf("     CADASTRO DA CARTA 1\n");
    printf("=================================\n");

    printf("Digite o estado (A-H): ");
    scanf(" %c", &carta1.estado);

    printf("Digite o codigo da carta: ");
    scanf("%3s", carta1.codigo);

    getchar();

    printf("Digite o nome da cidade: ");
    fgets(carta1.nomeCidade, sizeof(carta1.nomeCidade), stdin);
    carta1.nomeCidade[strcspn(carta1.nomeCidade, "\n")] = 0;

    printf("Digite a populacao: ");
    scanf("%lu", &carta1.populacao);

    printf("Digite a area da cidade: ");
    scanf("%lf", &carta1.area);

    printf("Digite o PIB: ");
    scanf("%lf", &carta1.pib);

    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &carta1.pontosTuristicos);

    /* CALCULOS CARTA 1 */

    carta1.densidadePopulacional =
        (double)carta1.populacao / carta1.area;

    carta1.pibPerCapita =
        (carta1.pib * 1000000000.0) / carta1.populacao;

    carta1.superPoder =
        carta1.populacao +
        carta1.area +
        carta1.pib +
        carta1.pontosTuristicos +
        carta1.pibPerCapita +
        (1.0 / carta1.densidadePopulacional);

    /* =========================
       EXIBICAO CARTA 1
    ========================== */

    printf("\n=================================\n");
    printf("       DADOS DA CARTA 1\n");
    printf("=================================\n");

    printf("Estado: %c\n", carta1.estado);
    printf("Codigo: %s\n", carta1.codigo);
    printf("Cidade: %s\n", carta1.nomeCidade);
    printf("Populacao: %lu\n", carta1.populacao);
    printf("Area: %.2lf\n", carta1.area);
    printf("PIB: %.2lf\n", carta1.pib);
    printf("Pontos Turisticos: %d\n", carta1.pontosTuristicos);
    printf("Densidade Populacional: %.2lf\n", carta1.densidadePopulacional);
    printf("PIB per Capita: %.2lf\n", carta1.pibPerCapita);
    printf("Super Poder: %.2lf\n", carta1.superPoder);

    /* =========================
       CADASTRO CARTA 2
    ========================== */

    printf("\n=================================\n");
    printf("     CADASTRO DA CARTA 2\n");
    printf("=================================\n");

    printf("Digite o estado (A-H): ");
    scanf(" %c", &carta2.estado);

    printf("Digite o codigo da carta: ");
    scanf("%3s", carta2.codigo);

    getchar();

    printf("Digite o nome da cidade: ");
    fgets(carta2.nomeCidade, sizeof(carta2.nomeCidade), stdin);
    carta2.nomeCidade[strcspn(carta2.nomeCidade, "\n")] = 0;

    printf("Digite a populacao: ");
    scanf("%lu", &carta2.populacao);

    printf("Digite a area da cidade: ");
    scanf("%lf", &carta2.area);

    printf("Digite o PIB: ");
    scanf("%lf", &carta2.pib);

    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &carta2.pontosTuristicos);

    /* CALCULOS CARTA 2 */

    carta2.densidadePopulacional =
        (double)carta2.populacao / carta2.area;

    carta2.pibPerCapita =
        (carta2.pib * 1000000000.0) / carta2.populacao;

    carta2.superPoder =
        carta2.populacao +
        carta2.area +
        carta2.pib +
        carta2.pontosTuristicos +
        carta2.pibPerCapita +
        (1.0 / carta2.densidadePopulacional);

    /* =========================
       EXIBICAO CARTA 2
    ========================== */

    printf("\n=================================\n");
    printf("       DADOS DA CARTA 2\n");
    printf("=================================\n");

    printf("Estado: %c\n", carta2.estado);
    printf("Codigo: %s\n", carta2.codigo);
    printf("Cidade: %s\n", carta2.nomeCidade);
    printf("Populacao: %lu\n", carta2.populacao);
    printf("Area: %.2lf\n", carta2.area);
    printf("PIB: %.2lf\n", carta2.pib);
    printf("Pontos Turisticos: %d\n", carta2.pontosTuristicos);
    printf("Densidade Populacional: %.2lf\n", carta2.densidadePopulacional);
    printf("PIB per Capita: %.2lf\n", carta2.pibPerCapita);
    printf("Super Poder: %.2lf\n", carta2.superPoder);

    /* =========================
       COMPARACAO
    ========================== */

    int categoria;

    printf("\n=================================\n");
    printf("     COMPARACAO DE CARTAS\n");
    printf("=================================\n");

    printf("Escolha uma categoria:\n");
    printf("1 - Populacao\n");
    printf("2 - Area\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turisticos\n");
    printf("5 - Densidade Populacional\n");
    printf("6 - PIB per Capita\n");
    printf("7 - Super Poder\n");

    printf("Digite a opcao desejada: ");
    scanf("%d", &categoria);

    printf("\n=================================\n");
    printf("          RESULTADO\n");
    printf("=================================\n");

    switch (categoria) {

        case 1:
            if (carta1.populacao == carta2.populacao)
                printf("Empate em Populacao!\n");
            else
                printf("Populacao: %s\n",
                    resultado[carta1.populacao > carta2.populacao]);
            break;

        case 2:
            if (carta1.area == carta2.area)
                printf("Empate em Area!\n");
            else
                printf("Area: %s\n",
                    resultado[carta1.area > carta2.area]);
            break;

        case 3:
            if (carta1.pib == carta2.pib)
                printf("Empate em PIB!\n");
            else
                printf("PIB: %s\n",
                    resultado[carta1.pib > carta2.pib]);
            break;

        case 4:
            if (carta1.pontosTuristicos == carta2.pontosTuristicos)
                printf("Empate em Pontos Turisticos!\n");
            else
                printf("Pontos Turisticos: %s\n",
                    resultado[carta1.pontosTuristicos > carta2.pontosTuristicos]);
            break;

        case 5:
            if (carta1.densidadePopulacional ==
                carta2.densidadePopulacional)
                printf("Empate em Densidade Populacional!\n");
            else
                printf("Densidade Populacional: %s\n",
                    resultado[carta1.densidadePopulacional <
                    carta2.densidadePopulacional]);
            break;

        case 6:
            if (carta1.pibPerCapita == carta2.pibPerCapita)
                printf("Empate em PIB per Capita!\n");
            else
                printf("PIB per Capita: %s\n",
                    resultado[carta1.pibPerCapita >
                    carta2.pibPerCapita]);
            break;

        case 7:
            if (carta1.superPoder == carta2.superPoder)
                printf("Empate em Super Poder!\n");
            else
                printf("Super Poder: %s\n",
                    resultado[carta1.superPoder >
                    carta2.superPoder]);
            break;

        default:
            printf("Opcao invalida.\n");
    }

    return 0;
}