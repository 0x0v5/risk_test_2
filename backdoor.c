#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

int main() {
    char command[100];
    char *username = getlogin();

    printf("Current user: %s\n", username);

    printf("User Information:\n");
    strcpy(command, "cat /etc/passwd");
    system(command);

    printf("Network Configurations:\n");
    strcpy(command, "ifconfig");
    system(command);

    return 0;
}
