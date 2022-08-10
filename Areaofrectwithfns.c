#include <stdio.h>

void input(float *l, float *b) // Using pointer
{
  printf("Enter the length and breadth:\n");
  scanf("%f%f", l,b);
}

void AreaOfRect(float l, float b, float *a)
{
  *a = l*b;
}

void output(float a)
{
  printf("The are of the rectangle is %f\n",a);
  return;
}

// &a = Address of a
// *a = Pointing a to whatever address

int main()
{
  float l,b,area;
  input(&l,&b);
  AreaOfRect(l,b,&area);
  output(area);
  return 0;
  }