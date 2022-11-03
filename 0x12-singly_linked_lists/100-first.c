#include <stdio.h>
<<<<<<< HEAD
/**
 * bmain - function executed before main
 * Return: void
 */
void __attribute__((constructor))bmain(void)
=======

/**
 * execute_before_main - executes this function before main function
 * Note: made possible by prior declaration of "__attribute__ ((constructor))"
 */

void __attribute__ ((constructor)) execute_before_main()
>>>>>>> 0c5e210b372a7aa5b1cda4cd853b06e8052f2679
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
