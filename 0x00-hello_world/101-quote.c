<<<<<<< HEAD
/*
*File: 101-quote.c
*Auth: Brennan D Baraban
*/

#include <unistd.h>

/**
*main - Prints "and that piece of art is useful" - Dora Korpar, 2015-10-19",
* followed by a new line, to standard error.
*
* * Return: Always 1.
*/
int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
=======
#include <stdio.h>
#include <unistd.h>

/**
* main - Entry point
*
* Description: print a quote us writing function
*
* ssize_t write(int fd.const void *buf,size_t count):
*
* Return : Always 1 (Success)
*/
int main(void)
{
	write(2,
	"and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
>>>>>>> d5c3113404869136452b8b776a8663e8b2c243f7
	return (1);
}
