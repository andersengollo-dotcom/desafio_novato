#include <stdio.h>

int main(){

char letra_estado;
char codigo_da_carta[50];
char nome_da_cidade[50];
int populacao;
float area;
float PIB;
int pontos_turisticos;
printf("Digite a letra do estado: \n");
scanf("%c", &letra_estado);

printf("Digite o código da Carta: \n");
scanf("%s", &codigo_da_carta);

printf("Digite o Nome da cidade: \n");
scanf("%s", &nome_da_cidade);

printf("Digite a população da cidade: \n");
scanf("%d", &populacao);

printf("Digite a área da cidade: \n");
scanf("%f", &area);

printf("Digite o PIB: \n");
scanf("%f", &PIB);

printf("Digite a quantidade de pontos turísticos: \n");
scanf("%d", &pontos_turisticos);


printf("\nCadastro realizado. Confira os dados abaixo: \n");
printf("Letra do Estado: %c\n\n", letra_estado);
printf("Código da Carta: %s\n\n", codigo_da_carta);
printf("Nome da cidade: %s\n\n", nome_da_cidade);
printf("População: %d habitantes\n\n", populacao);
printf("Área: %.2fKm²\n\n", area);
printf("PIB (em reais): R$ %.2f milhões de reais\n\n", PIB);
printf("Quantidade de pontos turísticos: %d\n\n", pontos_turisticos);


return 0;
}
