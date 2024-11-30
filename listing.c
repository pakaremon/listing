#include <stdlib.h>
#include <stdio.h>

int main() {
    // Execute the 'ls' command
    int result = system("ls");

    // Check if the command was executed successfully
    if (result == -1) {
        // Handle error
        printf("Error executing the command ls\n");
        return 1;
    }

    printf("Command ls executed successfully\n");

    return 0;
}