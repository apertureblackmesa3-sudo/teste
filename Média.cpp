#include <stdio.h>
int main()
{
	int n1;
	int n2;
	int n3;
	int menor;
	int m;
	printf("Digite um número");
	printf("\n");
	scanf("%d", &n1);
	//forma mais prática
	if(n1>=0 && n1<=10)
	{
		printf("Digite um número");
		printf("\n");
		scanf("%d", &n2);
		if(n2>=0 && n2<=10)
		{
			printf("Digite um número");
			printf("\n");
			scanf("%d", &n3);
			if(n3>=0 && n3<=10)
			{
				menor=n1;
				if(menor>n2)
				{
					menor=n2;
				}
				else
				{
					if(n3<menor)
					{
						menor=n3;
					}
				    m = (n1 + n2 + n3 - menor) / 2; 
				    
    {
    	    m=(n1+n2+n3-menor)/2;
    	printf("%d reprovado",m);
	}
	else
	{
		if(m>=6)
		{
			
		printf("%d aprovado",m);	
		}
		if(m<6 && m>4)
		{
			
			printf("%d exame",m)
		}
	}
				}
			}
			else
			{
				  printf("Nota 3 invalida");
				  printf("\n");  
			}
		}
		else
		{
			      printf("Nota 2 invalida");
			      printf("\n");
		}
	}
	else
	{
		printf("Nota 1 invalida");
		printf("\n");
	}
	
	
}



