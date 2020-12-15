/*

Author: Ciara Lynch.
Purpose: To print a hailstone sequence

*/

#include <stdio.h>
#include <stdlib.h>

/* built function with correct maths to deal with hailstones */
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
/* built function which takes a number from the command line */
int main(int argc, char *argv[1])
{
  int arg1 = atoi(argv[1]);
  /*this while loop deals with actually printing my sequence*/
  while(arg1 != 1){
    arg1 = hailstone(arg1);
    printf("%d\n", arg1);
  }
  return 0;
}