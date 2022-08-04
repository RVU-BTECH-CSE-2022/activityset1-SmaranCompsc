 #include<stdio.h>
// Adding two numbers  

int main(){

  float num1 , num2, sum;  
  printf("Enter the 1st number:");
  scanf("%f",&num1);  
  printf("Enter the 2nd number:");
  scanf("%f",&num2);
  sum = num1 + num2;
  printf("The sum of two numbers %f and %f is %f\n",num1, num2, sum);  
  return 0;
  }
