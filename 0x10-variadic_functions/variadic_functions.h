#ifndef VARIADIC_FUNC
#define VARIADIC_FUNC

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void printc(va_list anything, char *s);
void printi(va_list anything, char *s);
void print_f(va_list anything, char *s);
void print_s(va_list anything, char *s);
void print_all(const char * const format, ...);


#endif
