#include <stdio.h>
#include <getopt.h>
int main (int argc, char *argv[]) {
    int opt;
    while ((opt = getopt(argc, argv, "abz")) != -1) {
        switch(opt){
            case 'a':
                printf("Option a is set!\n");
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