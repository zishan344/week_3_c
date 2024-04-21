#include <stdio.h>
int main()
{
  int array_size;
  scanf("%d", &array_size);
  int arr[array_size+1];
  printf("array size  : %d\n", array_size);
 for (int i = 0; i < array_size; i++)
 {
  scanf("%d", &arr[i]);
 }
 int pos,value;
 scanf("%d %d", &pos, &value);
  // printf("%d %d", pos,value);
  for (int i =array_size; i >=pos+1; i--)
 {
   arr[i] = arr[i-1];
 }  

  arr[pos]=value;
 for (int i = 0; i <= array_size; i++)
 {
  printf("%d ",arr[i]);
 }  
 
 
  return 0;
}