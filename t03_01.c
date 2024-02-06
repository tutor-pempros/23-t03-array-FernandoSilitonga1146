// 12S23002 - FERNANDO ALEXANDER SILITONGA

#include <stdio.h>

int main(int _argc, char **_argv)
{
int m,i;

scanf("%d", &m);

  int n [m];

  for (int i = 0; i < m; i++)
  {
    scanf("%d", &n[i]);
  }
  for(int i = 0; i < m; i++)
  {
    for(int j = i+1; j < m; j++)
    {
      if(n[i] > n[j])
      {
        int temp = n[i];
        n[i] = n[j];
        n[j] = temp;
      }
    }
  }

  printf("%d\n", n[0]);
  printf("%d", n[m-1]);
  return 0;
}
