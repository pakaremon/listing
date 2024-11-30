#include <stdlib.h>

int main() {
    // Execute the 'ls' command
    int result = system("ls");

    // Check if the command was executed successfully
    if (result == -1) {
        // Handle error
        perror("system");
        return 1;
    }

    return 0;
}