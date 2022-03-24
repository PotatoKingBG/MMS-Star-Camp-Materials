#include <stdio.h>

int main (int argc, char **argv) {
    printf("Argumetns coutn %d\n", argc);
    for (int i =0; *(argv+i); i++){
        printf("argv[%d] = %s\n", i, *(argv+i) );
    }
    return 0;
    //gcc PrDay7.c; ./a.out 12 32 42
}