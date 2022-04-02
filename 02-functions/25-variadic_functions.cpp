#include <cstdio>
#include <cstdarg>

/**
 * average: variadic function thats returns the average of a variadic input
 *
 * @c: the amount of parameters
 * ...: the variadic parameters
 * return: average
 */
double average(const int c, ...)
{
    va_list ap; // pointer to list of argument
    int i;
    double avg = 0;

    va_start(ap, c);
    for (i = 0; i < c; i++)
    {
        avg += va_arg(ap, double);
    }
    va_end(ap);
    return (avg / c);
}
/**
 * mini_printf: print a message
 *
 * @fmt:
 * ...: message
 * return: amount of chars printed to stdout
 */
int mini_printf(const char * fmt, ...)
{
    va_list ap;
    va_start(ap, fmt);
    int rc = vfprintf(stdout, fmt, ap);
    putchar('\n');
    va_end(ap);
    return(rc);
}
/**
 * main: entry point for average
 *
 * return: 0
 */
int main(void)
{
    double a = 0;
    char m[] = "Hello there!";
    a = average(5, 10.0, 20.0, 30.0, 5.0, 10.5);
    printf("average is: %.2lf\n", a);
    mini_printf(m);
    mini_printf("Number [%d], and string [%s]\n", 5, "String");`

    return (0);
}