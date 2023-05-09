#include <stdio.h>
#include "utilities.h"

int main() {
    char ip[] = "0.0.0.0";
    if (validateIp(ip)==1) {
        printf("%s is a valid IP address", ip);
    } else {
        printf("%s is not a valid IP address", ip);
    }
    return 0;
}
