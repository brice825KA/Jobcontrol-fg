#include "./include/jobcontrol.h"

int main(int argc, char **argv) {
    if (argc > 1) {
        if (argc == 2 && (strcmp(argv[1], "--help") == 0 || strcmp(argv[1], "-h") == 0)) {
            help();
            return 0;
        }
    }
    return 0;
}