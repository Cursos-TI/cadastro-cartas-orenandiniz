#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  char estado1, estado2;
  char cidade1[20], cidade2[20], codigo1[20], codigo2[20];
  float area1, area2, pib1, pib2;
  int pop1, pop2, pturis1, pturis2;

  // Área para entrada de dados 
  printf ("----------- Cadastro das cartas -----------\n");
  printf ("\n");
  printf ("carta 1:\n"); //cadastrando carta 1 -----------------------------------------------------------------------------------------------------------------------
  
  printf ("Digite o estado: ");
  scanf ("%c", &estado1);//Aqui eu coleto o Estado que o usuário digitar.

  printf ("Digite o código da carta: ");
  scanf ("%s", codigo1);//Coletando o codigo da carta(string não precisa de &)

  printf ("Digite o nome da cidade: ");
  scanf ("%s", cidade1);//coletando o nome da cidade

  printf ("Digite a população da cidade: ");
  scanf ("%d", &pop1);//coletando a população

  printf ("Digite a Área em km² da cidade: ");
  scanf ("%f", &area1);//Coletar a área em Km2 

  printf ("Digite o PIB: ");
  scanf ("%f", &pib1);// coletar o PIB

  printf ("Digite o número de pontos turisticos da cidade: ");
  scanf ("%d", &pturis1);//coletando a quantidade de pontos turisticos
  printf ("\n");

  printf ("------------------------\n");//Uma divisoria para ficar mais bonitinho
  printf ("carta 2:\n");//AGORA VAMOS COLETAR AS INFORMAÇÕES DA CARTA 2------------------------------------------------------------------------------------------
  
  printf ("Digite o estado: ");
  scanf (" %c", &estado2);//Aqui eu dei um espaço antes do %c para funcionar.

  printf ("Digite o código da carta: ");
  scanf ("%s", codigo2);

  printf ("Digite o nome da cidade: ");
  scanf ("%s", cidade2);

  printf ("Digite a população da cidade: ");
  scanf ("%d", &pop2);

  printf ("Digite a Área em km² da cidade: ");
  scanf ("%f", &area2); 

  printf ("Digite o PIB: ");
  scanf ("%f", &pib2);// 

  printf ("Digite o número de pontos turisticos da cidade: ");
  scanf ("%d", &pturis2);
  
  //Agora que coletamos todas as informações, vamos exibilas...----------------------------------------------------------------------------------------------------
  // Área para exibição dos dados da cidade

  printf ("-----------------------------\n");
  printf ("\n");
  printf ("A seguir, veja as cartas que você possui: \n");
  printf ("\n");

  printf ("---------- carta 1 ----------\n");
  printf ("Estado: %c\n", estado1);
  printf ("Código: %s\n", codigo1);
  printf ("Nome da cidade: %s\n", cidade1);
  printf ("População: %d\n", pop1);
  printf ("Área: %.2f km²\n", area1);
  printf ("PIB: %.2f bilhões de Reais\n", pib1);
  printf ("Número de Pontos Turísticos: %d\n", pturis1);

  printf ("-----------------------------\n");

  printf ("---------- carta 2 ----------\n");
  printf ("Estado: %c\n", estado2);
  printf ("Código: %s\n", codigo2);
  printf ("Nome da cidade: %s\n", cidade2);
  printf ("População: %d\n", pop2);
  printf ("Área: %.2f km²\n", area2);
  printf ("PIB: %.2f bilhões de Reais\n", pib2);
  printf ("Número de Pontos Turísticos: %d\n", pturis2);

return 0;
} 
