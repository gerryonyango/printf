#include "main.h"
#include <stdio.h>
#include <stdarg.h>

int _printf(const char *format, ...) {
    va_list args;
    va_start(args, format);

    int count = 0;

    while (*format) {
        if (*format == '%') {
            format++;
            if (*format == 'c') {
                int c = va_arg(args, int);
                putchar(c);
                count++;
            } else if (*format == 's') {
                char *s = va_arg(args, char*);
                while (*s) {
                    putchar(*s);
                    s++;
                    count++;
                }
            } else if (*format == '%') {
                putchar('%');
                count++;
            }
        } else {
            putchar(*format);
            count++;
        }
        format++;
    }

    va_end(args);

    return count;
}

int main() {
    char str[] = "Hello, World!";
    int num = 42;

    int result = _printf("String: %s, Number: %d, Character: %c, Percent: %%\n", str, num, 'A');
    printf("\nTotal characters printed: %d\n", result);

    return 0;
}

