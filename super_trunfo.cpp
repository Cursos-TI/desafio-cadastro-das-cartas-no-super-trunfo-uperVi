#include <stdio.h>
#include <ctype.h>
 

int main(){
    // Variáveis para a primeira carta
    char LetraDoEstado1[30]; 
    char numeracao1[30];
    char nome1[30];
    float populacao1;
    float area1;
    float pib1;
    float pontosTuristicos1;

    // Variáveis para a segunda carta
    char LetraDoEstado2[30]; 
    char numeracao2[30];
    char nome2[30];
    float populacao2;
    float area2;
    float pib2;
    float pontosTuristicos2;

    printf("Dados da primeira carta -->\n"); // Leitura dos dados da primeira carta

    printf("Seliciona uma letra de 'A' a 'H'\n"); // letra que ira aparece junto do codigo da carta 
    scanf("%s", LetraDoEstado1);

    printf("SEliciona a numeraçao da carta de '1' a '4'\n"); // Numero que ira aparece junto do codigo da carta 
    scanf("%s",numeracao1);

    printf("informa o nome da cidade\n");
    scanf(" %[^\n]", &nome1); // Usando %[^\n] para ler uma string com espaços

    printf("informa a area da região \n");
    scanf("%f", &area1);

    printf("informa a quantidade da porpulação\n");
    scanf("%f", &populacao1);

    printf("informa o pib da região\n");
    scanf("%f", &pib1);

    printf("qunatos pontos turisticos tem a cidade\n");
    scanf("%f", &pontosTuristicos1);
    
    printf("Dados da segunda carta -->\n"); // Leitura dos dados da segunda carta 

    printf("Seliciona uma letra de 'A' a 'H'\n");
    scanf("%s", LetraDoEstado2);

    printf("SEliciona a numeraçao da carta de '1' a '4'\n");
    scanf("%s",numeracao2);

    printf("informa o nome da cidade\n");
    scanf(" %[^\n]", &nome2); //

    printf("informa a area da região \n");
    scanf("%f", &area2);

    printf("informa a quantidade da porpulação\n");
    scanf("%f", &populacao2);

    printf("informa o pib da região\n");
    scanf("%f", &pib2);

    printf("qunatos pontos turisticos tem a cidade\n");
    scanf("%f", &pontosTuristicos2);


     printf("====================================\n"); // Demonstraçao da primeira carta
     printf("Primeira carta \n");
     printf("carta: %s\n", numeracao1);
     printf("Estado: %s\n", LetraDoEstado1);
     printf("Codigo: %s0%s\n", LetraDoEstado1, numeracao1);
     printf("Nome da Cidade: %s\n", nome1);
     printf("Area da Cidade: %.0f km²\n", area1 );
     printf("População: %.0f\n", populacao1);
     printf("PIB: %.0f bilhões de reais\n", pib1);
     printf("Pontos Turisticos: %g\n", pontosTuristicos1);

     printf("====================================\n"); // Demonstraçao da segunda carta 
     printf("Segunda carta\n");
     printf("carta: %s\n", numeracao2);
     printf("Estado: %s\n", LetraDoEstado2);
     printf("Codigo: %s0%s\n", LetraDoEstado2, numeracao2);
     printf("Nome da Cidade: %s\n", nome2);
     printf("Area da Cidade: %.0f km²\n", area2 );
     printf("População: %.0f\n", populacao2);
     printf("PIB: %.0f bilhões de reais\n", pib2);
     printf("Pontos Turisticos: %g\n", pontosTuristicos2);

  






  





}