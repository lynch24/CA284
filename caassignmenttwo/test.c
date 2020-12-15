#include <stdio.h>
/*

Author: Ciara Lynch.
Purpose: To convert inputted characters to their form so if you input a capital letter
expect it to be returned in lower case

*/

int letters(char *s);
int sub_string(char *string,char *substring);

int main()
{
    char string[40], substring[20];

    printf("Enter the first string:\n");
    scanf("%s",string);
    if(letters(string) == 0)
    {
        printf("Invalid character entered\n");
        return 0;
    }
    
    printf("Enter the second string:\n");
    scanf("%s",substring);
    if(letters(substring) == 0)
    {
        printf("Invalid character entered\n");
        return 0;
    }


    if(sub_string(string, substring))
        { 
            printf("the string '%s' is contained in the string '%s'\n", substring, string);
            return 0;
        }
    else 
        {
            printf("the string '%s' is not contained in the string '%s'\n", substring, string);
            return 0;
        }
    
    return 0;
}


/* this function checks wether the inputted text is valid, taken directly from my case_conversion*/

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


int sub_string(char *string,char *substring){
    int pos1 = 0;
    int pos2 = 0;

    while ((string[pos1] != '\0') && (substring[pos2] != '\0'))
    {

        if(substring[pos2] != string[pos1]){
            pos1++;
            pos2 =0;
        }
        else{
            pos2++;
            pos1++;
        }
    }
    if(substring[pos2]){
        return 1;
    }
    else{
        return 0;
    }

}



