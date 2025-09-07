#include <stdio.h>

int main(){

char letra_estado1;
char codigo_da_carta1[50];
char nome_da_cidade1[50];
int populacao1;
float area1;
float PIB1;
int pontos_turisticos1;


char letra_estado2;
char codigo_da_carta2[50];
char nome_da_cidade2[50];
int populacao2;
float area2;
float PIB2;
int pontos_turisticos2;

printf(">>Insira os dados da CARTA 1:\n");
printf("Digite a letra do estado:\n");
scanf(" %c", &letra_estado1);

printf("Digite o código da Carta: \n");
scanf("%s", &codigo_da_carta1);

printf("Digite o Nome da cidade: \n");
scanf("%s", &nome_da_cidade1);

printf("Digite a população da cidade: \n");
scanf("%d", &populacao1);

printf("Digite a área da cidade: \n");
scanf("%f", &area1);

printf("Digite o PIB: \n");
scanf("%f", &PIB1);

printf("Digite a quantidade de pontos turísticos: \n");
scanf("%d", &pontos_turisticos1);

printf("\n--------------------------------\n\n");

printf(">>Insira os dados da CARTA 2:\n");
printf("Digite a letra do estado:\n");
scanf(" %c", &letra_estado2);

printf("Digite o código da Carta: \n");
scanf("%s", &codigo_da_carta2);

printf("Digite o Nome da cidade: \n");
scanf("%s", &nome_da_cidade2);

printf("Digite a população da cidade: \n");
scanf("%d", &populacao2);

printf("Digite a área da cidade: \n");
scanf("%f", &area2);

printf("Digite o PIB: \n");
scanf("%f", &PIB2);

printf("Digite a quantidade de pontos turísticos: \n");
scanf("%d", &pontos_turisticos2);


printf("\nCadastro realizado. Confira os dados abaixo: \n");
printf("\n <<< CARTA 1 >>>\n");
printf("- Letra do Estado: %c\n\n", letra_estado1);
printf("- Código da Carta: %s\n\n", codigo_da_carta1);
printf("- Nome da cidade: %s\n\n", nome_da_cidade1);
printf("- População: %d habitantes\n\n", populacao1);
printf("- Área: %.2fKm²\n\n", area1);
printf("- PIB (em reais): R$ %.2f \n\n", PIB1);
printf("- Quantidade de pontos turísticos: %d\n\n", pontos_turisticos1);


printf("\n <<< CARTA 2 >>>\n");
printf("- Letra do Estado: %c\n\n", letra_estado2);
printf("- Código da Carta: %s\n\n", codigo_da_carta2);
printf("- Nome da cidade: %s\n\n", nome_da_cidade2);
printf("- População: %d habitantes\n\n", populacao2);
printf("- Área: %.2fKm²\n\n", area2);
printf("- PIB (em reais): R$ %.2f \n\n", PIB2);
printf("- Quantidade de pontos turísticos: %d\n\n", pontos_turisticos2);

return 0;
}
