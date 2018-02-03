# include <stdio.h>

int main (void) 
{
	int year = 0;
	int money = 10000;
	
	/*
	while-loop
	
	while (condition) {
		body
	}
	
	As long as condition == true, do body.
	So, to break loop, set condition carefully. (can make infinite loop) 
	
	*/
	
	while (money < 15000) {
		year++;
		money *= 1.01;
	}
	
	printf("after %3d years, money is %5d yen \n", year, money);
    
    return 0;
	
}
