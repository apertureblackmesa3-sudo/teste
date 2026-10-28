#include <stdio.H>
int main()
{
int c,vc;
printf("digite o valor:");
	scanf("%d",&c);
	if (c>=1000)
    {
        vc=c*8/100;
	}
	else
	{
        vc=c*4/100;
	}
	printf("O valor original e: %d do desconto: %d",c,vc);
}
