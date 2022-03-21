#include <stdio.h>
#include <stdint.h>
int main2 () {
   // 13 / 2 1
   // 6 /2  0
   // 3 / 2 1
   // 1 /2 1
   // 1101 == 13
   // 1101 -> 1111 1111 1111 0011 = -13
    int A,B;
    scanf("%d %d", &A, &B);
    int result = (A ^ B) < 0;
    printf("%d\n", result);

    return 0;

}
int main3 () {
    int num;
    printf("Enter number: ");
    scanf("%d", &num);
    num = (num << 3) - num ;
    printf("Num * 7 is: %d\n", num);
    return 0;
}
//3ta reshenie
int main4 () {
    int num;
    
    printf("Enter num: ");
    scanf("%d", &num);
    for (int i =0; i < num; i++) {
        int number[num];
        
        printf("Enter number: ");
        scanf("%d", &number[i]);
        for (int j=0; j<num; j++) {
            if (number[0] == number[j] -1) {
                
            }
        }
        
    }
}
//4ta reshenie
int main () {
    int N, curInput, lastInput;
    scanf("%d", &N);
    for(int i =0; i <N; i++) {
        scanf("%d", &curInput);
        printf("cur: %d, last: %d\n", curInput, lastInput);

        
        lastInput = curInput;
    }
}