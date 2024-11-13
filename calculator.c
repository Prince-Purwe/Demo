#include<stdio.h>
#include<conio.h>
void main()
{
    float a,b,c,result;
    char op;
    printf("Simulation of Simple Calculator\n");
    printf("Enter your expression\n");
    scanf("%f %c %f",&a,&op,&b);
    switch(op)
    {
    case '+':
       result = a+b;
    break;
    case '-':
       result = a-b;
    break;
    case'*':
       result = a*b;
    break;
    case '/':
       result = a/b;
    break;
    default:
        printf("INVALID EXPRESSION");
    }   
    printf("Result= %f",result);
    getch();
}