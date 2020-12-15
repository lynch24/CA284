#include <math.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

void conversion(int n) {
    int decimal = 0,i = 0,remain;
    while (n !=0) 
    {
        remain = n % 10;
        n /= 10;
        decimal += remain * pow(2, i);
        ++i;
    }
    printf("%d", decimal);
}

int main(int argc, char *argv[8]) {
    int n = atoi(argv[1]);

    char numbers;
    numbers = argv[1];

    for (int i = 0; i < strlen(numbers); i++)
    {
        if (strcmp(numbers[i], '1') == 0 && strcmp(numbers[i], '0') == 0)
        {
            // printf("%c", numbers[i]);
            printf("Invalid number entered. Only digits 1 and 0 are permitted.\n");
            return 0;
        }
    }

    if (strlen(argv[1]) > 8)
    {
        printf("Output: Too many binary digits entered\n");
    }else
    {
        conversion(n);
    }
    return 0;
}