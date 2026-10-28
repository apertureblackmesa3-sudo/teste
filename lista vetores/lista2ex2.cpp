#include <stdio.h>
int main()
{
	int v[8], ind, maior;
    for(ind=0; ind < 9; ind++)
    {
    	printf("v[%d] = ", ind);
    	scanf("%d", &v[ind]);
    }
    maior = v[0];
    for (int ind = 1; ind < 8; ind++) 
	{
        if (v[ind] > maior) 
		{
            maior = v[ind];
        }
		
    }
printf(" maior valor e: %d\n", maior);
}

