#include "main.h"
#include <stdio.h>

int copy_file(const char *file_from, const char *file_to);
int main(int argc, char *argv[]) {
    if (argc != 3) {
        dprintf(STDERR_FILENO, "Usage: %s file_from file_to\n", argv[0]);
        return (97);
    }

    if (copy_file(argv[1], argv[2]) == 0)
        return 0;
    else
        return 99;
}
