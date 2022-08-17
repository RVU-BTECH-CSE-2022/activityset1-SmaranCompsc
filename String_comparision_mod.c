#include <stdio.h>
int MAX_LIMIT = 35;
/*
void inputlim(int *n, int x)
{
  printf("Enter the length of word no. %d:",x);
  scanf("%d", n);
}
*/

void input(char str1[], char str2[])
{
  inputword(str1, 1);
  inputword(str2, 2);
}

void inputword(char str[],int x)
{
  printf("Enter word no. %d: ", x);
  scanf("%s", str);
}

int lenword(char str[])
{
  int l = 0;
  for(int i = 0; i < MAX_LIMIT; i++)
  {
    if (str[i] == "")
    {
      break;
    }
    else
    {
      l = i;
    }
  }
  printf("Len:%d",l);
  return l;
}

int length(char str1[], char str2[], int *n1, int *n2)
{
  n1 = lenword(str1);
  n2 = lenword(str2);
  printf("%d,%d\n",n1,n2);
  return 0;
}

void strcompare(int n1, int n2, char str1[], char str2[])
{
  int len = n1;
  if(len>n2)
  {
    len = n2;
  }
  output(str1, str2, 0);
  for(int i = 0; i<len; i++)
  {
    if (str1[i]<str2[i])
    {
      output(str1, str2, 1);
      return;
    }
    else if (str1[i]>str2[i])
    {
      output(str1, str2, 2);
      return;
    }
  }
  
  if (n1 == n2)
  {
    printf("Both words are the same...\n");
  }
  else if (n1<n2)
  {
    output(str1, str2, 1);
  }
  else if (n1>n2)
  {
    output(str1, str2, 2);
  }
  return;
}

void output(char str1[], char str2[], int i)
{
  if (i == 0)
  {
    printf("The given words are %s and %s.\n", str1, str2);
  }
  else if (i == 1)
  {
    printf("%s comes first.\n",str1);
  }
  else if (i == 2)
  {
    printf("%s comes first.\n",str2);;
  }
}

int main () {
  int n1,n2;
  //inputlim(&n1,1);
  //inputlim(&n2,2);
  char str1[MAX_LIMIT], str2[MAX_LIMIT];
  input(str1, str2);
  length(str1, str2, &n1, &n2);
  printf("%d\n%d",n1,n2);
  strcompare(n1, n2, str1, str2);
  return 0;
}
