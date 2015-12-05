/*
OVERVIEW: Given a sorted array, insert a given number into the array at appropriate position.
			E.g.: Arr = [2, 4, 6], num = 5 final Arr = [2, 4, 5, 6]. 5 is inserted at 2nd index.

INPUTS: Integer	Array pointer, length of the array, number to be inserted.

OUTPUT: Array pointer after inserting number.

ERROR CASES: Return NULL for invalid inputs.

NOTES: Use realloc to allocate memory.
*/

#include <stdio.h>
#include <malloc.h>

int * sortedArrayInsertNumber(int *Arr, int len, int num)
{
	int i;
	if (Arr == NULL || len <= 0)
		return NULL;
	//Arr = realloc(Arr, (len + 1)*sizeof(int));
	for (i = len - 1; i >= 0; i--)
	{
		if (Arr[i] < -32768 || Arr[i] > 32767)
			return NULL;
		if (num > Arr[i])
		{
			Arr[i + 1] = num;
			return Arr;
		}
		else
			Arr[i + 1] = Arr[i];
	}
	Arr[i + 1] = num;
	return Arr;
}