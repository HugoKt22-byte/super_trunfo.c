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
    int densidadepopulacional1;
    float pibpercapita1;

//variáveis 2 carta

    char estado2;
    char codigo2[3];
    char cidade2[20];
    int populacao2;
    float areakm2;
    float pib2;
    int pontosturisticos2;
    int densidadepopulacional2;
    float pibpercapita2;

    //Banco de dados da primeira carta

    printf ("Insira os dados para a Carta N¹\n");
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

    printf ("Pontos turísticos: \n");
    scanf ("%d", &pontosturisticos1);

    /*Banco de dados da segunda carta */
    printf ("Insira os dados para a Carta N2\n");
    printf ("Estado (A-H)");
    scanf ("  %c", &estado2);

    printf ("Código da carta (exB01): \n");
    scanf ("%s", codigo2);

    printf ("Nome da cidade: \n");
    scanf ("%s", cidade2);

    printf ("População da Cidade: \n");
    scanf ("%d", &populacao2);

    printf ("Área em Km²: \n");
    scanf ("%f", &areakm2);

    printf ("PIB (em bilhões): \n");
    scanf ("%f", &pib2);

    printf ("Pontos turísticos: \n");
    scanf ("%d", &pontosturisticos2);

                        //Adicionando Densidade Populacional E PIB per Capita/

    float densidade1, densidade2, pib3, pib4;

        //CARTA N¹
    densidade1 = populacao1 / areakm1;
    pib3 = pib1 / populacao1;

        //CARTA N²
    densidade2 = populacao2 / areakm2;
    pib4 = pib2 / populacao2;

        // CÁLCULO DO SUPER PODER

    float superpoder1 = populacao1 + areakm1 + pib1 + pontosturisticos1 + pibpercapita1 + (1 / densidade1);
    float superpoder2 = populacao2 + areakm2 + pib2 + pontosturisticos2 + pibpercapita2 + (1 / densidade2);


                                        //Dados da Carta N¹ e N²
/*
    printf ("Carta N¹ \n");
    printf ("Estado: %c Código da Carta: %s Nome da Cidade: %s\n", estado1, codigo1, cidade1);
    printf ("População: %d\nÁrea em Km²: \n%f PIB: %f\n", populacao1, areakm1, pib1);
    printf ("Densidade Populacional %.6f\n", densidade1);
    printf ("PIB per Capita: %.9f\n", pib3);
    printf ("Pontos turísticos: %d\n", pontosturisticos1);
    printf ("Super Poder: %.2f\n", superpoder1);
    
    printf ("Carta N² \n");
    printf ("Estado: %c Código da Carta: %s Nome da Cidade: %s\n", estado2, codigo2, cidade2);
    printf ("População: %d\nÁrea em Km²: %f\nPIB: %f\n", populacao2, areakm2, pib2);
    printf ("Densidade Populacional %.6f\n", densidade2);
    printf ("PIB per Capita: %.9f\n", pib4);
    printf ("Pontos turísticos: %d\n", pontosturisticos2);
    printf ("Super Poder: %.2f\n", superpoder2);

    //AGORA COMPARAÇÕES DE CARTAS

    printf ("\nComparação de Cartas:\n");
    printf ("População: Carta 1 venceu %d\n", populacao1 > populacao2);
    printf ("Área: Carta 1 venceu %d\n", areakm1 > areakm2);
    printf ("PIB: Carta 1 venceu %d\n", pib1 > pib2);
    printf ("Densidade Populacional: Carta 1 venceu %d\n", densidade1 < densidade2);
    printf ("Pib Per Capita: Carta 1 venceu %d\n", pibpercapita1 > pibpercapita2);
    printf ("Pontos turísticos: Carta 1 venceu %d\n", pontosturisticos1 > pontosturisticos2);
    printf ("Super Poder: Carta 1 venceu %d\n", superpoder1 > superpoder2);


printf  ("Carta 1 população: %d\n", populacao1);
printf ("Carta 2 população: %d\n", populacao2); 

if (populacao1 > populacao2){
    printf ("Carta 1 venceu!");
} else {
    printf ("Carta 2 venceu!");
}
*/


/*populacao1 = 1;
populacao2 = 0;
areakm1 = 1;
areakm2 = 0;
pib1 = 1;
pib2 = 0;                     //ESSA PARTE COMENTADA ESTAVA ME PREJUDICANDO
pontosturisticos1 = 1;
pontosturisticos2 = 0;
densidade1 = 0;
densidade2 = 1;
*/
int opcao1;
int opcao2;
int resultado1 = 0;
int resultado2 = 0;

printf("Agora vamos fazer a comparação de dois atributos e ver quem ganhou?\n");
printf("Escolha o primeiro atributo:\n");
printf("1 - População\n");
printf("2 - Área\n");
printf("3 - PIB\n");
printf("4 - Pontos Turísticos\n");
printf("5 - Densidade Demográfica\n");
scanf("%d", &opcao1);

printf("Escolha o segundo atributo (diferente do primeiro):\n");
printf("1 - População\n");
printf("2 - Área\n");
printf("3 - PIB\n");
printf("4 - Pontos Turísticos\n");
printf("5 - Densidade Demográfica\n");
scanf ("%d", &opcao2);

switch (opcao1)
{
case 1:
resultado1 = (populacao1 > populacao2) ? 1 : (populacao1 < populacao2 ? 2 : 0);
  break;
case 2:
resultado1 = (areakm1 > areakm2) ? 1 : (areakm1 < areakm2 ? 2 : 0);
  break;
  case 3:
resultado1 = (pib1 > pib2) ? 1 : (pib1 < pib2 ? 2 : 0);
  break;
  case 4:
resultado1 = (pontosturisticos1 > pontosturisticos2) ? 1 : (pontosturisticos1 < pontosturisticos2 ? 2 : 0);
  break;
  case 5:
resultado1 = (densidade1 < densidade2) ? 1 : (densidade1 > densidade2 ? 2 : 0);
  break;
default:
  break;
}

switch (opcao2){
case 1:
resultado2 = (populacao1 > populacao2) ? 1 : (populacao1 < populacao2 ? 2 : 0);
  break;
case 2:
resultado2 = (areakm1 > areakm2) ? 1 : (areakm1 < areakm2 ? 2 : 0);
  break;
  case 3:
resultado2 = (pib1 > pib2) ? 1 : (pib1 < pib2 ? 2 : 0);
  break;
  case 4:
resultado2 = (pontosturisticos1 > pontosturisticos2) ? 1 : (pontosturisticos1 < pontosturisticos2 ? 2 : 0);
  break;
  case 5:
resultado2 = (densidade1 < densidade2) ? 1 : (densidade1 > densidade2 ? 2 : 0);
  break;
default:
  break;
}

if (opcao1 == opcao2) {
printf("Você escolheu o mesmo atributo, escolha novamente!\n");
} else if (resultado1 == 1 && resultado2 == 1) {
  printf ("Player 1 venceu :D\n");
} else if (resultado1 == 2 && resultado2 == 2){
  printf ("Player 2 venceu :D\n");
} else if ((resultado1 == 1 && resultado2 == 2) || (resultado2 == 2 && resultado1 == 1)){
  printf ("Cada jogador venceu um atributo, empate!");
} else {
  printf ("Empate\n");
}



    //Hugo Felipe Matrícula : 2025 0892 3701

    return 0;
}