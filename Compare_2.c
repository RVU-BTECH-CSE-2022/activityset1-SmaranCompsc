#include<stdio.h>

float find_largest (int a, int b)
{
  char c;
  if (a < b) {
    c = b;
  }
  else{
    c = a;
  }
  return c;
}

int main(){
  float a,b;
  printf("Enter the two numbers:\n");
  scanf("%f%f", &a, &b);
  float c = find_largest(a,b);
  printf("The largest number among %f and %f is %f\n",a,b,c);
  return 0;
}