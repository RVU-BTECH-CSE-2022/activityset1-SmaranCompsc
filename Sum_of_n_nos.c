#include <stdio.h>

void inputlim(int *n)
{
  printf("Enter the number of numbers you have in the back of your mind:");
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

float sumcalculator(int n, float array1[n])
{
  float sum = 0;
  for(int i=0; i<n; i++)
    {
    sum = sum + array1[i];
    }
  return sum;
}

/*
char stringmaker(int n, float array1[n]) // Do not use this as char datatype only contains one character space. It doesn't support multi digit numbers natively
{
  char chr[n];
  for(int i=0; i<n ; i++)
    {
      chr[i] =  "%f", array1[i];
    }
  printf("%s", chr);
  return "";
}
*/

void output(float sum, int n, float array1[n])
{
  printf("The sum of numbers ");
  for (int i=0; i<n; i++)
    {
      printf("%f",array1[i]);
      if (i<n)
      {
        printf(", ");
      }
      else
      {
        printf(" ");
      }
    }
  printf("is %f\n",sum);
}

int main () {
  int n;
  inputlim(&n);
  float array1[n];
  //char chr[n];
  inputelem(n, array1);
  float sum = sumcalculator(n, array1);
  //stringmaker(n,array1);
  output(sum, n, array1);
  return 0;
}