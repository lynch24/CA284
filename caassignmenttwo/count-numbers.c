#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/*
Author: Ciara Lynch.
Purpose: To print out the number with its corresponding title such as even odd or prime, my program
also takes into account a valid input so checks if a lettwer has been entered or a negative number
*/
/* checks if number is even*/
int ev(int number){
    if(number % 2 == 0){
        return 1;
    }
    return 0;
}
/* checks if number is odd*/
int od(int number){
    if(number % 2 != 0){
        return 1;
    }
    return 0;

}

/* checks if number is prime*/
int pri(int number){


     int i, checks = 0;
    if (number == 1) {

        return 0;
    }
    for (i = 2; i <=  number/ 2; ++i) {

 
        if (number % i == 0) {
            checks = 1;
            break;
        }
    }

    if (checks == 0)
        return 1;
    else
        return 0;

    return 0;
}

/*To check no letters used */
int checkinput(char *l)

{
    int i=0;
    while(l[i]!='\0')
    {
        if(l[i] <'0' || l[i]>'9')
        {
            return 1;
        } 
        ++i;
    }
    return 0;
}


int main(int argc, char *argv[]) {
    /*To check if command line is filled*/
    if (argc < 2) {
        printf("insufficient command line arguments.\n");
        return 0;
    }
    /*declared variables*/
    int i, even=0, odd=0, prime=0;
    for (i = 1; i < argc; ++i)
    {   /*To check if negative integer inserted*/
        if (argv[i][0] == '-')
        {
            printf("Error: Only positive integers are permitted.\n");
            return 0;
        }/*To check if letter was inputted*/
        else if (checkinput(argv[i]))
        {
            printf("Error: only numbers are permitted.\n");
            return 0;
        }
        else if (isdigit(*argv[i]))
        {
            // printf("%s", *argv[i]);
            if (ev(atoi(argv[i]))){
                ++even;
            }
            if (od(atoi(argv[i])) == 1){
                ++odd;
            }
            if (pri(atoi(argv[i])) == 1){
                ++prime;
            }
        }
        
    }
    /*prints all inputs out appropriatlet*/
    printf("Number of odd numbers: %d\nNumber of even numbers: %d\nNumber of prime numbers: %d\n", odd,even,prime);
    return 0;
}