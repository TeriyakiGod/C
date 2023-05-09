#include <string.h>
#include <stdlib.h>
#include "utilities.h"

int calculator(char *number0, char *number1, char *op) {
    int a,b;
    a = strtol(number0, NULL, 10);
    b = strtol(number1, NULL, 10);
    if (strcmp(op, "add") == 0) {
        return a + b;
    } else if (strcmp(op, "sub") == 0) {
        return a - b;
    } else if (strcmp(op, "mul") == 0) {
        return a * b;
    } else if (strcmp(op, "div") == 0) {
        return a / b;
    } else {
        return 0;
    }
}