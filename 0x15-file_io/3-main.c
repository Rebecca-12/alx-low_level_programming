#include "main.h"
#include <stdio.h>

int main(int argc, char *argv[]) {
    if (argc != 3) {
        dprintf(STDERR_FILENO, "Usage: %s file_from file_to\n", argv[0]);
        return 97;
    }

    int result = copy_file(argv[1], argv[2]);

    if (result == 0) {
        printf("File copied successfully!\n");
    }

    return result;
}
