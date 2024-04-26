#include <stdio.h>
int main()
{
   int n;
   scanf("%d",&n);
   long arr[n];
  for (int i = 0; i < n; i++)
  {
    scanf("%ld",&arr[i]);
  }
  int div_two=0;
  int div_three=0;
  for (int i = 0; i < n; i++)
  {
    if (arr[i] % 2==0&& arr[i] % 3==0)
    {
      div_two++;
    }else if(arr[i]%2==0){
      div_two++;
    }else if(arr[i]%3==0){
      div_three++;
    }
  }
  printf("%d %d", div_two, div_three);
  
  return 0;
}

