#include"map.h"
#include"menu.h"
#include"player.h"
#include"score.h"
#include"utils.h"
#include<stdio.h>
#include<stdlib.h>
int main(void)
{
    enum color
{
    red,
    green,
    yellow,
    blue,
    magenta,
    cyan,
    white,
    reset
};
    char* color []=
{   
    
    "\033[0;31m", //red
    "\033[0;32m", //green
    "\033[0;33m", //yellow
    "\033[0;34m", //blue
    "\033[0;35m", //magenta
    "\033[0;36m", //cyan
    //"\033[0;37m", white
    
};
//size of colors array
    size_t color_size = sizeof(color)/sizeof(color[0]);
    //color code for resetting color back to default
    char * res = "\033[0m"; //reset
    char * black = "\033[0;30m"; //black
    char* message = "Welcome to Pacman by ZK11\n1. Single Player\n2. Multiplayer\n3. Highscores\n4. Credits\n5. Exit\n\a";
    short int a;
    struct player* p[2];
    double* score =NULL;

    do
    {
        display_menu(color,color_size,message);
        printf("%s",res);
        printf("Please provide an input between 0-9\n");
        a = input_num();
        clear_input_buffer();
        switch(a)
        {
            case 1:
            {
                p[0]=malloc(sizeof(struct player));
                p[0]->score = 0;
                set_player_name(p[0]);

                free(p[0]);
                p[0]=NULL;
                return 0;
            }
            case 2: 
            {
                p[0]=malloc(sizeof(struct player));
                p[1]=malloc(sizeof(struct player));
                p[0]->score=0;
                p[1]->score=0;
                set_player_name(p[0]);
                set_player_name(p[1]);
                free(p[0]);
                free(p[1]);
                p[0]=NULL;
                p[1]=NULL;
                return 0;
            }
            default:
                printf("Invalid Input\n");
        }

    } while (a>0 & a<5);
    return 0;
}