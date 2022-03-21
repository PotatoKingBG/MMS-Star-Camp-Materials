#include <stdio.h>
void printMax(void* num1,void* num2, int type) { // veche moga da podam ukazatel kum vsqkakuv tip promenliva
    if (type == 1){
        int a = *((int*)num1);
        int b = *((int*)num2);
        printf("%d\n", a>b?a:b);
    } else if (type == 2) {
        double a = *((double*)num1);
        double b = *((double*)num2);
        printf("%lf\n", a>b?a:b);
    }
}
int main () {
    double pi = 3.14;
    int num = 20;
    void* ptr;
    void* ptr1;
    ptr1 = &num;
    ptr = &pi;

    printf("Num = %lf\n", *((double*)ptr)); // deklarirame tipa na promenlivata na pointera

    printf("Num = %d\n", *((int*)ptr1));
}