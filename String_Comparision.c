#include <stdio.h>

void inputlim(int *n, int x)
{
  printf("Enter the length of word no. %d:",x);
  scanf("%d", n);
}
  
void inputword(char str[],int x)
{
  printf("Enter word no. %d: ", x);
  scanf("%s", str);
}

int strcompare(int n1, int n2, char str1[], char str2[])
{
  int len = n1;
  if(len>n2)
  {
    len = n2;
  }
  int l = 0 ;
  for(int i = 0; i<len; i++)
  {
    if (str1[i]<str2[i])
    {
      l = 1;
      return l;
    }
    else if (str1[i]>str2[i])
    {
      l = 2;
      return l;
    }
  }
  
  if (n1 == n2)
  {
    l = 0;
    }
  else if (n1<n2)
  {
    l = 1;
    }
  else if (n1>n2)
  {
    l = 2;
  }
  return l;
}

void output(char str1[], char str2[], int l)
{
  printf("The given words are %s and %s.\n", str1, str2);

  if (l == 0)
  {
    printf("Both words are the same...\n");
  }
  
  else if (l == 1)
  {
    printf("%s comes first.\n",str1);
  }
  else if (l == 2)
  {
    printf("%s comes first.\n",str2);;
  }
}

int main () {
  int n1,n2;
  inputlim(&n1,1);
  inputlim(&n2,2);
  char str1[n1];
  char str2[n2];
  inputword(str1, 1);
  inputword(str2, 2);
  int l = strcompare(n1, n2, str1, str2);
  output(str1, str2, l);
  return 0;
}
