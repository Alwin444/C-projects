#include <stdio.h>
void my_fun(int x);
int main()
{
    int a;
    printf("Enter here: ");
    scanf("%d",&a);
    my_fun(a);
    return 0;
}
void my_fun(int x)
{
    int mod = x%2;
    if(mod == 0)
     printf("The number %d is even",x);
    else
     printf("The number %d is odd",x);
}