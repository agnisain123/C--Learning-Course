#include <stdio.h>

  int main()

  {

    char another;

    int num;

    do
    {

       printf ("\nEnter a number \n");      

       scanf ("%d", &num);

       printf ("square of %d = %d \nPress y/n to continue or exit : ", num, num*num);

       scanf (" %c", &another);

    }
    
    while (another=='y');

    return 0;

  }
