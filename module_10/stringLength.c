#include <stdio.h>
#include <string.h>
int main()
{
  char str[100];
  // gets(str);
   scanf("%s",str);
  int strLength=strlen(str);
  // printf("%s", str);
  /*  for (int i = 0; str[i]!='\0'; i++)
   {
     strLength++;
   } */
  /*  int i = 0;
   while (str[i]!='\0')
   {
    strLength++;
    i++;
   } */


   printf("%d", strLength);
  
  return 0;
}