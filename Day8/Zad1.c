#include <stdio.h>
#include <getopt.h>
int main (int argc, char *argv[]) {
    int opt;
    while ((opt = getopt(argc, argv, "a:b:c:")) != -1) {
        double a;
        switch(opt){
            case 'a':
                
                sscanf(*argv, "%lf", &a); 
                printf("%lf", a);
                break;
                case 'b':
                printf("Option b is set!\n");
                break;
                case 'z':
                printf("Option z is set!\n");
                break;
        }
    }
    // gcc Options.c; ./a.out -z
    return 0;
}