#include<stdio.h>
#include"map.h"
void draw_map(const int size,char **map_array)
{
    size_t j;
    for (size_t i=1;i<size;i++)
    {
        for (j=1;j<size*2;j++)
        {
            if (i==1|i==size-1)
            {
                map_array[i][j]="_";
            }
            else if(j==1|j==(size*2)-1)
            {
                map_array[i][j]="|";
            }
            else
            {
                map_array[i][j]=" ";
            }
        }
        map_array[i][j]="\n";
        
    }
}