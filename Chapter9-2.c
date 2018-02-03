# include <stdio.h>

int main (void) 
{
	int x, y; 
	
    for (x = 1; x <= 9; x++) {
        // for-loop can be nested if memory permit
        for (y = 1; y <= 9; y ++) {
			printf(" %2d ", x * y);
            /*
             %2d define two digits and arrange number. (result of kuku is one or two digits)
             " " insert before and after %2d make numbers easy to see.
             (.10..12..14..16.)
            */
		}
		printf("\n");   // start new line when x is renewed
	}
	
	return 0;
}
