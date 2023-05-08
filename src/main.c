#include <stdio.h>
#include "validateIp.h"

int main() {
    char ip[] = "127.255.0.1";
    if (validateIp(ip)==1) {
        printf("%s is a valid IP address", ip);
    } else {
        printf("%s is not a valid IP address", ip);
    }
    return 0;
}
