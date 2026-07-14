#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
   
    // Variáveis para a carta 1:
    char codigodacarta1 [8];
    char estado1 [30];
    char cidade1 [20];
    float populacao1;
    float area1;
    float pib1;
    int pontos_turisticos1;
    // Caixa de Variáveis para a carta 1 Definida (21/06/2026).

    
    // Variáveis para a carta 2:
    char codigodacarta2 [8];
    char estado2 [30];
    char cidade2 [20];
    float populacao2;
    float area2;
    float pib2;
    int pontos_turisticos2;
    // Caixa de Variáveis para a carta 2 Definida (21/06/2026).


    // Área para entrada de dados carta 1

    printf ("---Bem-Vindo ao Super Trunfo - Países! by TechNova---\n");

    printf ("Vamos cadastrar a Primeira Carta do Super Trunfo - Países!\n \n");
  // Criei uma mensagem de boas-vindas para o usuário, indicando que estamos iniciando o processo de cadastro da primeira carta do jogo Super Trunfo - Países. (21/06/2026).
  
   printf ("Digite o código da Carta 1 (01 até 08. Ex. - 03): \n");
    scanf ( "%s", &codigodacarta1);

    printf ("Digite o Estado da Carta 1: \n");
    scanf ( " %[^\n]", estado1);
 // Aplicado o comando " %[^\n]" para permitir a leitura de strings com espaços, garantindo que o nome COMPOSTO do estado seja capturado corretamente. (21/06/2026).
 

    printf ("Digite a cidade da Carta 1: \n");
    scanf ( " %[^\n]", &cidade1);
 // Aplicado o comando " %[^\n]", para ler cidades com nome composto. (21/06/2026).

    printf ("Digite a população da Carta 1: \n");
    scanf ( "%f", &populacao1);
// Adicionado orientação de formato para a entrada da população, melhorando a experiência do usuário. (21/06/2026).

    printf ("Digite a área da Carta 1: \n");
    scanf ( "%f", &area1);
// Adicionado orientação de formato para a entrada da área, melhorando a experiência do usuário. (21/06/2026).
    printf ("Digite o PIB da Carta 1: \n");
    scanf ( " %f", &pib1);
// Adicionado orientação de formato para a entrada do PIB, facilitando a compreensão do usuário sobre como inserir os dados corretamente. (21/06/2026).

    printf ("Digite a quantidade de pontos turísticos da Carta 1 (arredonde se não souber a quantidade exata): \n");
    scanf ( "%d", &pontos_turisticos1);

    printf ("Parabéns! Você cadastrou a carta 1 com sucesso!\n \n");

      
  /* (13/07/2026) Desafio Aventureiro - Calculando PIB per Capita e Densidade Demográfica para a carta 1.
   Vou utilizar a função "/" para dividir os valores de PIB e população, e população e área.
  */

  // (13/07/2026) Precisei ajustar a escala matemática para um cálculo mais preciso, multiplicando o PIB por "1000000000"
    float pib_per_capita1 = (pib1 * 1000000000) / populacao1;
    float densidade_demografica1 = populacao1 / area1;

//Teste para exibir os dados da carta 1 cadastrada. 02/07/2026.
    printf (" Dados da Carta 1:\n");
    printf ("Código da Carta 1: %s\n", codigodacarta1);
    printf ("Estado da Carta 1: %s\n", estado1);
    printf ("Cidade da Carta 1: %s\n", cidade1);
    printf ("População da Carta 1: %.2f (Mil Habitantes)\n", populacao1);
    printf ("Área da Carta 1: %.2f (km²)\n", area1);
    printf ("PIB da Carta 1: %.2f (Bilhões)\n", pib1);
    printf ("Quantidade de Pontos Turísticos da Carta 1: %d\n \n \n", pontos_turisticos1);
  // Área para entrada de dados da carta 1 Definida (21/06/2026).
  // (13/07/2026) Desafio Aventureiro - Inserindo printf para exibir os cálculos de PIB per capita e dens. demog. da carta 1.
   
    printf ("PIB per Capita da Carta 1: %.2f (Aproximado) \n", pib_per_capita1);
    printf ("Densidade Demográfica da Carta 1: %.2f (Habitantes por km²)\n \n \n", densidade_demografica1);
    

  // Área para entrada de dados carta 2

    printf ("Vamos cadastrar a Segunda Carta do Super Trunfo - Países!\n \n");
    
    printf ("Digite o código da Carta 2 (01 até 08. Ex. - 03): \n");
    scanf ( "%s", &codigodacarta2);

    printf ("Digite o Estado da Carta 2: \n");
    scanf ( " %[^\n]", estado2);

    printf ("Digite a Cidade da Carta 2: \n");
    scanf ( " %[^\n]", &cidade2);

    printf ("Digite a população da Carta 2: \n");
    scanf ( "%f", &populacao2);

    printf ("Digite a área da Carta 2: \n");
    scanf ( "%f", &area2);

    printf ("Digite o PIB da Carta 2: \n");
    scanf ( " %f", &pib2);

    printf ("Digite a quantidade de pontos turísticos da Carta 2: \n");
    scanf ( "%d", &pontos_turisticos2);

    printf ("Parabéns! Você cadastrou a carta 2 com sucesso!\n \n");

     /* (13/07/2026) Desafio Aventureiro - Calculando PIB per Capita e Densidade Demográfica para a carta 2.
   Vou utilizar a função "/" para dividir os valores de PIB e população, e população e área.
  */

  // (13/07/2026) Precisei ajustar a escala matemática para um cálculo mais preciso, multiplicando o PIB por "1000000000"
    float pib_per_capita2 = (pib2 * 1000000000) / populacao2;
    float densidade_demografica2 = populacao2 / area2;


        printf (" Dados da Carta 2:\n");
    printf ("Código da Carta 2: %s\n", codigodacarta2);
    printf ("Estado da Carta 2: %s\n", estado2);
    printf ("Cidade da Carta 2: %s\n", cidade2);
    printf ("População da Carta 2: %.2f (Mil Habitantes)\n", populacao2);
    printf ("Área da Carta 2: %.2f (km²)\n", area2);
    printf ("PIB da Carta 2: %.2f (Bilhões)\n", pib2);
    printf ("Quantidade de Pontos Turísticos da Carta 2: %d\n \n \n", pontos_turisticos2);

      // (13/07/2026) Desafio Aventureiro - Inserindo printf para exibir os cálculos de PIB per capita e dens. demog. da carta 1.
   
    printf ("PIB per Capita da Carta 2: %.2f (Aproximado) \n", pib_per_capita2);
    printf ("Densidade Demográfica da Carta 2: %.2f (Habitantes por km²)\n \n \n", densidade_demografica2);

// (13/07/2026) Finalização do Nivel Aventureiro - ENG de Software. 
// (13/07/2026) Incluindo acima os cálculos de PIB per capita;
// (13/07/2026) Densidade demográfica para as cartas cadastradas.


return 0;
} 
