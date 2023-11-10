#include <stdio.h>
#include <string.h>
int main()
{
    char a[202][202],dup[202],b;
    int n = 0,i,j,che;
    do
    {
        printf("Enter here: ");
        fgets(a[n],sizeof(a[n]),stdin);
        n++;
        printf("Do you want to enter again(y/n): ");
        scanf(" %c",&b);
        while((getchar())!='\n'); //To avoid input buffer
    }while(b=='y'||b=='Y');
                             //Note that we use fgets function instead of gets because of certain vulnerabilities
                            //Syntax: fgets(array_name,sizeof(array_name),stdin);
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
