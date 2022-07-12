#include <stdio.h>
#include <stdlib.h>
#include <math.h>       //sqrt関数

double myRoot(double x) // 返り値：double型
{
  double y;             //返り値：double型
  if( x < 0 ){          //0未満
    exit(1);
  }
  y = sqrt(x);
  return y;
}

int main(void)
{
  int i = 0; 
  double *x = (double *)malloc(sizeof(double) * 100);

  while( i <= 100 ){
    x[i] = myRoot((double)i);
    i++;
  }

  printf("x[0]=%f\n", x[0]);
  printf("x[1]=%f\n", x[1]);
  printf("x[2]=%f\n", x[2]);
  printf("x[3]=%f\n", x[3]);
  printf("x[4]=%f\n", x[4]);
  printf("x[99]=%f\n", x[99]);
  printf("x[100]=%f\n", x[100]);

  free(x);
  return 0;
}
