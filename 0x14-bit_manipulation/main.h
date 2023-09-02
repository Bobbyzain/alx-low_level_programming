#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <limits.h>

int _putchar(char c);
unsigned int binary_to_uint(const char *b);
unsigned int bin_to_dec(const char *bin, int size, int vd);
void print_binary(unsigned long int n);
int get_bit(unsigned long int n, unsigned int index);
int set_bit(unsigned long int *n, unsigned int index);

#endif
