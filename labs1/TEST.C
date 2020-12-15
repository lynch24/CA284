#include <stdio.h>
#include <string.h>
#include <ctype.h>
int NumberChecker(char *s);
void Palindrome(char s[]);
void Convert_to_lower(char *s);

int main(int argc,char* argv[])
{
    char str[100];
    
    printf("Please enter a string:  \n");
    scanf("%[^\n]s", str);
// Prints Invalid input if numbers are found in the string //
    if (NumberChecker(str)){
    printf("Invalid Input: Numbers not permitted.\n");
    }
    else{
        Palindrome(str);
        Convert_to_lower(str);
    }
    return 0;
}
// Palindrome or not// 
void Palindrome(char s[])
{
    int y = 0;
    int x = strlen(s) - 1;

    while (x > y)
    {
        if (s[y++] != s[x--])
        {
            printf("This string is not a palindrome.\n");
            return;
        }
        else{
            printf("This string is a palindrome.\n");   
            
        } 
}
//Checks for numers in the string //
int NumberChecker(char *s)
{
    int i = 0;
    while(s[i] != '\0'){
        if ((s[i]>= '\0' && s[i] <= '9')){
             return 1;
        }
         i++;
        }
    return 0;
}
// Converts the strings to all lower case//
void Convert_to_lower(char *s)
{
    int i;

    for(int i = 0; s[i]!= '\0'; i++)
    {
        s[i] = tolower(s[i]);
    }
}