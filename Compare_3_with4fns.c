#include<stdio.h>

float inputnum(char chr[])
{
  float m;
  printf("%s", chr);
  scanf("%f", &m);
  return m;
}

float find_largest (int x, int y, int z)
{
  float a;
  if (x < y) {
    if (y > z) {
      a = y;
      }
    else {
      a = z;
    }
  }
  else{
    if (x > z){
      a = x;
    }
    else {
      a = z;
    }
  }
  return a;
}

float output(float x, float y, float z, float a)
{
  printf("The largest number among %f, %f and %f is %f\n",x,y,z,a);
  return 0;
}

int main(){
  float x,y,z;
  printf("Enter the three numbers:\n"); 
  x = inputnum("1st no:");
  y = inputnum("2nd no:");
  z = inputnum("3rd no:");
  float a = find_largest(x,y,z);
  output(x,y,z,a);
  return 0;
}