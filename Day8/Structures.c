#include<stdio.h>
#include<string.h>

typedef int numbertype;
typedef char putence;
typedef struct student Student;
struct point {
    double x;
    double y;
} pointC, pointD, pointE;
typedef struct {
    char name[100];
    int age;
    double grade;
   
}Student;
int main () {
    struct point pointA, pointB;
    pointA.x = 20;
    pointA.y = 20.8;
    pointB.x = 18.4;
    pointB.y = 19.1;
    printf("Point A(x,y): %lf %lf\n", pointA.x,pointA.y);
    printf("Point B(x,y) %lf %lf\n", pointB.x,pointB.y);
    printf("Size of PointA: %d\n", sizeof(pointA));
    Student st1;
        strcpy(st1.name, "Pesho");
        st1.grade = 5.50;
        st1.age = 19;

    
    // Структури




    return 0;
}