# include <stdio.h>

int main (void) 
{
	int year;
	scanf("%d", &year);
	
    /*
     if-else sentence
     
     if (condition1) {
        body1      // if condition1 == true, do body1.
     } else if (condition2) {
     dody2      // if condition2 == true, do body2, and you can make many else if () {}.
     }else{
        body3   // if all conditions seted before == false, do last body. (You can ommit)
     }
     
    */
    
	if (year % 4 == 0) {
		printf("summer \n"); 
	} else if (year % 4 == 2) {
		printf("winter \n"); 
	} else {
		printf("do not \n");
	}
	
	return 0;
}
