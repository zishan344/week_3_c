#include <stdio.h>
#include <string.h>
int main()
{
  char a [100],b [100];
  scanf("%s %s", a,b);
  // printf("%s", b); 
  //organic way to copy string
  /* for (int i = 0; i <= strlen(b); i++)
  {
    a[i] = b[i];
  } */
  //build in function for copying string
  strcpy(a,b);
 printf("%s", a);
  return 0;
}