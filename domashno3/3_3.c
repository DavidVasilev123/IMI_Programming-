#include <stdio.h>     
#include <stdlib.h>     
		
int main ()
{
  int N;
  printf("enter N:");
  scanf("%d",&N);
  int arr[N+1];
  for(int i=1;i<=N;i++)
  {
      printf("Enter R%d:",i);
      scanf("%d",&arr[i]);
  }
  int E1=0;
  double E2=0;
  for(int i=1;i<=N;i++)
  E1+=arr[i];
  for(int i=1;i<=N;i++)
  E2+=1.0/arr[i];
  printf("Ekvivalentno posledovatelno: %d\n",E1);
  
  printf("Ekvivalentno usporedno: %0.2lf\n",1.0/E2);
  return 0;
}
