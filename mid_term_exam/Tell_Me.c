#include <stdio.h>
int main()
{
   int t;
   scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
      int n;
      int value;
      int ans=0;
      scanf("%d", &n);
      int arr[n];
      for (int j = 0; j < n; j++)
      {
        scanf("%d", &arr[j]);
      };
      
      scanf("%d", &value);
      for (int j = 0; j < n; j++)
      {
        if(arr[j]==value){
          ans=1;
        }
      }
      if(ans){
        printf("YES\n");
      }else{
        printf("NO\n");
      }
    }
    
  return 0;
}