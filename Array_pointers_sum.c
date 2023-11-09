#include <stdio.h>
int main()
{
    int a[202],n = 0,*p1,sum = 0;
    char b;
    p1 = a;

    do
    {   
        printf("Enter the element: ");
        scanf("%d",(p1+n));
        sum = sum + *(p1+n);
        n++;
        printf("Do you want to enter again(y/n): ");
        scanf(" %c",&b);
    }while(b=='y'||b=='Y');
    printf("The sum of %d element is %d",n,sum);
    return 0;
}