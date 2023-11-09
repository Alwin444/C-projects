#include <stdio.h>
#include <string.h>
int main()
{
    char a[202][202],dup[202];
    int n,i,j,che;
    printf("Enter total number of inputs: ");
    scanf("%d",&n);
    while((getchar())!='\n');
    for(i=0;i<n;i++)
    {
        printf("Enter the string: ");
        fgets(a[i],sizeof(a[i]),stdin);
    }
    i = 0;
    while(i<n-1)
    {
        j = i;
        while(j<n-1)
        {
            che = strcmp(a[i],a[j+1]);
            if(che>0)
            {
                strcpy(dup,a[i]);
                strcpy(a[i],a[j+1]);
                strcpy(a[j+1],dup);
                break;
            }
            j++;
        }
        if(j==n-1)
            i++;
    }
    printf("Sorted Order: \n");
    for(i=0;i<n;i++)
        printf("%s",a[i]);
    return 0;
}