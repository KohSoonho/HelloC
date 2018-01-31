# include <stdio.h>

/*
To declare variables (var) is to name memory in these variable.
To declare var can make me access memory more easily.
*/

int main (void) 
{
	int x, y;	 
	// In C languae, declaration of var must  be put at the top of function. 
	// C99 or C++ can compile if declaration of var is not put at the top of function. 
	// To declare var, I write `type name`
	
	x = 10;
	// Assign x to 10, it do NOT mean x == 10.
	
	y = x * 10 + 20;
	printf("%6d\n", y);
	// "%5d" mean a 5-digit number.
	// This program print "   120"
	
	printf("%06d\n", y);
	// This program print "000120", fulfill 0 to empty digit.
	
	printf("%6.2f\n", (double) y);
	// This program print "120.00". Note that "." of "-" is counted one digit.
	// To cast type, write (type) number or name
	
	return 0;
}
