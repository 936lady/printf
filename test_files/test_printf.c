#include <stdarg.h>
#include <stdio.h>
#include "main.h"
#include <unistd.h>
/**
 * _printf - output of a string
 * @format: string to print 
 * 
 * Return: number of characters printed
 */


int _printf(const char *format, ...)
{
     int i = 0;
     int count = 0;
     int value = 0;
     va_list args;
     va_start(args, format); //initializing taking the first argument

     if (format == NULL)  //no null pointer
	     return (-1);

     while (format[i])//print character 
    
      {
	      if(format[i] != '%')
		      {
          value =  write(1,&format[i],1);
	  count = count + value;
          i++;
	  continue;
     }
	      if (format[i] == '%')
{
	//next character is checked to see what it is. then we check how it's handles ex: format[i] + 1 I declare the function capturing the next index and return a functio taking in the variadic para specified and then prnt it. 
	check_spefifier(&format[i])
		


	 }
 }
	      
		      return (count);
	}

