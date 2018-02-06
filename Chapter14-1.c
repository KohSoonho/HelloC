# include <stdio.h>

int main (void)
{
	char C;
	/*
	char is type of character.
	Length of charabter is one.
	char is memorise number of encoding.
	*/
	
	for (C = 'A'; C <= 'F'; C++) {
	// char is used like int!
	// To define char, use 'char'
		printf("%C", C);    // print ABCDEF
	} 

    printf("\n");
	return 0;

}

/*
NOTE
'0' - '9' are assigned 0-9.
So if you want to know chars is number or not, check number of char is 0-9 or not.
`is---` (ex: isalnum) function check type of char.
To use `is---` function, need "ctype.h"
*/
