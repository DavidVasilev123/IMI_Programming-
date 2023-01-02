#include <stdio.h>
#include <stdlib.h>
#include<time.h>

int main ()
{
  srand (time (NULL));
  int arr[101];
  for (int i = 0; i < 100; i++)
    arr[i] = rand () % 21 - 10;
    
  int max = arr[0];
  int min = arr[0];
  for (int i = 0; i < 100; i++)
    {
        printf("%d ",arr[i]);
      if (arr[i] > max)
	max = arr[i];
      if (arr[i] < min)
	min = arr[i];
    }
  printf ("\nThe max num is:%d\n", max);
  printf ("The min num is:%d\n", min);
  return 0;
}
