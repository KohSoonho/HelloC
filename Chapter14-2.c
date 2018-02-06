# include <stdio.h>

int main (void) 
{
	/* 
	To control String, we do not know how long length of String is.
	So, In C, use array of char to control String.
	Array can be changed length and omit memory.
	*/

	char str1[6] = {'M', 'A', 'R', 'I', 'O', '\0'};
	/*
	'\0' is EOF(End of String). It define end of String
	Do not forget to tell C the end fo String!
	If you weite str1[6] = {'M', 'A', 'R', 'I', 'O'};
	str1[6] is assigned '0' automatically, so it become EOF.
	*/
	
	printf("%s\n", str1);

	// Can write use " ". But this method is only used at declaration of array.

	char str2[] = "MARIO"; 
	// In this method, I can omit define number of elements of array.
	printf("%s\n", str2);

	return 0;
}