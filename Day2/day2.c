#include <stdio.h>

int main1 () {
    int num;
    printf("hello world");
    scanf("%d", &num);
    printf("NUM %d", num);
    return 0;
}
int main2 () { 
    int x = 10;
    if (x = 0) {
        printf("True");
    } else {
        printf("False");
    }
    return 0;
}
int main () {
    int a = 0;
    int b = 2;
    //f (a++ && b++ && 0/* na nulata reje */ && a++) {
    if(a++ || ++a) {   
        printf("True");
    }
    else {
        printf("False");
    }
    return 0;
}