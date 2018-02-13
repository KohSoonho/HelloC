# include <stdio.h>

// define declare function, too. (macro)
// However, define is only replacement, so to use macro is careful.
#define TRI(A,H) ((A) * (H) / 2)  // caution!: you must take care of space in macro.

int main (void)
{
	int base, height;
	
    printf("please input base and height\n");
	scanf("%d,%d", &base, &height);
	printf("%d\n", TRI(base,height));    // You can use macro easily.
	
	return 0;
}
