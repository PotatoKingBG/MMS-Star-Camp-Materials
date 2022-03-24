#include<stdio.h>

int isBalanaced(const char * str) {
    int openBracketCount;
    while(*str != '\0') {
        if (*str == '(') {
            openBracketCount++;
        } else {
            openBracketCount--;
        }
        if (openBracketCount < 0) {
            return 0;
        }
        
        str++;
        
    }
    // mojem da castnem const char kum ne const i da go modify
    return openBracketCount==0;
}
int main () {
    char str0[100];
    scanf("%s", str0);

    isBalanaced(str0);
    printf("%d\n", isBalanaced(str0));

}