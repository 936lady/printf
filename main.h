#ifndef _MAIN_H_
#define _MAIN_H_

#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <stdarg.h>

int _printf(const char *format, ...);
int (*check_spefifier(char*))(va_list);

typedef struct func
{ 
	char *t;
	int (*f)(va_list);
} func_t;

#endif /*_MAIN_H_ */
