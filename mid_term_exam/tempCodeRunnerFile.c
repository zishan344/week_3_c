#include <stdio.h>
#include <math.h>
int main()
{
  int n;
  scanf("%d", &n);
  int mOne,mTwo,d;
  int totalDay;
  for (int i = 1; i <= n; i++)
  {
    // printf("%d ",i);
    scanf("%d %d %d",&mOne,&mTwo,&d);
    totalDay = d/(mOne + mTwo)*mTwo;
   
     
    printf("%d\n", totalDay);
  }
  
  return 0;
}