# include <stdio.h>

int main (void)
{
	char first[11], last[11], full[22];
	
	printf("Please write your first name.\n");

	// `scanf()` can be used String, and need not "&"
	scanf("%11s", first);

	// If input Strings has over length to array, you experience terrible error!
	// "%11s" define C can read only 10 + EOF. (Limit of length of input is 10)
    
    printf("Please write your last name.\n");
    scanf("%11s", last);
    
	sprintf(full, "%s %s\n", first, last);
	// `sprintf()` is very useful function to connect String.

	printf("your name is %s", full);
	return 0;
}
