#include<stdio.h>
int main()
{
  int n;
  long S = 0;
  printf("\nNhap vao so n: ");
  scanf("%d", &n);
  for(int i = 1; i <= n; i++)
  {
    S = S + i * i;
  }
  printf("\nTpmg 1^2 + 2^2 + ... + %d^2 la: %ld", n, S);
 
  printf("\n\n");
 }
