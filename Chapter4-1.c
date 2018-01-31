#include <stdio.h>

/* 
`printf()` print only String.
To print number, %d or %f is used.
printf("%d", 10) -> print 10
Formula is used , too.
printf("%d", 10 + 2) -> print 12
*/

int main(void) 
{
	printf("%d\n", 20 / 7); 
	// %d is integer, so 20/7 -> 2
	printf("%f\n", 20.0/7.0); 
	// %f is float, so 20/7 -> 2.857143
	return 0;
}
