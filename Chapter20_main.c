# include "Chapter20.h"

// This is main source.
// This file is separated declaration("Chapter20.h") and definition of function("Chapter20_func.c")
// To separate source files, you can cooperate writing cord with your colleague!

int main (void)
{
	int i, count, datasize;
	People *data;
	
	datasize = 10;
	data = (People*)malloc(sizeof(People) * datasize);
	
	count = 0;
	while(1) {
		InputPeople(&data[count]);	
		if (data[count].age == -1) break;
        count++;
		
		if (count >= datasize) {
			datasize += 10;
			data = (People*)realloc(data, sizeof(People) * datasize);
		}
	}	
	
	for (i = 0; i < count; i++) {
		ShowPeople(data[i]);
	}
	
	free(data);
	
	return 0;
}

/*
When you want to compile plural files by gcc
1. make o.files from each of c.files
 $ gcc -c A.c
 $ gcc -c B.c
 $ gcc -c C.c
2. make sum_product from o.files
 $ -o sum_product A.o B.o C.o
3. do sum_product
 $ ./sum_product
*/
