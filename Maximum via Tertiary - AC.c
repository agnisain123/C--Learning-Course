// This program is to run a tertiary operator to find the biggest of three numbers without using a fourth variable - a very simple and straightforward code.

#include <stdio.h>

void main()

{

  int a, b, c;

  printf ("Enter the three numbers : \n");
  
  scanf ("%d\n%d\n%d", &a, &b, &c);

  (a > b) ? ((a > c) ? printf ("%d", a) : printf ("%d", c)) : ((b > c) ? printf("%d", b) : printf ("%d", c));

}
