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
	
	for( ind=5; ind > 0; ind --)
	{
		printf("\n v[%d] = %d\n", ind, v[ind]);
	}	
	printf("%d", s);
}