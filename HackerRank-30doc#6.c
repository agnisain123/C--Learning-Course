#include <stdio.h>

#include <string.h>

void main()
{
    
    int T = 0;

    scanf("%d ", &T);

    for (int i = 0; i < T; i++)
    {

       char str[100];
       
       scanf("%s", str);
       
       char word1[100], word2[100];

       int k1 = 0, k2 = 0;
       
       for (int j = 0; j < strlen(str); j = j + 2)
       {
          
          word1[k1++] = str[j];

       }

       for (int j = 1; j < strlen(str); j = j + 2)
       {

          word2[k2++] = str[j];

       }

       printf("%s %s\n", word1, word2);

    }

}


