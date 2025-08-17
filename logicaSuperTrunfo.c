#include <stdio.h>

int main () {

    //DECLARAÇÃO DE VALORES DAS CARTAS
     // CARTA 1 - São Paulo
    char estado1 = 'A';
    char codigoCarta1[4] = "A01";
    char nomeCidade1[60] = "São Paulo";
    long int populacao1 = 12325000;
    int numeroPontosTuristicos1 = 50;
    float area1 = 1521.11f;
    float pib1 = 699.28f;  // bilhões

    float densidadePopulacional1 = (float) populacao1 / area1;
    float pibPerCapita1 = pib1 * 1e9f / (float) populacao1;
    double superPoder1 = (double) populacao1 + area1 + pib1 +
                         numeroPontosTuristicos1 + pibPerCapita1 - densidadePopulacional1;

    // CARTA 2 - Rio de Janeiro
    char estado2 = 'B';
    char codigoCarta2[4] = "B02";
    char nomeCidade2[60] = "Rio de Janeiro";
    long int populacao2 = 6748000;
    int numeroPontosTuristicos2 = 30;
    float area2 = 1200.25f;
    float pib2 = 300.50f;  // bilhões

    float densidadePopulacional2 = (float) populacao2 / area2;
    float pibPerCapita2 = pib2 * 1e9f / (float) populacao2;
    double superPoder2 = (double) populacao2 + area2 + pib2 +
                         numeroPontosTuristicos2 + pibPerCapita2 - densidadePopulacional2;


    //VALIDAÇÃO DE DADOS
    // Validar se foi inserido nos valores de Área um valor zerado
    if (area1 <= 0.0f || area2 <= 0.0f) {
        printf("Erro: área deve ser > 0 para calcular densidade.\n");
        return 1;
    }

    
    // MOSTRAR DADOS DAS CARTAS CADASTRADAS
    // CARTA 1
    printf("\n\n-- CARTA 1 --\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigoCarta1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("População: %ld\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: R$ %.2f bilhões\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", numeroPontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional1);
    printf("PIB per Capita: R$ %.2f por habitante\n", pibPerCapita1);
    printf("Super poder: %.2f \n", superPoder1);

    // CARTA 2
    printf("\n\n-- CARTA 2 --\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigoCarta2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %ld\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: R$ %.2f bilhões\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", numeroPontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional2);
    printf("PIB per Capita: R$ %.2f por habitante\n", pibPerCapita2);
    printf("Super poder: %.2f \n", superPoder2);

    //SWITCH
    int opcao;
    printf("\n\n-- PREPARE-SE PARA A BATALHA! --\n");
    printf("Escolha com qual atributo você vai competir!\n\n");

    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Número de pontos turísticos\n");
    printf("5. Densidade demográfica\n\n");

    printf("Escolha com cautela...\n\n");

    printf("Selecione qual será o seu atributo: \n");
    scanf("%d", &opcao);

    switch (opcao) {
        case 1:
            //POPULAÇÃO
            //Impressão dos Valores das Comparações
            printf("\n\n-- COMPARAÇÃO DAS CARTAS --\n");
            printf("Atributo: População\n");
            printf("Carta 1 - %s (%c): %ld habitantes\n", nomeCidade1, estado1, populacao1);
            printf("Carta 2 - %s (%c): %ld habitantes\n", nomeCidade2, estado2, populacao2);

            if (populacao1==populacao2){
                printf("Empate! Ambas as cidades têm valores iguais de força neste atributo");
            } else {
                if (populacao1>populacao2) {
                    printf("Resultado: Carta 1 (%s) venceu!", nomeCidade1);
                } else {
                    printf("Resultado: Carta 2 (%s) venceu!", nomeCidade2);
                }
            }
            break;
        case 2:
            //ÁREA
            //Impressão dos Valores das Comparações
            printf("\n\n-- COMPARAÇÃO DAS CARTAS --\n");
            printf("Atributo: Área\n");
            printf("Carta 1 - %s (%c): %.2f km²\n", nomeCidade1, estado1, area1);
            printf("Carta 2 - %s (%c): %.2f km²\n", nomeCidade2, estado2, area2);

            if (area1==area2){
                printf("Empate! Ambas as cidades têm valores iguais de força neste atributo");
            } else {
                if (area1>area2) {
                    printf("Resultado: Carta 1 (%s) venceu!", nomeCidade1);
                } else {
                    printf("Resultado: Carta 2 (%s) venceu!", nomeCidade2);
                }
            }
            break;
        case 3:
            //PIB
            //Impressão dos Valores das Comparações
            printf("\n\n-- COMPARAÇÃO DAS CARTAS --\n");
            printf("Atributo: Produto Interno bruto (PIB)\n");
            printf("Carta 1 - %s (%c): R$ %.2f bilhões\n", nomeCidade1, estado1, pib1);
            printf("Carta 2 - %s (%c): R$ %.2f bilhões\n", nomeCidade2, estado2, pib2);

            if (pib1==pib2){
                printf("Empate! Ambas as cidades têm valores iguais de força neste atributo");
            } else {
                if (pib1>pib2) {
                    printf("Resultado: Carta 1 (%s) venceu!", nomeCidade1);
                } else {
                    printf("Resultado: Carta 2 (%s) venceu!", nomeCidade2);
                }
            }
            break;
        case 4:
            //NÚMERO DE PONTOS TURÍSTICOS
            //Impressão dos Valores das Comparações
            printf("\n\n-- COMPARAÇÃO DAS CARTAS --\n");
            printf("Atributo: Número de Pontos Turísticos\n");
            printf("Carta 1 - %s (%c): %d pontos turísticos\n", nomeCidade1, estado1, numeroPontosTuristicos1);
            printf("Carta 2 - %s (%c): %d pontos turísticos\n", nomeCidade2, estado2, numeroPontosTuristicos2);

            if (numeroPontosTuristicos1==numeroPontosTuristicos2){
                printf("Empate! Ambas as cidades têm valores iguais de força neste atributo");
            } else {
                if (numeroPontosTuristicos1>numeroPontosTuristicos2) {
                    printf("Resultado: Carta 1 (%s) venceu!", nomeCidade1);
                } else {
                    printf("Resultado: Carta 2 (%s) venceu!", nomeCidade2);
                }
            }
            break;
        case 5:
            //DENSIDADE DEMOGRÁFICA
            //Impressão dos Valores das Comparações
            printf("\n\n-- COMPARAÇÃO DAS CARTAS --\n");
            printf("Atributo: Densidade Populacional\n");
            printf("Carta 1 - %s (%c): %.2f hab/km²\n", nomeCidade1, estado1, densidadePopulacional1);
            printf("Carta 2 - %s (%c): %.2f hab/km²\n", nomeCidade2, estado2, densidadePopulacional2);

            if (densidadePopulacional1==densidadePopulacional2){
                printf("Empate! Ambas as cidades têm valores iguais de força neste atributo");
            } else {
                if (densidadePopulacional1<densidadePopulacional2) {
                    printf("Resultado: Carta 1 (%s) venceu!", nomeCidade1);
                } else {
                    printf("Resultado: Carta 2 (%s) venceu!", nomeCidade2);
                }
            }
            break;
        default:
            printf("Opção inválida. Tente novamente.\n");
            break;
    }

    

    //ESPAÇAMENTO DE FORMATAÇÃO
    printf("\n\n");


    return 0;

}