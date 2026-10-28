#include<stdio.h>
#include"subalgoritmos.h"
// Programa principal
int main()
{
	float n1, n2, n3, soma, media;
	int opcao;
	
	printf("---- M E N U ----\n");
	printf("1 - Somar 2 numeros\n");
	printf("2 - Calcular media\n");
	printf("3 - Calcular delta\n");
	printf("0 - SAIR\n");
	printf("Escolha: ");
	scanf("%d", &opcao);
	
	if (opcao == 1)
	{
		printf("Digite 2 numeros: ");
		scanf("%f%f", &n1, &n2);
		printf("\n1. Soma = %.1f", somar_numeros(n1, n2));	
	}
	else if (opcao == 2)
	{
		printf("\n2. Media = %.1f", calcular_media(5, 6, 7));
	}
	else if (opcao == 3)
	{
		printf("\n3. Delta = %.1f", calcular_delta(-1, 2, 3));
	}
	else
	{
		printf("Opcao invalida!");
	}
	/*
	printf("\n4. Proximo numero = %d", prox_num(5));
	printf("\n5. Proximo par = %d", prox_num_par(8));
	printf("\n6. Maior entre 2n = %.1f", maior_2n(8, 55));
	printf("\n7. Menor entre 3n = %.1f", menor_3n(8, 67, 55));
	*/
}