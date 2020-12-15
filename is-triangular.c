/*
Author: Ciara Lynch.
Purpose: To show wether a number is rectangular or not

*/

#include <stdio.h>
#include <stdlib.h>

/*built my own function to deal with the number */

int is_triangular(int a){
    int i,trinum = 0;
    for(i = 0; i < a; i++){
        trinum = trinum + i;
        if(trinum == a)
        {
            return 1;
        }
    }
    return 0;
}
/* added in argc and argv so input could be taken in from command line*/
int main(int argc, char **argv)
{
    int arg1 = atoi(argv[1]);
    if(is_triangular(arg1) == 1){
        printf("%d is a triangular number.\n", arg1);

    }
    else if(is_triangular(arg1) == 0){
        printf("%d is not a triangular number.\n", arg1);
    }
    return 0;
}

/*i called my function so i could print out outputs on wether  number is triangular*/
