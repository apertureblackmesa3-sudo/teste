#include <stdio.h>
int main()
{	
int v[5], e, nt;
	for(e=0; e < 5; e ++)
	{
		printf("v[%d] = ", e);
		scanf("%d", &v[e]);
		nt=nt+v[e];
	}
	nt=nt*5;
	printf("%d",nt);
}
