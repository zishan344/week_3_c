#include <stdio.h>
int main()
{
   char a[6];
   int length = sizeof(a)/1;
   printf("%d\n", length);
   for (int i = 0; i < 6; i++)
   {
    scanf("%c", &a[i]);
   }
   for (int i = 0; i < 6; i++)
   {
    printf("%c\n", a[i]);
   }
  return 0;
}