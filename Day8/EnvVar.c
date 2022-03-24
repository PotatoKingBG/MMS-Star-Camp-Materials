#include <stdio.h>
#include<getopt.h>
#include<string.h>
#include<stdlib.h>

int main(int argc, char*argv[], char *env) {
    //what does 2 stars stand for
    // getenv za da vzemem element ot arguemnta
    char *user = getenv("USER");
    if(strcmp(user, "simeon")){
        printf("No ccess,!\n");
        return EXIT_FAILURE;

        }
    printf("Hello to my program!");



    return EXIT_SUCCESS;




}