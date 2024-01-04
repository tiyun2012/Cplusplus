#include "debug.h"
#include <cstdio>// this file includes File
#include <cstdarg>

void logs_to_file(const char* format, ...) {
    FILE* log_file = fopen("log.txt", "a"); // Open the log file in append mode
    if (log_file == nullptr) {
        // If the log file could not be opened, print an error message and return
        fprintf(stderr, "Unable to open log file\n");
        return;
    }

    va_list args;
    va_start(args, format); // Initialize the variable argument list

    vfprintf(log_file, format, args); // Write the formatted message to the log file

    va_end(args); // Clean up the variable argument list

    fclose(log_file); // Close the log file
}
