#include <stdio.h>
int main()
{	
	int v[5], ind;
	
	for(ind=0; ind < 5; ind ++)
	{
		printf("v[%d] = ", ind);
		scanf("%d", &v[ind]);	
		
		if(v[ind]>=10 && v[ind]<=30)
		{
			printf("\n v[%d] = %d\n", ind, v[ind]);
		}
	}
	
}