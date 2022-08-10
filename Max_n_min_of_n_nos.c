#include <stdio.h>

void inputlim(int *n)
{
  printf("Enter the number of elements you have in the back of your mind:");
  scanf("%d", n);
}
  
void inputelem(int n, float array1[n])
{
  for(int i = 0; i<n; i++)
    {
    printf("Enter element no. %d: ", i+1);
    scanf("%f", &array1[i]);
    }
}

float maxcalculator(int n, float array1[n])
{
  float max;
  max = array1[0];
  for(int i=1; i<n; i++)
    {
    if (array1[i] > max)
      {
      max = array1[i];
      }
    }
  return max;
}

float mincalculator(int n, float array1[n])
{
  float min;
  min = array1[0];
  for(int i=1; i<n; i++)
    {
    if (array1[i] < min)
      {
      min = array1[i];
      }
    }
  return min;
}

void output(float max, float min,int n, float array1[n])
{
  printf("The given numbers are ");
  for (int i=0; i<n; i++)
    {
      printf("%f",array1[i]);
      if (i<n)
      {
        printf(", ");
      }
      else
      {
        printf("\n");
      }
    }
  printf("The largest number is %f.\n",max);
  printf("The smallest number is %f.\n", min);
}

int main () {
  int n;
  inputlim(&n);
  float array1[n];
  inputelem(n, array1);
  float max = maxcalculator(n, array1);
  float min = mincalculator(n, array1);
  output(max, min, n, array1);
  return 0;
}