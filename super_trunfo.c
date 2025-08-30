#include <stdio.h>
int main (){

//variáveis 1 carta

    char estado1;
    char codigo1[3];
    char cidade1[20];
    int populacao1;
    float areakm1;
    float pib1;
    int pontosturisticos1;

//variáveis 2 carta

    char estado2;
    char codigo2[3];
    char cidade2[20];
    int populacao2;
    float areakm2;
    float pib2;

    /*Banco de dados da primeira carta*/

    printf ("Insira os dados para a Carta N1\n");
    printf ("Estado (A-H): "); 
    scanf ("  %c", &estado1);


    printf ("Código da carta (exA01): \n");
    scanf ("%s", codigo1);

    printf ("Nome da cidade: \n");
    scanf ("%s", cidade1);

    printf ("População da Cidade: \n");
    scanf ("%d", &populacao1);

    printf ("Área em Km²: \n");
    scanf ("%f", &areakm1);

    printf ("PIB (em bilhões): \n");
    scanf ("%f", &pib1);

    /*Banco de dados da segunda carta */
    printf ("Insira os dados para a Carta N2\n");
    printf ("Estado (A-H)");
    scanf ("  %c", &estado2);

    printf ("Código da carta (exA01): \n");
    scanf ("%s", codigo2);

    printf ("Nome da cidade: \n");
    scanf ("%s", cidade2);

    printf ("População da Cidade: \n");
    scanf ("%d", &populacao2);

    printf ("Área em Km²: \n");
    scanf ("%f", &areakm2);

    printf ("PIB (em bilhões): \n");
    scanf ("%f", &pib2);

                                        //Dados da Carta N¹ e N²

    printf ("Carta N°1\n");
    printf ("Estado: %c Código da Carta: %s Nome da Cidade: %s\n", estado1, codigo1, cidade1);
    printf ("População: %d Área em Km²: %f PIB: %f\n", populacao1, areakm1, pib1);

    printf ("Carta N°2\n");
    printf ("Estado: %c Código da Carta: %s Nome da Cidade: %s\n", estado2, codigo2, cidade2);
    printf ("População: %d Área em Km²: %f PIB: %f\n", populacao2, areakm2, pib2);

    //Hugo Felipe Matrícula : 2025 0892 3701


}
