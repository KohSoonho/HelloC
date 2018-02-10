// Pointer is useful to use shortcut of variables.

# include <stdio.h>

void sum(int, int, int*);  // Return of sum() is void, so sum can not return anything.

int main (void)
{
	int value;
	sum(50, 100, &value);   // adress of value are send to func.
	printf("%d\n", value);
	return 0;
}

void sum(int min, int max, int *answer)
{
	// answer is pointer value.
	// answer become shortcut of value.
	// To use *answer ~, you can change value.
    *answer = (min + max) * (max - min + 1) / 2;
	return;     // This func return nothing.
}
