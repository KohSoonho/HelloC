/*
 File is very useful tool. If the data is written in files.
You can data permanently.
*/

// To control files, you have 3step
// open file -> read/write file -> close file

# include <stdio.h>

int main (void)
{
	int i = 100;
	
	// When you use file, you declare FILE type of variable
	// FILE is one of struct
	FILE *file;
	
	// fopen open file and return file pointer.
	file = fopen("test.text", "w");
	
	/*
	mode of fopen
	r: read, if file does not exist it return error
	r+: read and write, if file does not exist return error
	w: write, if file does not exist create empty file
	w+: read/write, if file does not exist create empty file
	a: add, if file does not exist create empty file
	a+: add/read, if file does not exist create empty file
	*/
	
	fprintf(file, "%dHello,World\n", i);
	fclose(file);
	
	return 0;
	
}
