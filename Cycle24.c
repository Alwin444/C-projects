#include <stdio.h>
void myfun(int *ptr);
int rev(int *ptr);
int main()
{
    int a,re;
    printf("Enter here: ");
    scanf("%d",&a);
    myfun(&a);
    re = rev(&a);
    printf("\nThe reverse of %d is %d",a,re);
    return 0;
}
void myfun(int *ptr)
{
    int sum = 0,dup,mod;
    dup = *ptr;
    while(dup != 0)
    {
        mod = dup%10;
        sum = sum + mod;
        dup = dup/10;
    }
    printf("The sum of digits is: %d",sum);
}
int rev(int *ptr)
{
    int sum = 0,mod;
    int y = *ptr;
    while(y != 0)
    {
       mod = y%10;
       sum = (sum*10) + mod;
       y = y/10;
    }
    return(sum);
}