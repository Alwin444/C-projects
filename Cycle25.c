#include <stdio.h>
int myfun(int x);
int main()
{
    int a,ans;
    printf("Enter the terms: ");
    scanf("%d",&a);
    ans = myfun(a);
    printf("The %d! = %d",a,ans);
    return 0;
}
int myfun(int x)
{
    int ans;
    if(x == 1)
     return 1;
    else
    {
        ans = x*myfun(x-1);
        return ans;
    }
}