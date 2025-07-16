#include<stdio.h>
#include"menu.h"

void display_menu(char* color[],size_t color_size,char *string)
{
    for (size_t i =0;string[i]!='\0';i++)
    {
        printf("%s%c",
            color[(i+1)%color_size],string[i]);
    }
    return;
}
