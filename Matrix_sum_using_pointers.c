#include <stdio.h>
int main()
{
    int a[202][202],b[202][202],ro,co,*p1,*p2,i,j;
    printf("Enter the order[ROW x COLUMN]: ");
    scanf("%d %d",&ro,&co);
    p1 = &a[0][0];
    p2 = &b[0][0];
    for(i=0;i<ro;i++)
    {
        for(j=0;j<co;j++)
        {
            printf("Enter the element for first matrix[ROWISE]: ");
            scanf("%d",(p1+i*co+j));
        }
    }
    for(i=0;i<ro;i++)
    {
        for(j=0;j<co;j++)
        {
            printf("Enter the element for second matrix[ROWISE]: ");
            scanf("%d",(p2+i*co+j));
        }
    }
    for(i=0;i<ro;i++)
    {
        for(j=0;j<co;j++)
        {
           if(j==co-1)
            printf("%d",*(p1+i*co+j)+*(p2+i*co+j));
           else
            printf("%d\t",*(p1+i*co+j)+*(p2+i*co+j));
        }
        printf("\n");
    }
    return 0;
}