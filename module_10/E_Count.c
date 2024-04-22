#include <stdio.h>
#include <string.h>
int main()
{
  char str[1000001];
  scanf("%s", str);
  int totalValue=0;
  for (int i = 0; i < strlen(str);i++)
  {
     totalValue+=str[i]-'0';
  }    
  printf("%d",totalValue);
  return 0;
}