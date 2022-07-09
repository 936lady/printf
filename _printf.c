#include "main.h"

int _printf(const char *format, ...);  //
{
	va_list args;
	int i = 0, count = 0;

	va_start(args, format);

