#include "main.h"

const char* prompt()
{
    printf("Choose an option:\n",
           "1. function fa\n",
           "2. function fb\n",
           "3. function fc\n",
           "4. function fd\n"
           "Q. quit\n",
           ">> ");

    fflush(stdout);                 // flush after prompt
    const int buffsz = 16;          // constant for buffer sizze
    static char response[buffsz];   // static storage for response buffer
    fgets(response, buffsz, stdin); // get console input

    return (response);
}