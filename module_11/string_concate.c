#include <stdio.h>
#include <string.h>
int main()
{
  char a[100], b[100];
  scanf("%s %s", a, b);
  // manually concat string;
 /*  int k = strlen(a);
  for (int i = 0; i <= strlen(b); i++)
  {
     a[k] =b[i];
     k++;
  } */
  // built in fuction
  strcat(a,b);
  // end
  printf("%s", a);
  printf(" %s", b);
  return 0;
}