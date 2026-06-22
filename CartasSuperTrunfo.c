#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
   
    // Variáveis para a carta 1:
    char estado1 [30];
    char codigodacarta1 [8];
    char cidade1 [20];
    int populacao1;
    float area1;
    float pib1;
    int pontos_turisticos1;
    // Caixa de Variáveis para a carta 1 Definida (21/06/2026).

    // Variáveis para a carta 2:
    char estado2 [30];
    char codigodacarta2 [8];
    char cidade2 [20];
    int populacao2;
    float area2;
    float pib2;
    int pontos_turisticos2;
    // Caixa de Variáveis para a carta 2 Definida (21/06/2026).


  // Área para entrada de dados

    printf ("---Bem-Vindo ao Super Trunfo - Países! by TechNova---\n");

    printf ("Vamos cadastrar a Primeira Carta do Super Trunfo - Países!\n");
  // Criei uma mensagem de boas-vindas para o usuário, indicando que estamos iniciando o processo de cadastro da primeira carta do jogo Super Trunfo - Países. (21/06/2026).
  
    printf ("Digite o estado da carta 1: \n");
    scanf ( " %[^\n]", estado1);
 // Aplicado o comando " %[^\n]" para permitir a leitura de strings com espaços, garantindo que o nome COMPOSTO do estado seja capturado corretamente. (21/06/2026).

    printf ("Digite o código da carta 1 (01 até 08. Ex. - 03): \n");
    scanf ( "%s", &codigodacarta1);
 

    printf ("Digite a cidade da carta 1: \n");
    scanf ( " %[^\n]", &cidade1);
 // Aplicado o comando " %[^\n]", para ler cidades com nome composto. (21/06/2026).

    printf ("Digite a população da carta 1 (apenas números, sem pontos ou vírgulas. Ex: 320550): \n");
    scanf ( "%d", &populacao1);
// Adicionado orientação de formato para a entrada da população, melhorando a experiência do usuário. (21/06/2026).

    printf ("Digite a área da carta 1 (apenas números, sem pontos ou vírgulas. Ex: 320550): \n");
    scanf ( "%f", &area1);
// Adicionado orientação de formato para a entrada da área, melhorando a experiência do usuário. (21/06/2026).
    printf ("Digite o PIB da carta 1 (Apenas o número arredondado aproximado, ignorando a unidade e casa decimal. Ex. - 29,7 bi = 30 ): \n");
    scanf ( "%f", &pib1);
// Adicionado orientação de formato para a entrada do PIB, facilitando a compreensão do usuário sobre como inserir os dados corretamente. (21/06/2026).

    printf ("Digite a quantidade de pontos turísticos da carta 1: \n");
    scanf ( "%d", &pontos_turisticos1);

    printf ("Parabéns! Você cadastrou a carta 1 com sucesso!\n");
  // Área para entrada de dados da carta 1 Definida (21/06/





  // Área para exibição dos dados da cidade

return 0;
} 
