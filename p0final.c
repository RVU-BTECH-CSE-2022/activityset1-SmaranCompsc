#include<stdio.h>

void inputlim(int *n, int x)
{
  printf("Enter the length of word no. %d:",x);
  scanf("%d", n);
}
  
void inputword(int n, char array1[n],int x)
{
  printf("Enter word no. %d: ", x);
  scanf("%s", &array1);
}

int main(){
  int n1,n2;
  inputlim(&n1,1);
  inputlim(&n2,2);
  char c[n1], d[n2];

  inputword(n1, c[n1], 1);
  inputword(n2, d[n2], 2);
  
  printf("exec\n");
  if (d[0]>c[0])
  {
    printf("Yupp\n");
  }
  else if (d[0] == c[0])
  {
    printf("O...kay\n");
  }
  else if (d[0]<c[0])
  {
    printf("WHAT?!!\n");
  }
  else
  {
    printf("Screw you\n");
  }
  return 0;
}