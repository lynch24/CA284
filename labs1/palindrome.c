#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 

/*
Author: Ciara Lynch. 
Purpose: the purpose of my program is to identify wether a string is a palindrome
or not. i di this with my functions declared below.
i used the heap memory calloc() in my main function
*/

/* declaring functions*/
void wipeString(char s[]);
void case_check(char s[]);
void checkPalindrome(char s[]);
int checkNumber(char *s);

int main()
{
    char* string = calloc(100, sizeof(char));
 
    printf("Please enter a string:  \n");
    scanf("%[^\n]s",string);

    /* Check string for numbers*/
    if (checkNumber(string)){
        printf("Invalid input: Numbers not permitted.\n");
    }
    else{
        /* Get rid of non letters & spaces */
        wipeString(string);
        /* make all lowercase to compare */
        case_check(string);
        /* check if palindrome */
        checkPalindrome(string);
    }
    return 0;
}

/* Check string for numbers */
int checkNumber(char *s)
{
    int i=0;
    while(s[i]!='\0'){
        if((s[i]>='0' && s[i]<='9')){
            return 1;
        }
        ++i;
    }
    return 0;
}



 /* Get rid of spaces and non letters */
void wipeString(char *s)
{
    int i,j;

    for(i=0; s[i]!='\0'; ++i){
        while (!(s[i] =='\0' || (s[i]>='A' && s[i]<='z'))){
            for(j=i;s[j]!='\0';++j){
                s[j]=s[j+1];
            }
            s[j]='\0';
        }
    }
}

 /* Make all lowercase to compare */
void case_check(char *s)
{
    int i;
    
    for(i=0; s[i]!='\0'; ++i){
        if(s[i]>='A' && s[i]<='Z'){
            s[i]=s[i]+32;
        }
    }
}

/* Check to see if palindrome*/
void checkPalindrome(char s[])
{
    int i = 0;
    /*declaring length*/
    int len = strlen(s) - 1;
    
    while (len > i){
      if(s[i++] != s[len--]){
        printf("This string is not a palindrome.\n");
        return;
      }
    }
    printf("This string is a palindrome.\n");
}
