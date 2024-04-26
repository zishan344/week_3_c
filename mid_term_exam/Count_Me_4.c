#include <stdio.h>
#include <string.h>
int main()
{
   char s[10001];
  fgets(s, sizeof(s), stdin);
   int cnt[26]={0};
   for (int i = 0;s[i] != '\0'; i++)
   {
    if ('a' <= s[i] && s[i] <= 'z') { //  
            cnt[s[i] - 'a']++;
        }
   }

     for (int i = 0; i < 26; i++) {
        if (cnt[i] != 0) {
      printf("%c - %d\n", i + 'a', cnt[i]);
        }
    }

   
   
  return 0;
}