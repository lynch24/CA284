#include <stdio.h>
#include <stdlib.h>


int count(int x, int y, int z){

    int num;

    if(x >= y&& z >= 3){
        num = x;
    }
    else if(y>= x && y >= z){
        num = y;
    }
    else{
        num = z;
    }
    return num;
}

int main(int argc, char *argv[]){

    int x = atoi(argv[1]);
    int y = atoi(argv[2]);
    int z = atoi(argv[3]);

    if(x==y || x==z || y==z){
        printf("error: two numbers entered are the same\n");
    }
    else{
        printf("%d is the largest number.\n",count(x,y,z));
    }
    return 0;
}