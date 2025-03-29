
#include <stdio.h>
int main(){

    printf ("DESAFIO SUPER TRUNFO!\n");

//Carta 1 Variáveis:
    char estado1;   //Escolha do primeiro estado
    char codigo1 [50]; //Escolha do primeiro código da cidade
    char cidade1 [50]; //Inserção da primeira cidade
    int populacao1; //Entrada da primeira população
    float area1; //Tamanho da primeira área 
    float pib1; //O PIB do primeiro destino
    int pontosturisticos1; //Número de pontos turísticos existentes do primeiro lugar
    
    //Carta 2 Variáveis:
    char estado2; //Escolha do segundo estado
    char codigo2[50]; //Escolha do segundo código da cidade
    char cidade2[50]; //Inserção da segunda cidade 
    int populacao2; //Entrada da segunda população
    float area2; //Tamanho da segunda área
    float pib2; //O PIB do segundo destino
    int pontosturisticos2; //Número de pontos turísticos existentes do segundo lugar
    
    
    //Dados da carta1:
    printf("Digite o estado1:\n");
    scanf(" %c", &estado1);

    printf("digite o codigo da carta1:\n");
    scanf("%s", codigo1);

    printf("digite a cidade1:\n");
    scanf("%s", cidade1);

    printf("Digite a população1:\n");
    scanf("%d", &populacao1);

    printf("Digite a área1:\n");
    scanf("%f", &area1);

    printf("Digite o pib1:\n");
    scanf("%f", &pib1);

    printf("Digite os pontos turísticos1:\n");
    scanf("%d", &pontosturisticos1);


    printf ("CARTA 1\n");
    printf("O seu estado é:%c \n", estado1);
    printf ("O código da carta é:%s \n", codigo1);
    printf ("O código da cidade é:%s \n", cidade1);
    printf ("A população é:%d \n", populacao1);
    printf ("A área é:%f \n", area1);
    printf ("O pib é:%f \n", pib1);
    printf ("O número de pontos turísticos é:%d \n", pontosturisticos1);
        
        
    //Dados da carta 2:
    printf("digite o estado2:\n");
    scanf(" %c", &estado2);
    
    printf("digite o codigo da carta2:\n");
    scanf("%s", codigo2);

    printf("digite a cidade2:\n");
    scanf("%s", cidade2);

    printf("Digite a população2:\n");
    scanf("%d", &populacao2);

    printf("Digite a área2:\n");
    scanf("%f", &area2);

    printf("Digite o pib2:\n");
    scanf("%f", &pib2);

    printf("Digite os pontos turísticos2:\n");
    scanf("%d", &pontosturisticos2);


    printf ("CARTA 2\n");
    printf("O seu estado2 é:%c \n", estado2);
    printf ("O código da carta2 é:%s \n", codigo2);
    printf ("O código da cidade2 é:%s \n", cidade2);
    printf ("A população2 é:%d \n", populacao2);
    printf ("A área2 é:%f \n", area2);
    printf ("O pib2 é:%f \n", pib2);
    printf ("O número de pontos turísticos2 é:%d \n", pontosturisticos2);

}