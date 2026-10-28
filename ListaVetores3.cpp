#include <stdio.h>
int main()
{	
	int v[5], ind, s=0;
	
	for(ind=5; ind > 0; ind --)
	{
		printf("v[%d] = ", ind);
		scanf("%d", &v[ind]);	
		s=s+v[ind];
	}
	
	
	printf("Soma igual a: %d", s);
}
