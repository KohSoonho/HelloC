# include <stdio.h>

int main (void) 
{
	int year;
	
	printf("please input year \n"); 
	scanf("%d", &year); 
	
    int condition = year % 4;
	
    // if sentence
    /*
     if (condition) body; condition == true  -> do body
                          condition == false -> do NOT do body
    */
    
	if(condition == 0) printf("Summer Olympic");
	if(condition == 2) printf("Winter Olympic");
    if(condition != 0 && condition != 2) {
        printf("Olympic is not hold in this year");
    }
    
    printf("\n");
}
