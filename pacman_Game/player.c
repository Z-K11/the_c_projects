#include<stdio.h>
#include<stdlib.h>
#include"player.h"
void set_player_name(struct player* p)
{
    player_count++;
    printf("Please Input name for player %d\n",player_count);
}