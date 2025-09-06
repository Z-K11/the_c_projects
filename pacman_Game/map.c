#include<stdio.h>
#include"map.h"
void draw_map(const int size)
{
    for (size_t i=1;i<size;i++)
    {
        for (size_t j=1;j<size*2;j++)
        {
            if (i==1|i==size-1)
            {
                printf("_");
            }
            else if(j==1|j==(size*2)-1)
            {
                printf("|");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
        
    }
}