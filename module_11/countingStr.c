#include <stdio.h>
#include <string.h>
int main()
{
   char str[100];
   scanf("%s",str);
   int cnt[26]={0};
   for (int i = 0; i < strlen(str); i++)
   {
    int val = str[i]-'a';
    // printf("%d ",val);
    cnt[val]++;
   }

     for (int i = 0; i < strlen(str); i++)
   {
       int value = str[i] - 97;
     if(cnt[value]!=0){
      printf("%c - %d \n",value+97, cnt[value]);
     }
      cnt[value]=0;
     
      // printf("%d ", value);
  
   }  
   
   
  return 0;
}