# include <stdio.h>

int olympic (int);

int main (void) 
{
	int hold, year;
	
	printf("Please input year\n");
	scanf("%d", &year); 
	
	hold = olympic(year);
	
	switch (hold) {
		case 1:
			printf("Summer Olympic\n");
			break;
		case 2:
			printf("Winter Olympic\n");
			break;
		default:
			printf("No Olympic\n");
			break;
	}
}

int olympic (int year)
{
	if (year % 4 == 0) {
		return 1;
	} else if (year % 4 == 2){
		return 2;
	} else {
		return 0;
	}
}
