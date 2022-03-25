#include <stdio.h>
#include <getopt.h>
int main (int argc, char *argv[]) {
    int opt;
    double a,b,c;
    double result;
    while ((opt = getopt(argc, argv, "a:b:c:")) != -1) {
        
        switch(opt){
            case 'a':
                sscanf(optarg, "%lf", &a); 
                break;
            case 'b':
                sscanf(optarg, "%lf", &b); 
                break;
            case 'c':
                
                sscanf(optarg, "%lf", &c); 
                break;
        }
     result += (a + b) * c;
       
    }
    printf("a: %lf\n", a);
    printf("result: %lf", result);
    //gcc Zad1.c; ./a.exe -a 5 -b 10 -c 15
    // gcc Options.c; ./a.out -z
    return 0;
}