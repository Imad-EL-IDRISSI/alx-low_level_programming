#include <stdio.h>
#include "search_algos.h"

int main(void)
{
	    int array[] = {10, 20, 30, 40, 50};
	        size_t size = sizeof(array) / sizeof(array[0]);
		    int value = 30;
		        int index;

			    index = linear_search(array, size, value);
			        printf("Value %d found at index %d\n", value, index);

				    return (0);
}
