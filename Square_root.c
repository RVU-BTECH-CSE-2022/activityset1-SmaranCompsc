#include <stdio.h>
#include <math.h>

void input(float *n) // Using pointer
{
  printf("Enter the numeber:");
  scanf("%f\n",n);
}

float CalculateSqrt(float n)
{
  //float sqrt = n**0.5;
  float sqrt = powf(n,0.5);
  return sqrt;
}

void output(float a)
{
  printf("The are of the rectangle is %f\n",a);
  
}

// &a = Address of a
// *a = Pointing a to whatever address

int main()
{
  float n;
  input(&n);
  float sqrt = CalculateSqrt(n);
  output(sqrt);
  return 0;
  }