# include <stdio.h>

int main (void)
{
	int i1, i2, i3;
    int array[10];
    
    // Variable are assigned number("adress") to be preserved in PC's memory.
    // "%p" can access address.
	printf("ii(%p)\n", &i1);    // It return any number
    printf("i2(%p)\n", &i2);
    printf("i3(%p)\n", &i3);
    // Type int spend 4 bytes in memory.
    
    printf("array_(%p)\n", array);
    // The name of array express address of first element of array.
    printf("array[0](%p)\n", &array[0]);
    printf("array[1](%p)\n", &array[1]); // Elements of array have consequense number.
    printf("array[2](%p)\n", &array[2]);
    
    /*
     "&" is used to access address of variables.
    In C langugage, when call func arguments are only number.
    (It mean that when arguments of func is only copy of arguments.)
    Using "&" and accessing address of variable, we can overwrite variable.
    */
    
	return 0;
}
