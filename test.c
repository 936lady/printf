#include <stdarg.h>
#include <stdio.h>
#include "main.h"
#include <stddef.h>
#include <unistd.h>

/*
 * _putchar - write character
 * @c: printed character
 *
 * Return: 1
 *
 */
int _putchar(char c)
{
return (write(1, &c, 1));
}





/*
 * check_spefifier- get_op - select function for conversion char
 * @c: char to check
 * Return: pointer to function
 */

int (*check_spefifier(const char *))(va_list) /*(const char *format)*/
{
unsigned int i = 0;  /*unsigned*/

flags_p fp[] = {
{"c", print_char},
{"s", print_str},
{"i", print_nbr},
{"d", print_nbr},
{"b", print_binary},
{"o", print_octal},
{"x", print_hexa_lower},
{"X", print_hexa_upper},
{"u", print_unsigned},
{"S", print_str_unprintable},
{"r", print_str_reverse},
{"p", print_ptr},
{"R", print_rot13},
{"%", print_percent},
{NULL, NULL}     /*added*/
};
       /* while (i < 14)*/
while (fp[i].t)
{
/*if (c == fp[i].c[0])*/
if ((*format) == fp[i].t[0])

/*{*/
return (fp[i].f);
/*}*/
i++;
}
return (NULL);
}

/**
 * _printf - output of a string
 * @format: string to print
 *
 * Return: number of characters printed
 */

int _printf(const char *format, ...)
{
va_list ap;
unsigned int sum = 0, i = 0; /*unsigned*/
int (*func)(va_list); /*added (va_list)*/

/*if (!format || (format[0] == '%' && format[1] == '\0'))*/
if (format == NULL)
return (-1);
va_start(ap, format);





while (format[i])
{
while (format[i] != '%' && format[i])
{
_putchar(format[i]);
sum++;
i++;
}

/*
 * if (format[i] == '%')
 *               {
 *                      if (format[i + 1] != '\0')
 *
 *                            func = get_op(format[i + 1]);
 *                       if (func == NULL)
 *                       {
 *                       _putchar(format[i]);
 *                               sum++;
 *                              i++;
 *                      }
 *
 *                    else
 */
if (format[i] == '\0')
return (sum);
f = check_spefifier(&format[i + 1]); /*changed find_function*/
if (f != NULL)
{
sum += func(ap);
i += 2;
continue;
}
/*
* }
* else
*{
*/
if (!format[i + 1])
return (-1); /*added*/
_putchar(format[i]);
sum++;
/*i++;*/
if (format[i + 1] == '%')
i += 2;
else
i++;

/*}*/
}
va_end(ap);
return (sum);
}

