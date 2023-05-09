#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "utilities.h"

int validateIp(char ip[]) {
    if (strlen(ip) > 15) return 0;
    int i, j;
    //array of strings to hold each part of the ip address
    char* ip_parts[4];
    //make a copy of the ip address
    char temp_ip[16];
    strcpy(temp_ip, ip);
    //allocate memory for each part
    for (i = 0; i < 4; i++) {
        ip_parts[i] = (char*)malloc(4 * sizeof(char));
    }
    //split the ip address into 4 parts
    strcpy(ip_parts[0], strtok(temp_ip, "."));
    for (i = 1; i < 4; i++) {
        strcpy(ip_parts[i], strtok(NULL, "."));
        if (ip_parts[i] == NULL) {
            // There are fewer parts than expected
            // Free memory
            for (j = 0; j < 4; j++) free(ip_parts[j]);
            return 0;
        }
    }
    // Validate each part
    for (i = 0; i < 4; i++) {
        if (strcmp(ip_parts[i], "") == 0) {
            // Part is empty
            // Free memory
            for (j = 0; j < 4; j++) free(ip_parts[j]);
            return 0;
        }
        if (strcmp(ip_parts[i], "0") == 0) {
            // Part is 0
            continue;
        }
        int part = strtol(ip_parts[i], NULL, 10);
        if (part <= 0 || part > 255) {
            // Part is not in range
            // Free memory
            for (j = 0; j < 4; j++) free(ip_parts[j]);
            return 0;
        }
    }
    // Free memory
    for (j = 0; j < 4; j++) free(ip_parts[j]);
    //The IP address is valid
    return 1;
}