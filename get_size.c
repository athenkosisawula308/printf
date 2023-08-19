#include "main.h"

/**
 * get_size - Determines the necessary casting size for the argument.
 * @format: Formated string used for printing arguments.
 * @i: List of arguments to be printed.
 *
 * Return: The precision value.
 */

int get_size(const char *format, int *i)
{
	int curr_i = *i + 1;
	int size = 0;

	/* Check for 'l' modifier (long) **/
	if (format[curr_i] == 'l')
		size = S_LONG;
	/* Check for 'h' modifier (short) **/
	else if (format[curr_i] == 'h')
		size = S_SHORT;

	/** If no size modifier found, reset the index to the original position */
	if (size == 0)
		*i = curr_i - 1;
	else
		*i = curr_i;

	return (size);
}
