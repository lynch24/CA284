#include <stdio.h>
#include <stdlib.h>


int hailstone(int n)
{
  if (n % 2 == 0) {
    n = n / 2;
  }
  else {
    return n = (3 * n) + 1;
  }
  return n;
}

int main(int argc, char *argv[1])
{
  int arg1 = atoi(argv[1]);
  
  while(arg1 != 1){
    arg1 = hailstone(arg1);
    printf("%d\n", arg1);
  }
  return 0;
}