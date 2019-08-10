/* @DeathNaughT, 30/07/2019
 * Copyright protected*/

#include <stdio.h>

#include <string.h>

int main()

{

    char s[10];

    char result[8];

    scanf("%s", s);

    /* s[0] & s[1] - hours -  cases : (1) 12:00:00AM - 00:00:00  (2) 12:00:00PM - 12:00:00

                                      (3) 1 - 7 PM - 13 - 19  (4) 8 - 11PM - 20 -23 
  
       s[3] & s[4] - minutes - check whether in bounds (<60)
    
       s[6] & s[7] - seconds - check whether in bounds (<60)
    
       s[8] - 'A'/'P'
    
       s[9] - 'M'

    */

    int hour1, hour2, minute1, second1;
   
    hour1 = s[0] - 48;// -48 to extract integer values
   
    hour2 = s[1] - 48;

    minute1 = s[3] - 48;

    second1 = s[6] - 48;

    if(minute1 > 5 || second1 > 5 || (hour1 > 0 && hour2 > 2))  return 0; // To check for invalid inputs

    if (s[8] == 'A' && (hour1 == 1 && hour2 == 2)) // case 1 

    {

        s[0] = '0';

        s[1] = '0';

    }

    if (s[8] == 'P')

    {

        if (hour1 == 0 && hour2 <= 7) // case 3 
         
        {
          
            hour2 = hour2 + 50;  // reverting back to ASCII values after adjustment

            hour1 = 49; // reverting back to ASCII values after adjustment

        }

        else if (hour1 == 1 && hour2 == 2) // case 2 
        {
        
            hour1 = 49; // reverting back to ASCII values after adjustment

            hour2 = 50; // reverting back to ASCII values after adjustment

        }

        else // case 4

        {

            hour1 = 50;

            if (hour2 < 7 )hour2 = hour2 + 50; // reverting back to ASCII values after adjustment

            else hour2 = hour2 + 40; // reverting back to ASCII values after adjustment

        }

        s[0] = (char) hour1; // changing ASCII to char and storing in String

        s[1] = (char) hour2; // changing ASCII to char and storing in String
          

    }

    for (int i = 0; i < 8; i++) 
    
    {
    
        result[i] = s[i];

    }

    for (int i = 0; i < 8; i++) 
    
    {
    
        printf("%c", result[i]);
        
    }
    
}
