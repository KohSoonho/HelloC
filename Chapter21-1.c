// Input from keyboard
// scanf() cannot realize mistake of typing!
// gets() get only string, so it is safe from bug.
// However, gets() does not decite length of array. if you input long String if cause bug.

// fget() is used when you extract String from files. 
// This function set size of array. Even if you input long Strung, fgets() ignore over characters.

// In C language, all of surrounding machine is controlled as files.
// Keyboard is named "stdin" file.

# include <stdio.h>
# include <stdlib.h>

int main (void) 
{
	char str[32] ;
	int val;
	
	fgets(str, sizeof(str) /*.set size of String */, stdin /*.from input of keyboard */);
	
	// atoi() cast ASCII (String) to Int, and ignore other String.
	val = atoi(str);
	
	printf("%d\n", val);
}