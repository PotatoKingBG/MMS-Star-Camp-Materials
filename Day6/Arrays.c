#include <stdio.h>
#include<stdint.h>
int MinNum(int *arr, size_t n);
double Average(int *arr, size_t n);
int main () {
    int arr[] = {10, 20 ,30 ,40 ,50, 65, 70};
    int min = MinNum(arr, 7);
    double average = Average(arr, 7);
    printf("%d\n", min);
    printf("%.2lf\n", average);
    
    return 0;

}
double Average(int *arr, size_t n) {
    double sum = 0;
    for (int i = 0; i < n; i++) {
        sum += *(arr+i);
    }
    return sum / n;
}
int MinNum(int *arr, size_t n) {
    int min = *arr;
    for (int i = 0; i < n; i++) {
        if(*(arr+i) < min) {
            min = (*(arr+i));
        }
    }
    return min;
}