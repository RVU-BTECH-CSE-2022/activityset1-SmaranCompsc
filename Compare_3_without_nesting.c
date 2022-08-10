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
  //float l=x; //Temp variable
  if (x<y){ // first condition
    x = y;
  }
  
  if (x<z){ // comparing greater number from x and y to z
    x = z;
  }
  return x;
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

/*if (<y){ // else of 1st condition
    l = y; 
  }*/
  // l is now assigned to the number which is largest between x and y 