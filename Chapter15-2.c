// Pointer
    
/*
	+ Pointer type
        Pointer type is same as int or chr. This type must need relative other type.
        Pointer type can memorise address of variables.
    
    + Pointer value
        Pointer value is the number of address.
        Note that pointer value is different from int.
    
    + Pointer variable
        Pointer variable is a variable declared pointer type.
        It can read or overwrite address of variable.
      This variale two mode.
        * mode1: only assign and +/- (pointer variable mode)
        * mode2: can be calculated
*/

# include <stdio.h>

int main (void)
{
	int *p, i;   // Declare pointer variable to use *~   
	// Note that i is not pointer variable.
	
	p = &i;     // Assign p to the address of i
	// You can assign any number to pointer variables.
	// But if you assign wrong number, it cause bugs.
	// Above way is easy way to define pointer variables.
	
	printf("p = %p\n", p);
	printf("i = %p\n", &i);
	// It return same number.
	
    // *p change pointer value to able to be calculate like normal variables.
    *p = 10;
    printf("new p = %d\n", *p);
    printf("new i = %d\n", i);
    
	return 0;
} 
