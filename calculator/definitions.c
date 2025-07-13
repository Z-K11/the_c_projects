#include <stdio.h>
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
    scanf("%e",&x);
    return x;

}
void processor(void)
{
    float ans;
    float temp = input_func();
    int choice = (int)temp;
    switch (choice)
    {
    case  1:
        ans = addition_func(input_func(),input_func());
        printf("The answer is %e",ans);
        break;
    
    case  2:
        ans = subtraction_func(input_func(),input_func());
        printf("The answer is %e",ans);
        break;
    case  3:
        ans = division_func(input_func(),input_func());
        printf("The answer is %e",ans);
        break;
    case  4:
        ans = multiplication_func(input_func(),input_func());
        printf("The answer is %e",ans);
        break;
    default:
        printf("Invalid Input exiting the programe\n");
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
float division_func(float a,float b)
{
    if(b!=0)
    printf("The remainder is %d",(int)a%(int)b);
    else
    {
        printf("Error cannot divide by 0 Exiting\n");
        return 0;
    }
    return a/b;
}