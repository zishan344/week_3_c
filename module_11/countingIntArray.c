#include <stdio.h>
int main()
{
  int n;
  scanf("%d", &n);
  int arr[n];

   for (int i = 0; i < n; i++)
  {
    scanf("%d", &arr[i]);
  };

  int count[7]={0};

  for (int i = 0; i < n; i++)
  {
 
  //  int val = arr[i];
   count[arr[i]]++;
  } ;
  for (int i = 0; i < 7; i++)
  {
    printf("%d - %d\n", i, count[i]);
  }
  
  
  return 0;
}