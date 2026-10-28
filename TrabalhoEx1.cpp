#include<stdio.h>
 
void exercicio1(int v[])
{
	int i;
	printf("\n");
	for(i = 4; i >= 0; i--)
		printf("%d ", v[i]);
	printf("\n\n");
}
 
int exercicio2(int v[])
{
	int i, soma = 0;
	for(i = 0; i < 5; i++)
		soma += v[i];
	return soma;
}
 
void exercicio3(int v[])
{
	int i;
	printf("\n");
	for(i = 0; i < 5; i++)
		if(v[i] % 2 == 0)
			printf("%d  ", i);
	printf("\n");
	for(i = 0; i < 5; i++)
		if(v[i] % 2 == 0)
			printf("%d ", v[i]);
	printf("\n\n");
}
 
int exercicio4(int v[])
{
	int i, cont = 0;
	for(i = 0; i < 5; i++)
		if(v[i] >= 10 && v[i] <= 30)
			cont++;
	return cont;
}
 
float exercicio5(int v[])
{
	int i, soma = 0;
	for(i = 0; i < 5; i++)
		soma += v[i];
	return soma / 5.0;
}
 
int exercicio6(int v[])
{
	int i, maior = v[0];
	for(i = 1; i < 5; i++)
		if(v[i] > maior)
			maior = v[i];
	return maior;
}
 
int main(){
	int v[5] = {23, 46, 67, 87, 12};
	int opcao;
	do
	{	// Escrita do menu
		printf("0 - SAIR\n");
		printf("1 - Exibir do ultimo ate o primeiro\n");
		printf("2 - Somar os elementos\n");
		printf("3 - Exibir elementos pares\n");
		printf("4 - Contar elementos entre 10 e 30\n");
		printf("5 - Calcular a media dos valores\n");
		printf("6 - Encontrar o maior elemento\n");
		// Esolha da opcao
		printf("Escolha: ");
		scanf("%d", &opcao);
		
		// Seleciona o escolhido
		switch (opcao)
		{
			case 0:
				break;
			case 1:
				exercicio1(v);
				break;
			case 2:
				printf("\nSoma = %d\n\n", exercicio2(v));
				break;
			case 3:
				exercicio3(v);
				break;
			case 4:
				printf("\nHa %d elementos entre 10 e 30\n\n", exercicio4(v));
				break;
			case 5:
				printf("\nMedia: %.2f\n\n", exercicio5(v));
				break;
			case 6:
				printf("\nMaior valor: %d\n\n", exercicio6(v));
				break;
				
		}
		
	}while (opcao != 0);
}
