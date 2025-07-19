#include<stdio.h>
#include<stdlib.h>
#include"player.h"
void set_player_name(struct player* p)
{
    player_count++;
    printf("Please Input name for player %d\n",player_count);
    p->name = malloc(1);
    int ch;
    int str_length=0;
    while ((ch=getchar())!='\n'&& ch != EOF&&str_length<15)
    {
        char * temp = realloc(p->name,str_length+2);
        if (temp==NULL)
        {
            printf("Failed to allocate memory for user name\n");
            return;
        }
        p->name=temp;
        p->name[str_length++]=ch;
    }
    p->name[str_length]='\0';
    printf("Player name = %s\n",p->name);
    return;
    
}