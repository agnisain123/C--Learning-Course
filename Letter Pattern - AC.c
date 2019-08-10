/*
 * Author : DeathNaughT-
 * Date : 12/07/2019 . 
 * This is my first C program. Just a basic prgram to test the syntax of the language.
 * I've been using java for so long but it turns ut that it's one of the slowest languages.
 * C, the mother of all programming languages - syntax is almost same as that of java.
 */

#include <stdio.h>

void main()

{

  //This function prints the diamond patter of numbers using simple for loops. 

  //A B C D E F G H G F E D C B A

  //A B C D E F G   G F E D C B A

  //..

  //A B                       B A

  //A                           A

  int i = 0, j = 0;

  char c = 'A';
  
  for (i = 7; i >= 1; i--)

  {

    for (j = 1; j <= i; j++)

      printf ("%c", c++);

    for (j = 7; j > i; j--)

      printf ("  ");

    for (j = i; j >= 1; j--)

      printf ("%c", c--);

    printf ("\n");

  }

}

/* For any doubts or advices regarding this program, please do comment! *

