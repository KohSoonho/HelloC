#include <stdio.h>

int main(void) 
{
	printf("%d\n", 0x5D); 
	// 0x-- is int of hexiadecimal
	// print 5 * 16 + 13 = 93
	
	printf("%d\n", 023); 
	// 0-- is int of octal
	// print 8 * 2 + 3 = 19
	
	printf("%d\n", 0x5D + 023 * 3);
	// print 93 + 19 * 3 = 150
	
	return 0;
}
