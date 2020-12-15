#include <stdio.h>
/*

Author: Ciara Lynch.
Purpose: To convert inputted characters to their form so if you input a capital letter
expect it to be returned in lower case

*/

/* this function checks wether the inputted text is valid*/
int letters(char *s)
{
    int letter = 0;
    while(s[letter]!='\0')
    {
        if((s[letter]<'A' || s[letter]>'z') && s[letter]!=' '){
            return 0;
        }
        ++letter;
    }
    return 1;
}
 /*converts the characters too appropiate case*/
void converter(char *s)
{
    int letter =0;
    while(s[letter]!='\0')
    {
        if(s[letter]>='A' && s[letter]<='Z'){
            s[letter]=s[letter]+32;
        }
        else if(s[letter]>='a' && s[letter]<='z'){
            s[letter]=s[letter]-32;
        }
        ++letter;
    }
}

int main()
{   /*declaring the variable string*/
    char string[100];
 
	printf("Enter a string of upper and lower case letters\n");
    scanf("%[^\n]s",string);
    /*checking if the string is valid*/
    if (letters(string))
    {    /*converts string*/
         converter(string);
         /*prints to a newline*/
         printf("%s\n",string);
    }
    else
    {   /*prints to a newline*/
        printf("Invalid character entered.\n");
    }
    
    return 0;
}