# include <stdio.h>

// enum constant
// enum constant is used as flag constant. 
// These elements of enum are asigned to integers.

int Olympic(int year); 

enum {
	OLYMPIC_NON, 
	OLYMPIC_SUMMER,
	OLYMPIC_WINTER,
} ;

int main (void)
{
	int year, hold;
	
	printf("please input year\n");
	scanf("%d", &year);
	
	hold = Olympic(year);
	
	// enum is used instea of int
	// It is easy to understand
	switch (hold) {
		case OLYMPIC_NON:
			printf("NOT HOLD\n");
			break;
		case OLYMPIC_SUMMER:
			printf("SUMMER OLYMPIC\n");
			break;
        case OLYMPIC_WINTER:
			printf("WINTER OLYMPIC\n");
			break;
	} ;

	return 0;
}

int Olympic (int year) {
	if (year % 4 == 0) {
		return OLYMPIC_SUMMER;
	} else if (year % 4 == 2) {
		return OLYMPIC_WINTER;
	} else {
		return OLYMPIC_NON;
	}

 	return 0;
 }
	
