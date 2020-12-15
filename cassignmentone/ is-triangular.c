#include <stdio.h>

int is_triangular(int a){
    int i,trinum = 0;
    for(i = 0; i < a; i++){
        trinum = trinum + i
        if(trinum == a)
        {
            return 1;
        }
    }
    return 0;
}

int main(int argc, char * argv)
{
    int arg1 = atoi(argv[1]);
    if(is_triangular(arg1) == 1){
        printf("%d is a triangular number.\n", arg1);

    }
    else if(is_triangular(arg1) == 0){
        printf("%d is not a triangular number.\n", arg1);
    }
    
}
