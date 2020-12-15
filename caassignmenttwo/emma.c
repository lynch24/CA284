#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

// Calculate Prime Numbers //
int primeNumbers(int num){
    
    int i, n = 0;
    if (num == 1) {

        return 0;
    }
    for (i = 2; i <=  num/ 2; ++i) {

        if (num % i == 0) {
            n = 1;
            break;
        }
    }

    if (n == 0)
        return 1;
    else
        return 0;


    return(0);
}

// Calculate Even Numbers //
int evenNumbers(int num){
    if(num % 2 == 0){
        return 1;
    }
    return 0;
}
// Calculate Odd Numbers //
int oddNumbers(int num){
    if(num % 2 != 0){
        return 1;
    }
    return 0;
}

int CheckNumbers(char numbers[])
{
    int i = 0;
    if (numbers[0] == '-')
        i = 1;
    for (; numbers[i] !=0; i++)
    {
        if (!isdigit(numbers[i]))
            return 0;
    }
    return 1;
}
// Combine Functions For Execution //
int main(int argc,char* argv[])
{
    
    int odd, even, prime=0;
    int i, a, numbers;

    {
        if (argc < 2)
        {
            printf("insufficient command line arguments.\n");
            return(0);
        }

        for (a = 1; a < argc; ++a){

// If input is negative, print Error //
        if (CheckNumbers(argv[a]) == 0)
        {
            printf("Error: only numbers are permitted.\n");
            return 0;
        }
    }
}
    for (i = 1; i != argc; ++i){
        numbers = atoi(argv[i]);

        {
            if (evenNumbers(atoi(argv[i]))){
                even++;
            }
            if (oddNumbers(atoi(argv[i])) == 1){
                odd++;
            }
            if (primeNumbers(atoi(argv[i])) == 1){
                prime++;
            }
        }
                // If there is a negative number, print Error //
        if (numbers < 0)
        { 
            printf("Error: Only positive integers are permitted.\n");
            return 0;
        }
}
            printf("Number of odd numbers: %d\nNumber of even numbers: %d\nNumber of prime numbers: %d\n", odd, even, prime);
    
    return(0);
}