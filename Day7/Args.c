#include <stdio.h>
#include <stdint.h>
#include <limits.h>
int main(int argc, char *argv[])
{
    /* */
      if (argc == 1)
        {
            fprintf(stderr, "Arguments error!\n");
            return 1;
        }
    int sum = 0;
    int max = 0;
    char option = argv[1][1];
    // vikaneto na programata se schite za element ot argv
    switch (option)
    {
    case 'm':

        for (int i = 1; i < argc; i++)
        {
            int num;

            sscanf(argv[i], "%d", &num);
            sum += num;
            if (max < num)
            {
                max = num;
            }
        }
        printf("Max = %d\n", max);

        break;
    case 's':
        for (int i = 1; i < argc; i++)
        {
            int num;

            sscanf(argv[i], "%d", &num);
            sum += num;

            

            
        }
        printf("Sum = %d\n", sum);
        break;

  
      
    //gcc Args.c; ./a.out -m 10 20 30 40 50 60
        return 0;
    }
}