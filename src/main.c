#include <stdio.h>
#include "utilities.h"

int main(int argc, char *argv[])
{
    if (argc != 4) {
        printf("Usage: %s <add|sub|mul|div> <number0> <number1>\n", argv[0]);
        return 1;
    }
    printf("result: %d\n", calculator(argv[2], argv[3], argv[1]));
    return 0;
}
