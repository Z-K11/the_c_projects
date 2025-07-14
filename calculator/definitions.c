#include <stdio.h>
#include<math.h>
#include "header.h"

void display_menu(void)
{
    printf("Welcome to the calculator program by ZK11 written in the C programming language\nPlease select one of the options below\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Division\n");
    printf("4. Multiplication\n");
    return;
}
float input_func(void)
{
    printf("Input : ");
    float x;
    scanf("%f",&x);
    return x;

}
void processor(int choice)
{
    float ans;
        printf("Inputs follow the same order in calculation as input for example input1+input2 for addition\n");

    switch (choice)
    {
    case  1:
        colorchanger(addition_func(input_func(),input_func()));
        break;
    
    case  2:
        colorchanger(subtraction_func(input_func(),input_func()));
        break;
    case  3:
        colorchanger(division_func(input_func(),input_func()));
        break;
    case  4:
        colorchanger(multiplication_func(input_func(),input_func()));
        break;
    default:
        printf("Invalid Input exiting the program\n");
        break;
    }
    return;
}

float addition_func(float a,float b)
{
    return a+b;
}
float subtraction_func(float a,float b)
{
    return a-b;
}
float multiplication_func(float a,float b)
{
    return a*b;
}
float division_func(float b,float a)
{
    if(b==0)
    {
        printf("Error cannot divide by 0\n");
        return NAN;
    }
    else
    {
        
        printf("The remainder is %d",(int)a%(int)b);
    }
    return a/b;
}
void colorchanger(float ans)
{
    if(isnan(ans))
    {
        return;
    }
    else
    {
        printf("\033[0;34mThe answer is %.2f \033[0m\n",ans);
        return;
    }
}