#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i;
    struct student
    {
      int roll,age;
      char name[12];
      float per;
    };
    typedef struct student A;
    A *ptr;
    ptr = (A*)malloc(12*(sizeof(A)));
    for(i=0;i<10;i++)
    {
        printf("Enter the name: ");
        scanf("%s",ptr[i].name);
        printf("Enter the Roll number and Age: ");
        scanf("%d%d",&ptr[i].roll,&ptr[i].age);
        printf("Enter the percentage obtained in final semester: ");
        scanf("%f",&ptr[i].per);
    }
    for(i=0;i<10;i++)
     printf("Roll number: %d\tStudent name: %s\tAge: %d\tPercentage of marks: %f\n",ptr[i].roll,ptr[i].name,ptr[i].age,ptr[i].per);
    free(ptr);
    return 0;
}