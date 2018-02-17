/* Chapter20_function.c */
// This is only definition of function

// To call header file you can get necessary declaration in header file.
// When you call specific header, write "header.h" not <header.h>.
# include "Chapter20.h"

void InputPeople(People *data)
{
	printf("name: \n");
	scanf("%s", data->name);
	printf("age: \n");
	scanf("%d", &data->age);
	printf("sex (male = 0, female = 1): \n");
	scanf("%d", &data->sex);
}

void ShowPeople(People data)
{
	char sex[16];
	printf("name: %s\n", data.name);
	printf("age: %d\n", data.age);
	
	if (data.sex == 0) {
		strcpy(sex, "male");
	} else {
		strcpy(sex, "female");
	}
	
	printf("sex: %s\n", sex);
    printf("\n");
}
