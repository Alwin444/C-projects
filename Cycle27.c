#include <stdio.h>
int main()
{
    union stud
    {
        int a;
        char f,name[10];
        float per;
    };
    union stud s1;
    printf("Enter the name: ");
    scanf("%s",s1.name);
    printf("\nThe name is %s",s1.name);
    printf("\nEnter the class no: ");
    scanf("%d",&s1.a);
    printf("\nThe class number is %d",s1.a);
    printf("\nEnter the total percentage: ");
    scanf("%f",&s1.per);
    printf("\nThe percentage is %f",s1.per);
    return 0;
}
