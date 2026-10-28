#include<stdio.h>
	int i(int n1, int n2, int n3)
	{	
	if (n1 <n2+n3)
	{
		return 1;
	} 
	else
	{
		return 0;
	}
	}
	int k(int n1, int n2, int n3)
	{
	if(n2<n1+n3)
	{
	    return 2;	
	}
	else
	{
		return 0;
	}
	}
	int h(int n1, int n2, int n3)
	{
	if(n3<n1+n2)
	{
		return 3;
	}
	else
	{
		return 0;
	}
	}
int main()
{
int n1, n2, n3, p, g, t;
printf("ola usuario, digite os numeros para saber o triangulo");
scanf("%d", &n1);
scanf("%d", &n2);
scanf("%d", &n3);
p=i(n1, n2, n3);
g=k(n1, n2, n3);
t=h(n1, n2, n3);
        if(p==1)
        {
        	printf("%d", n1);
		}
		if(g==2)
        {
        	printf("%d", n2);
		}
		if(t==3)
        {
        	printf("%d", n3);
		}
		printf("os valores nao forman um triangulo")
  }