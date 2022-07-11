


/* check_specifier- of specifiers then assign a function
 * @format:specifier (char*)
 * return: pointer to another function */

int (*check_specifier(char*))(va_list)//va_list argument

{ int i;

		func_t my_array[4] =
	       {{'c', print_char},
	       	{'s', print_str},
        	{'%', print_cent},
	       	{NULL, NULL} 	       };
		for (i =0;my_array[i].t != NULL; i++) //CONTINUE TILL null

			{
		if(my_array[i].t ==*format)
		   {
			   return (my_array[i].f);
		   } 	

			}
		return(NULL);
} 
