# include <stdio.h>

int main (void)
{
	FILE *file;
	int i;
	
	file = fopen("file.dat", "rb");
    // fread read data from binary data
	fread(&i, sizeof(i), 1, file);
	
    // at binary i == 0A000000
    // this is little endian
	printf("%d\n", i);
	
	return 0;
}
