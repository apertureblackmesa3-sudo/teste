#include <stdio.h>
int main() {
    int vetor[10] = {15, 23, 42, 8, 4, 16, 90, 55, 31, 7};
    int vu, en;
    en = 0;
    printf("Digite um valor");
    scanf("%d", &vu);
    for (int i = 0; i < 10; i++) 
	{
        if (vetor[i] == vu) 
		{
            en = 1; 
            break;          
        }
    }
    if (en == 1) 
	{
        printf("O valor %d esta contido no vetor!\n", vu);
    } 
	else 
	{
        printf("O valor %d nao esta contido no vetor.\n", vu);
    }
    printf ("os valores sao 15, 23, 42, 8, 4, 16, 90, 55, 31, 7 ");
}
