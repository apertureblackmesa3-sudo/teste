#include<stdio.h>
int eh_triangulo(int n1, int n2, int n3)
{
	int n;
	if (n1 <n2+n3)
	{
		n++;
	}
	if(n2<n1+n3)
	{
	    n++;	
	}
	if(n3<n1+n2)
	{
		n++;
	}
	if(n==3)
	{
	return 1;
	}
	else
	{
	return 0;
	}	
}
int main()
{
int n1, n2, n3, res;
scanf("%d", &n1);
scanf("%d", &n2);
scanf("%d", &n3);
res=eh_triangulo(n1, n2, n3);
printf("%d", res);
}
    
    

		  	