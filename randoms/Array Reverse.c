#include <stdio.h>
#include <stdlib.h>
int main () 
{
  int arr[6],arrLen;
  printf("Input array length : \n");
  scanf("%d",&arrLen);
  
  for(int x=0;x<arrLen;x++){
      printf("arr[%d] = ",x);
      scanf("%d", &arr[x]);
  }
  printf("Your ARRAY : [");
  for(int x=0;x<arrLen;x++){
      printf("%d,",arr[x]);
  }
  printf("]\n");
  
  for(int x=0;x<arrLen/2;x++){
      int temp;
      temp=arr[x];
      arr[x]=arr[(arrLen-1)-x];
      arr[(arrLen-1)-x]=temp;
  }
  printf("Reversed ARRAY : [");
  for(int x=0;x<arrLen;x++){
      printf("%d,",arr[x]);
  }
  printf("]\n");
  
  
  
}
