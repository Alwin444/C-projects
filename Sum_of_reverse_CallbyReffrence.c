// We can use same variable in functions do not care about it.
#include <stdio.h>
int reverse(int *p1);
int sums(int *p1);
int main()
{
    int a;
    printf("Enter here: ");
    scanf("%d",&a);
    int dup = a;
    int rev,sum;
    rev = reverse(&a);
    sum = sums(&dup);
    printf("The reverse is %d\n",rev);
    printf("The sum of reverse is %d",sum);
    return 0;
}
int reverse(int *p1)
{
    int mod,rev = 0;
    while(*p1 != 0)
    {
        mod = *p1%10;
        rev = (rev*10)+mod;
        *p1 = *p1/10;
    }
    return rev;
}
int sums(int *p1)
{
    int mod,rev = 0;
    while(*p1 != 0)
    {
        mod = *p1%10;
        rev = rev+mod;
        *p1 = *p1/10;
    }
    return rev;  
}
