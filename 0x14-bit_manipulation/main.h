<<<<<<< HEAD
#ifndef __MAIN_H__
#define __MAIN_H__

=======
#ifndef HEADER_H
#define HEADER_H

#include <stdlib.h> /* NULL */

/* helper function */
int _putchar(char c);

/* function prototypes for all files */
>>>>>>> 0c5e210b372a7aa5b1cda4cd853b06e8052f2679
unsigned int binary_to_uint(const char *b);
void print_binary(unsigned long int n);
int get_bit(unsigned long int n, unsigned int index);
int set_bit(unsigned long int *n, unsigned int index);
int clear_bit(unsigned long int *n, unsigned int index);
unsigned int flip_bits(unsigned long int n, unsigned long int m);
int get_endianness(void);
<<<<<<< HEAD
=======

>>>>>>> 0c5e210b372a7aa5b1cda4cd853b06e8052f2679
#endif
