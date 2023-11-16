#include <stdio.h>
int main()
{
    int list[10] = {1,2,3,4,5,6,7,8,9,0},pass,L2[10],mod,i,j=0,pass_ar[10];
    printf("Enter the password in numbers (Maximum 8 characters): ");
    scanf("%d",&pass);
    for(i=0;i<8;i++)
    {
        mod = pass%10;
        L2[i] = mod;
        pass = pass/10;
    }
    for(i=0;i<8;i++)
    {
        for(j=0;j<8;j++)
        {
            if(L2[i] == list[j])
            {
                pass_ar[i] = list[j];
                break;
            }
        }
    }
    printf("The password is: ");
    for(i=7;i>=0;i--)
    {
        printf("%d",pass_ar[i]);
    }
    return 0;
}