/*
OVERVIEW:  given an array that has duplicate values remove all duplicate values.
E.g.: input: [1, 1, 2, 2, 3, 3], output [1, 2, 3]

INPUTS: Integer array and length of the array.

OUTPUT: Update input array by removing duplicate values.

ERROR CASES: Return NULL for invalid inputs.

NOTES: Don't create new array, try to change the input array.
*/

#include <stdio.h>

void * removeArrayDuplicates(int *Arr, int len)
{
	int i, j, k = 0, found;
	if (Arr == NULL || len <= 0)
		return NULL;
	for (i = 1; i < len; i = i++)
	{
		found = 0;
		for (j = i - 1; j >= 0; j--)
		{
			if (Arr[j] == Arr[i])
			{	found = 1;	   break;	}
		}
		if (found == 0)
		{
			k++;
			Arr[k] = Arr[i];
		}
	}
}