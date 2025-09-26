#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {

// Mensagem de inicio
printf("Super Trunfo Países\n");
printf("Vamos criar sua primeira carta!\n");

  // Área para definição das variáveis para armazenar as propriedades das cidades

//Carta 1
char estado1;
char cod_carta1[20];
char cidade1[20];
 int pop1, p_turistico1;
float area1, pib1, densidade1,pibperk1;

//Carta 2
char estado2;
char cod_carta2[20];
char cidade2[20];
 int pop2, p_turistico2;
float area2, pib2, densidade2,pibperk2;


  // Área para entrada de dados

//Carta 1
  printf("Escolha uma letra de A a H para representar um estado:\n");
  scanf("%c", &estado1);
  printf("Agora digite o nome de uma cidade:\n ");
  scanf("%s", cidade1);
  printf("Qual a população dessa cidade?\n");
  scanf("%i", &pop1);
  printf("Quantos km² tem essa cidade?\n");
  scanf("%f", &area1);
  printf("Qual o PIB dessa cidade?\n");
  scanf("%f", &pib1);
  printf("Quantos pontos turísticos tem essa cidade?\n");
  scanf("%i", &p_turistico1);

//Mensagem informativa
printf("Certo! Agora vamos para a segunda carta.\n");

 //CARTA 2
  printf("Escolha novamente uma letra de A a H para representar um estado:\n");
  scanf(" %c", &estado2);
  printf("Agora digite o nome de uma cidade:\n ");
  scanf("%s", cidade2);
  printf("Qual a população dessa cidade?\n");
  scanf("%i", &pop2);
  printf("Quantos km² tem essa cidade?\n");
  scanf("%f", &area2);
  printf("Qual o PIB dessa cidade?\n");
  scanf("%f", &pib2);
  printf("Quantos pontos turísticos tem essa cidade?\n");
  scanf("%i", &p_turistico2);

  //Área de Operações
densidade1 = pop1 / area1;
densidade2 = pop2 / area2;
pibperk1 = pib1 / pop1;
pibperk2 = pib2 / pop2;

  // Área para exibição dos dados da cidade
  
  //CARTA 1
  printf("Certo! Segue as informações da CARTA N°1:\n");
  printf("Carta N°1\n");
  printf("Estado: %c.\nCódigo: %c01.\nCidade: %s.\nPopulação: %i habitantes.\n"
    ,estado1,estado1,cidade1,pop1);
    printf("Área: %.3fkm².\nPIB: %.3f bilhões de reais.\nPontos Turísticos: %i.\n"
    ,area1,pib1,p_turistico1);
    printf("Densidade Populacional: %.2f hab/km².\nPIB per Capita %.2f reais.\n"
      ,densidade1,pibperk1);
    
    
    

    //CARTA 2

   printf("Agora as informações da CARTA N°2:\n");
  printf("Carta N°2\n");
  printf("Estado: %c.\nCódigo: %c02.\nCidade: %s.\nPopulação: %i habitantes.\n"
    ,estado2,estado2,cidade2,pop2);
    printf("Área: %.3fkm².\nPIB: %.3f bilhões de reais.\nPontos Turísticos: %i.\n"
    ,area2,pib2,p_turistico2);
    printf("Densidade Populacional: %.2f hab/km².\nPIB per Capita %.2f reais.\n"
      ,densidade2,pibperk2);

return 0;
} 
