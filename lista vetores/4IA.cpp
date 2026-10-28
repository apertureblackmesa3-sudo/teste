#include <stdio.h>

int main()
{
    int v[5], ind, cont = 0;
    
    for(ind = 0; ind < 5; ind++)
    {
        printf("v[%d] = ", ind);
        scanf("%d", &v[ind]);   
        
        if(v[ind] >= 10 && v[ind] <= 30)
        {
            cont++;
        }
    }
    
    printf("\nHa %d elementos entre 10 e 30\n", cont);
    
   
}