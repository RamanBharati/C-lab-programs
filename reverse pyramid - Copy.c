#include<stdio.h>
int main()
{
  int n=7, r, c, s;

  for(r=n;r>=1;r--)
  {
    for(s=1;s<=n-r;s++) printf(" ");
    for(c=1;c<=r;c++) printf("* ");

    printf("\n");
  }

  return 0;
}
