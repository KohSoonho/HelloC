# include <stdio.h>

// binary file only contain numbers
// binary file only contsin numbers so normal editor cannot open this file
// but binary file can be read very fast

int main (void) 
{
	FILE *fp;
	int dat [3] = { 10 , 20 , 30 };
    
    // if binary file open, use fopen, but mode contain "b" at end
	fp = fopen("file.dat", "wb");
    // if write/read binary file, use fwrite/fread
    // To use fwrite() you need to define the size of data of one element.
    // the size of data of one element can be determined sizeof()
	fwrite(&dat, sizeof(dat), 1, fp);
	fclose(fp);
	
	return 0;
}
