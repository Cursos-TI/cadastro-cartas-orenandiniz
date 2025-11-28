#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main()
{
  // Área para definição das variáveis para armazenar as propriedades das cidades
  char estado1, estado2;
  char cidade1[20], cidade2[20], codigo1[20], codigo2[20];
  float area1, area2, pib1, pib2;
  int pturis1, pturis2;
  unsigned long int pop1, pop2;

  // Área para entrada de dados
  printf("----------- Cadastro das cartas -----------\n");
  printf("\n");
  printf("carta 1:\n"); // cadastrando carta 1 -----------------------------------------------------------------------------------------------------------------------

  printf("Digite o estado: ");
  scanf("%c", &estado1); // Aqui eu coleto o Estado que o usuário digitar.

  printf("Digite o código da carta: ");
  scanf("%s", codigo1); // Coletando o codigo da carta (string não precisa de &)

  printf("Digite o nome da cidade: ");
  scanf("%s", cidade1); // coletando o nome da cidade

  printf("Digite a população da cidade: ");
  scanf("%lu", &pop1); // coletando a população

  printf("Digite a Área em km² da cidade: ");
  scanf("%f", &area1); // Coletar a área em Km2

  printf("Digite o PIB: ");
  scanf("%f", &pib1); // coletar o PIB

  printf("Digite o número de pontos turisticos da cidade: ");
  scanf("%d", &pturis1); // coletando a quantidade de pontos turisticos
  printf("\n");

  printf("------------------------\n"); // Uma divisoria para ficar mais bonito
  printf("carta 2:\n");                 // AGORA VAMOS COLETAR AS INFORMAÇÕES DA CARTA 2------------------------------------------------------------------------------------------

  printf("Digite o estado: ");
  scanf(" %c", &estado2); // Aqui eu dei um espaço antes do %c para funcionar.

  printf("Digite o código da carta: ");
  scanf("%s", codigo2);

  printf("Digite o nome da cidade: ");
  scanf("%s", cidade2);

  printf("Digite a população da cidade: ");
  scanf("%lu", &pop2);

  printf("Digite a Área em km² da cidade: ");
  scanf("%f", &area2);

  printf("Digite o PIB: ");
  scanf("%f", &pib2); //

  printf("Digite o número de pontos turisticos da cidade: ");
  scanf("%d", &pturis2);

  float densidade1 = pop1 / area1;
  float pibper1 = pib1 / pop1;
  float densidade2 = pop2 / area2;
  float pibper2 = pib2 / pop2;
  float inversodensidade1 = 1.0f / densidade1;
  float inversodensidade2 = 1.0f / densidade2;

  float superpoder1 = (float)pop1 + area1 + pib1 + (float)pturis1 + pibper1 + inversodensidade1; // Aqui calculei o superpoder
  float superpoder2 = (float)pop2 + area2 + pib2 + (float)pturis2 + pibper2 + inversodensidade2;

  // Agora que coletamos todas as informações, vamos exibi-las...----------------------------------------------------------------------------------------------------
  //  Área para exibição dos dados da cidade

  printf("-----------------------------\n");
  printf("\n");
  printf("A seguir, veja as cartas que você possui: \n");
  printf("\n");

  printf("---------- carta 1 ----------\n");
  printf("Estado: %c\n", estado1);
  printf("Código: %s\n", codigo1);
  printf("Nome da cidade: %s\n", cidade1);
  printf("População: %lu\n", pop1);
  printf("Área: %.2f km²\n", area1);
  printf("PIB: %.2f bilhões de Reais\n", pib1);
  printf("Número de Pontos Turísticos: %d\n", pturis1);
  printf("Densidade Populacional: %.0f hab/km²\n", densidade1);
  printf("PIB per Capita: %f reais \n", pibper1);

  printf("-----------------------------\n");

  printf("---------- carta 2 ----------\n");
  printf("Estado: %c\n", estado2);
  printf("Código: %s\n", codigo2);
  printf("Nome da cidade: %s\n", cidade2);
  printf("População: %lu\n", pop2);
  printf("Área: %.2f km²\n", area2);
  printf("PIB: %.2f bilhões de Reais\n", pib2);
  printf("Número de Pontos Turísticos: %d\n", pturis2);
  printf("Densidade Populacional: %.0f hab/km²\n", densidade2);
  printf("PIB per Capita: %f reais\n", pibper2);


  printf("-----------------------------\n"); // Agora o resultado ----------------------------------------
  printf("Comparação de cartas (Atributo: População): \n");
  printf("Carta 1 (%s): %lu\n", cidade1, pop1);
  printf("Carta 2 (%s): %lu\n", cidade2, pop2);
  if (pop1 > pop2)//Aqui eu disse que se a população 1 for maior que a população 2...
  {
    printf ("Resultado: A carta 1 venceu!\n");//Então devemos imprimir que a carta 1 venceu
  }
  else
  {
    printf ("Resultado: A carta 2 venceu!\n");//Caso a população1 não for maior que a população2 então a carta 2 venceu
  }
  //Poderiamos adicionar mais um else para caso tivesse um empate.
  printf("=======================================================\n");

  return 0;
}
