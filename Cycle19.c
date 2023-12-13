#include <stdio.h>
int main()
{
    int*ptr,dup[2];
    printf("Enter any two integer values: ");
    scanf("%d%d",&dup[0],&dup[1]);
    ptr = dup;
    printf("The content of the %dth position of array variable: %d\nContent in the pointer variable: %d\nAddress of the %dth position of array variable: %u\nAddres of the pointer variable: %u\n",0,dup[0],*ptr,0,ptr,&ptr);
    ptr++;
    printf("The content of the %dth position of array variable: %d\nContent in the pointer variable: %d\nAddress of the %dth position of array variable: %u\nAddres of the pointer variable: %u\n",1,dup[1],*ptr,1,ptr,&ptr);
    
}