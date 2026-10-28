#include <stdio.h>
int main()
{	
	int v[5], ind, s=0;
	
	for(ind=5; ind > 0; ind --)
	{
		printf("v[4] = ", 4);
		scanf("%d", &v[4]);	
		s=s+v[ind];
	}
	
	
	printf("Soma igual a: %d", s);
}
