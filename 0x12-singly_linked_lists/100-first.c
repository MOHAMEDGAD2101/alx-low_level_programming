#include <stdio.h>

void __contructor(void __attribute ((constructor)));

/**
 * __contructor - executes before main()
 *
 * Return: void
 */
void hare(void)
{
printf("You're beat! and yet, you must allow,\n"
"I bore my house upon my back!\n");
}
