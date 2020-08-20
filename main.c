
#include <stdio.h>
int main(void)
{

float a, b;
  float ans;
  printf("Enter base : ");
  scanf("%f", &a);
  printf("Enter high : ");
  scanf("%f", &b);
  ans = 0.5*a*b;
  printf("Answer is %0.2f", ans);
  return 0;
}
