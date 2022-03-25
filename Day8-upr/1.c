#include <stdio.h>
#define true 1
#define false 0
int isOdd(int n){
    return n&1; // purviq bit e edno i ako e ravno
}
int isEven(int n){
    return !(n&1); // purviq bit e edno i ako e ravno
}
//int* myFilter(int* arr, int(*filterFunction)(int)));
void myFilter(int* arr, int(* filterFunc)(int)) {
for(int i =0 ; arr[i] != 0; i++)  {
    if(filterFunc(arr[i]) == true) {
        printf("%d ", arr[i]);
    }
}
}


// adresa na koda koito sme napisali
int main () {
    int arr1[10] = {1,2,3,4,5,6,7,8,9,0};
    myFilter(arr1, isEven);
// funkciq vuv funkciqta
    return 0;
}