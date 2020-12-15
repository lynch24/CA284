#include <stdio.h>
#include <string.h>
/*

Author: Ciara Lynch.
Purpose: To identify the substring within my string, via two function letters() and substring()
within substring it identifies that the characters within my string and if it matches its a substring 
*/
/* declaring functions*/
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


int sub_string(char *string,char *substring){
    /* declaring postions to help match my string and substring*/
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
    if(!substring[pos2]){
        return 1;
    }
    else{
        return 0;
    }

}