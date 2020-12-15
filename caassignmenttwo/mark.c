
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <stdbool.h>

int is_even(int num) /* Function to check if number is even */
{

	if (num % 2 ==0){
		return true;
	}
	else {
		return false;
	}

	return 0;
}

int is_odd(int num) /* Function to check if number is odd */
{

	if (num % 2 != 0){
		return true;}

	return 0;	
}


int is_prime(int num) /* Function to check if number is prime */
{
    if (num < 1) return false;
    if (num == 2) return true;
    if (num == 1) return false;
    if (num % 2 == 0 && num > 2) return false;
    for(int i = 3; i < num / 2; i+= 2)
    {
        if (num % i == 0)
            return false;
    }
    return true;

    return 0;
}


bool isNumber(char number[]) /* Function to check if input is 100% numbers */
{
    int i = 0;

    //checking for negative numbers
    if (number[0] == '-')
        i = 1;
    for (; number[i] != 0; i++)
    {
        //if (number[i] > '9' || number[i] < '0')
        if (!isdigit(number[i]))
            return false;
    }
    return true;
}




int main(int argc, char *argv[])
{
	int prime_count = 0;
	int odd_count = 0;
	int even_count = 0;
	int i, num;

    if (argc < 2) { /* If nothing is supplied in command line */
    printf("insufficient command line arguments.\n");
    return 0;}

    int k;
    for (k = 1; k < argc; k++){ /* For loop checking to see if input is all integers */


        if (isNumber(argv[k]) == false){ /* All input passed through isNumber function */
            printf("Error: only numbers are permitted.\n");
            return 0;
        }
}



	for (i = 1; i != argc; i++){
		num = atoi(argv[i]);

        if (num < 0) { /* If number is less than 0 i.e negative the code stops and prints an error */
            printf("Error: Only positive integers are permitted.\n");
            return 0;}


            /* If the number is either prime, even, odd the counters go up */
		if (is_even(num) == true){ 
			even_count++;}

		if (is_odd(num) == true){
			odd_count++;}
		if (is_prime(num) == true){
			prime_count++;}



}
        /* Print the counters  */
        printf("Number of odd numbers: %d\n", odd_count );
        printf("Number of even numbers: %d\n", even_count );
        printf("Number of prime numbers: %d\n", prime_count );


	return 0;
}
