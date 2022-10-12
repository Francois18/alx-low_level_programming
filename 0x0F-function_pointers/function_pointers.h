#ifndef FUNCTION_POINTERS.H
#define FUNCTION_POINTERS.H
void print_name(char *name, void (*f)(char *));
int _putchar(char c);
int int_index(int *array, int size, int (*cmp)(int));
int (*get_op_func(char *s))(int, int);
#endif
