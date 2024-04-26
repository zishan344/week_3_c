#include <stdio.h>
#include <string.h>
int main()
{
   int n;
   scanf("%d", &n);
   int c=0,s=0,d=0;
   char str[10000];
   for (int i = 0; i < n; i++)
   {
    scanf("%s",str);
    for (int j = 0; j < strlen(str); j++)
    {
      if(str[j]>= 48 && str[j]<=57){
       d++;
      } else if(str[j]>=65 && str[j]<=90){
        c++;
      } else if(str[j]>=97 && str[j]<=122){
        s++;
      }  
       
    }
    printf("%d %d %d",c,s,d);
    c=0;
    s=0;
    d=0;
    printf("\n");
    //  printf("%d\n",str);
   
   }
   
  return 0;
}