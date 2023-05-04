#ifndef MYWIOJWID_H
#define MYWIOJWID_H

int _putchar(char c);
unsigned long int _power(unsigned int base, unsigned int pow);
unsigned int binary_to_uint(const char *b);
void print_binary(unsigned long int n);
int clear_bit(unsigned long int *n, unsigned int index);
unsigned int flip_bits(unsigned long int n, unsigned long int m);
int get_endianness(void);
int get_bit(unsigned long int n, unsigned int index);
int set_bit(unsigned long int *n, unsigned int index);

#endif
