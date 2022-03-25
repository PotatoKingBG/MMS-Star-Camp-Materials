#include <stdio.h>
struct str_a {
    int a;
    int b;

};
int main () {
  
    printf("%lu\n", sizeof(struct str_a));
    return 0;
}