#include <stdio.h>
#include <stdlib.h>

int main ()
{
  double arr[10];
  for(int i=1;i<=10;i++)
  {
      printf("Enter num %d:",i);
      scanf("%lf",&arr[i-1]);
  }
  double sum=0;
  int count=0;
  for(int i=0;i<10;i++)
  {
      printf("%lf ",arr[i]);
      
      if(arr[i]>=5 && arr[i]<=10){count++;sum+=arr[i];}
  }
  printf("\n Sum is: %lf\n count is: %d",sum,count);
  return 0;
}
