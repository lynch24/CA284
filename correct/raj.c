/*

Author: Ciara Lynch.
Purpose: Prints out all leap years between the first number and the second

*/
#include <stdio.h>
#include <stdlib.h>

int leapyears(int y);



int main(int argc, char const *argv[])
{
    int arg1 = atoi(argv[1]);
    int arg2 = atoi(argv[2]);
    int year = 1;

    while(arg1 < arg2 + 1)
    {
        leapyears(arg1);
        arg1 = arg1 + year;

    }
    return 0;
}

int leapyears(int y){

    if(y % 4 == 0 ){
        if(y % 100 == 0){
            if(y % 400 == 0 ){
                printf("%d\n", y);
            }
        }
        else{
            printf("%d\n", y);
        }

    }

}