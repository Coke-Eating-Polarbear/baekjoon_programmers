#include<stdio.h>
#include<stdlib.h>
int compare(const void *a, const void *b)
{
    return (*(int*)a - *(int*)b);
}

int main ()
{
  unsigned int count;
  scanf("%u",&count);
  int array[count];
  int temp;
  for (int i = 0; i < count; i++)
	{
	  scanf ("%d", &array[i]);
	}
  /*for (int k = 0; k < count - 1; k++)
	{
	  for (int a = k+1; a < count; a++)
		{
		  if (array[k] > array[a])
			{
			  temp = array[k];
			  array[k] = array[a];
			  array[a] = temp;
			}
		}
	}*/
	qsort(array, count, sizeof(int), compare);
	for(int j=0;j<count;j++)
	    printf("%d\n",array[j]);
  return 0;
}