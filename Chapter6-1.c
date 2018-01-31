# include <stdio.h>

int main (void) 
{
	int base, height, area;
	
	scanf("%d, %d", &base, &height);
	/*
	`scanf()` display keyboad input.
     To use `scanf()`, "&" is need before var.
	"%d" is type of input. (%d is int)
	"%d ',' %d" means sep = ",".
	*/
	
	area = base * height / 2;   // This formula determine an area of triangle.
	printf("%d\n", area);
	
	return 0;
}
