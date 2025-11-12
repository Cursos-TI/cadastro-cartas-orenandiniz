#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  char estado1, estado2;
  char cidade1[20], cidade2[20], codigo1[20], codigo2[20];

  // Área para entrada de dados
  printf ("----------- Cadastro das cartas ----------\n");
  printf ("\n");
  printf ("carta 1:\n");
  
  printf ("Digite o estado: ");
  scanf ("%s", estado1);//Aqui eu coleto o estado que o usuário digitar, pelo que entendi não precisa do & para strings

  printf ("Digite o código da carta:");
  scanf ("%c", &codigo1);//Coletando o codigo da carta

  // Área para exibição dos dados da cidade

return 0;
} 
