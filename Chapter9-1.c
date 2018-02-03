# include <stdio.h>

int main (void) 
{
	int i, price; 
	scanf("%d", &price); 
	
    /*
     for-loop
     
     for(initialization, condition, renewal) {
        body
     }
     
     1. init = set counter varible
     2. condition == true do body, condition == false break loop
     3. after do body, counter variale is renewed
     4. return 2
     
     * NOTE
     if condition == true all time, you can make infinite loop
     
     `break;` can break loop forcibly
     
     ex)
     for (int i = 1; i <= 9; i++) {
        printf("%d", i);
        if (i == 3) break;
     }
     
     this code print 1:9 if there is not `break;`.
     But when i == 3, do break and finish loop, so this code print only 1:3.
     
    */
    
	for (i = 1; i <= 9; i++) {
		printf("%d Percent Off = %d\n", i * 10, price * (100 - 10 *i ) / 100); 
		}
	
	return 0; 
}
