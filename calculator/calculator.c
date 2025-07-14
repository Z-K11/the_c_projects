#include "header.h"
int main(void)
{
    int choice;
     do
    {
    display_menu();
    float temp = input_func();
    choice = (int)temp;
    processor(choice);
    } while (choice!=0);
    return 0;
}
