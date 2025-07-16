#include"map.h"
#include"menu.h"
#include"player.h"
#include"score.h"
#include"utils.h"
#include<stdio.h>
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
    char* message = "Welcome to Pacman by ZK11\n1. Single Player\n2. Multiplayer\n3. Highscores\n4. Credits\n5. Exit\n";
    short int a;
    do
    {
        display_menu(color,color_size,message);
        printf("%s",res);
        printf("Please provide an input between 0-9\n");
        a = input_num();
        printf("the input for now is %d",a);

    } while (a>0 & a<=5);
    
    return 0;
}