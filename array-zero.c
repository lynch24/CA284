#include <stdio.h>

int main (void)
{

	#define MAX 10
	int array[10];
	int i;
	for (i = 0; i< MAX; i++) 
		array[i] =0;
		
	for (i =0; i <MAX; i++)
		printf ("%d\n",array[i]);
	return (0);

}