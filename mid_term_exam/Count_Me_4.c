#include <stdio.h>
#include <string.h>
int main()
{
   char s[10000];
   char cr[26]={0};
   scanf("%s", s);
   for (int i = 0; i < strlen(s); i++)
   {
   int value = s[i]-97;
   cr[value]++;
   }
   for (int i = 0; i < 26; i++)
   {
    if(cr[i]!=0){
    printf("%c - %d\n",i+97, cr[i]);
    }
   }
   
   
  return 0;
}