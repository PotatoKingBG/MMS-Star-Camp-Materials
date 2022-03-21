#include <stdio.h>
#include <stdint.h>
int main () {
    //Bitwise operators
    int num = 10 && 20; // =1 bcs 1 && 1 == 1
    // 10 & 20 == 0 
     int num1 = 07 & 010;
     int num2 = 20 ^ 40;
     int num6 = 20 << 10;
     uint8_t num4 = ~(25); // 230
    printf("%d num4", num4);
    printf("%d num2", num2);
    printf("Numm1 = %d\n", num1);
    printf("Num = %d\n", num);
    printf("Num6 = %d\n", num6);
    // <<1 == *2
    // <<2 == *4
    // <<3 == *8
    // -1 >> 1 = maximalen polojitelen int
    


    return 0;

    
}