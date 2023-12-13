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
    int mod,sum = 0,y;
    y = x;
    while(x != 0)
    {
        mod = x%10;
        sum = (sum*10)+mod;
        x = x/10;
    }
    printf("The reverse of the number %d is: %d",y,sum);
}