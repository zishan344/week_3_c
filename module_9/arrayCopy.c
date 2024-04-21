#include <stdio.h>
int main()
{
  int n;
  scanf("%d", &n);
  int arrOne[n];
  for (int i = 0; i < n; i++)
  {
    scanf("%d",&arrOne[i]);
  }
  int m;
  scanf("%d",&m);
  int arrTwo[m];
  for (int i = 0; i < m; i++)
  {
    scanf("%d",&arrTwo[i]);
  }

  int copyArr[n+m];
  for (int i = 0; i < n; i++)
  {
    copyArr[i] = arrOne[i];
  }
  int i = n;
  for ( int j = 0; j < m; j++)
  {
    copyArr[i] = arrTwo[j];
    i++;
  }
  

  for (int i = 0; i < n+m; i++)
  {
    printf("%d ", copyArr[i]);
  }
  
  
  return 0;
}