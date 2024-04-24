#include <stdio.h>
#include <string.h>
int main()
{
  char a[100],b[100];
  scanf("%s",a, b);
  int value = strcmp(a,b);
  //  printf("%d",value);
   if(value > 0){
    printf("B Choto");
   }else if (value < 0 ){
    printf("A Choto");
   }else{
    printf("Same");
   }
  return 0;
}