#include <stdio.h>
#include <stdlib.h>
int main()
{
 char *ptr,*copy;
 ptr = (char*)malloc(sizeof(char));
 copy = (char*)malloc(sizeof(char));
 char data[] = {'1','2','3','4','5','6','7','8','9','0','a','b','c','d','e','f','A','B','C','D','E','F','g','h','i','j','k','l','m','n','G','H','I','J','K','L','M','N','o','p','q','r','s','t','O','P','Q','R','S','T','u','v','w','x','y','z','U','V','W','X','Y','Z','!','-','@'};
 printf("Enter a 10 digit password: ");
 scanf(" %10s",ptr);
 int check,c2;
 float per;
 for(check=0;ptr[check]!='\0';check++)
 {
  for(c2=0;data[c2]!='\0';c2++)
  {
   if(data[c2] == ptr[check])
   {
    copy[check] = data[c2];
    break;
   }
  }
  per = ((float)check/10)*100;
  printf("progressed %f%,please wait......\n",per);
 }
 printf("Your password has succesfully cracked!!");
 printf("Your password is %s",copy);
 free(ptr);
 free(copy);
 return 0;
}
