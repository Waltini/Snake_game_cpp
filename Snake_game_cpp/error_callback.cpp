#include "error_callback.h"
#include <cstdio>

void error_callback(int error, const char* description)
{
    /* Prints the error from the error obj file */
    fprintf(stderr, "Error: %s\n", description);
}