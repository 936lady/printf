
/*TESTING, file in the making*/

/*
 * check_specifier- of specifiers then assign a function
 * @format:specifier (char*)
 * return: pointer to another function
 */

int (*check_specifier(char *))(va_list)/*va_list argument*/

{ int i;

		func_t my_array[4] =
/*	flags_p fp[] = */
	       {{'c', print_char},
	       	{'s', print_str},
        	{'%', print_cent},
	       	{NULL, NULL} 	       };

	/*CONTINUE TILL null*/
        for (i =0;my_array[i].t != NULL; i++) 

                        {
                if(my_array[i].t ==*format)
                   {
                           return (my_array[i].f);

/*		for (i =0;fp[i].t != NULL; i++)

			{
		if(fp[i].t ==*format) 
		   {
			   return (fp[i].f);*/
		   } 	

			}
		return(NULL);
}
*/
