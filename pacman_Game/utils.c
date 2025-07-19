#include<stdio.h>
#include"utils.h"
int input_num(void)
{
    
    short int x;
    scanf("%hd",&x);
    return x;

}
void clear_input_buffer(void)
{
    int buffer;
    while((buffer=getchar())!='\n'&&buffer!=EOF);
    return;
}
