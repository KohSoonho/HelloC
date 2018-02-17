// Dynamic Array
// The number of array elements are changed.
// Dynamic array can be changed their number.

# include <stdio.h>
# include <string.h>
# include <stdlib.h>

typedef struct {
	char name[64];
	int age;
	int sex;
} member;

void inputMember (member *data);
void printMember (member data);

int main (void) 
{
	member *data;
	int i, count, datasize;
	
	datasize = 10;
	
	// malloc() preserve memory.
	// Argument of malloc() is size of byte. It is determined by sizeof().
	data = (member *)malloc(sizeof(member) * datasize);
	// Get memory of struct * 10. 
	
	count = 0;
	while (1) {
		inputMember(&data[count]);
		if (data[count].age == -1) break;      // If you input age == -1, inputMember() stop.
		count++;                                          // Get number of array elements.
		
		if (count >= datasize) { 
			datasize += 10;                           // If count > datasize, increase datasize.
			// relloc() change number of array
			data = (member *)realloc(data, sizeof(member) * datasize);
		}
	}		
			
	for (i = 0; i < count; i++) {
		printMember(data[i]);
	}
	
	// Free memory after you finish to use dynamic array.
	// If you do not free memory, it may cause error! 
	free(data);
	
	return 0;
}

void inputMember (member *data)
{
	printf("Name\n");
	scanf("%s", data->name);
	printf("Age\n");
	scanf("%d", &data->age);
	printf("Sex (male: 0, female: 1)\n");
	scanf("%d", &data->sex);
    printf("\n");
}

void printMember (member data)
{
	char sex[16];
	
	printf("Name: %s\n", data.name);
	printf("Age: %d\n", data.age);
	
	if (data.sex == 0) {
		strcpy(sex, "male");
	} else {
		strcpy(sex, "female");
	}
	
	printf("%s", sex);
    printf("\n");
}
	
