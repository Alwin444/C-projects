#include <stdio.h>
void my_fun(int x,int y,char z);
int main()
{
    int a,b;
    char c;
    printf("Enter first and second operand: ");
    scanf("%d%d",&a,&b);
    printf("Enter operation character: ");
    scanf(" %c",&c);
    my_fun(a,b,c);
    return 0;
}
void my_fun(int x,int y,char z)
{
    switch(z)
    {
        case '+': printf("The answer is: %d",x+y);
                  break;
        case '-': printf("The answer is: %d",x-y);
                  break;
        case '*': printf("The answer is: %d",x*y);
                  break;
        case '/': printf("The answer is: %d",x/y);
                  break;
        default : printf("Enter valid operator"); 
    }
}