#include <stdio.h>     
#include <stdlib.h>     
#include <time.h>
int main ()
{
  srand (time(NULL));
 int arr[20];
 for(int i=0;i<20;i++)
 arr[i]=rand()%21;
 for(int i=0;i<20;i++)
 printf("num %d = %d\n",i+1,arr[i]);
 int sum=0;
 for(int i=0;i<20;i++)
 sum+=arr[i];
 printf("The sum is:%d\n",sum);
 printf("The average int sum is:%d\n",sum/20);
 printf("The average real sum is:%0.2lf\n",sum/20.0);
 int max=arr[0];
 int min=arr[0];
 for(int i=0;i<20;i++)
 {
     if(arr[i]>max)max=arr[i];
     if(arr[i]<min)min = arr[i];
 }
 printf("The max num is:%d\n",max);
 printf("The min num is:%d\n",min);
  return 0;
}
