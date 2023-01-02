#include <stdio.h>      
#include <stdlib.h>     

int main ()
{
  int numbers[] = {10,20,5,6,78,101};
  int sum=0;
  for(int i=0;i<6;i++)
  sum+=numbers[i];
  int mult =1;
  for(int i=0;i<6;i++)
  mult*=numbers[i];
  printf("The numbers are: 10,20,5,6,78,101\n");
  printf("The sum is: %d\n the multiplication is:%d\n the avg is:%d\n",sum,mult,sum/6);
  return 0;
}
