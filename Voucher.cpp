#include <stdio.H>
int main()
{
	int c;
	printf("insira o valor:");
	scanf("%d", &c);
	if(c>500)
	{
        printf("Voce recebeu um voucher de R$100,00");
	}
	else
	{
   printf("Voce recebeu um voucher de R$50,00");
	}
}
