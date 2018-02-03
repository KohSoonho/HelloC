# include <stdio.h>

int main (void) 
{
	int score;
	
    /*
     do-while loop (in Swift, repeat-while)
     
     do {
        body;
     } while (condition);    <- do not forget ";"
     
     As long as condition == true, do body. It is resemble while-loop.
     
     while loop evaluate condition BEFORE do body.
     (Sometimes body are not done)
     
     do-while loop evaluate condition AFTER do body.
     (At least one time, body are done)
     
    */
    
	do {
		printf("Please input score \n");
		scanf("%d", &score);
    } while (score > 100 || score < 0);
    
    // do-while loop is suitable to check input.
    // because body are done at least one time, input are must done.
	
	printf("your score is %3d \n", score);
	
	return 0;
}
