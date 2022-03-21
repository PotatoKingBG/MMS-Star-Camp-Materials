#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
// funckiq s promenliv broi argumenti
int sumNums(int count, ...){
    int sum =0;
    va_list ap;
    va_start(ap, count);
    for (int i = 0; i < count; i++) {
        sum += va_arg(ap, int);
    }
    va_end(ap);
    return sum;

}
double average(int count, ...){
    double sum =0;
    va_list args;
    va_start(args, count);
    for (int i = 0; i < count; i++) {
        sum += va_arg(args,double);
    }
    va_end(args);
    return sum / count;
}
int main () {
    int result = sumNums(4, 10 ,3, 5, 6);
    printf("Result: %d\n", result);
    return EXIT_SUCCESS;
}

// func(5, maski) variadic funckiq koqto da adva maski
// i da namerim broya na edinicite