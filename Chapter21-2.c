# include <stdio.h>
# include <stdlib.h>
# include <string.h>

int main (void)
{
	int i, j, val[10];
	char str[32], *ch;
	
	fgets(str, sizeof(str), stdin);
	
	// strok() explore separeting words and change these to EOS
	// Extract first word.
	ch = strtok(str, ", \n");
	
	for (i = 0; i < 10; i++) {
		if(ch == NULL) {
			// If strtok cannot explore word, it return NULL.
			// When it return NULL, break loop.
			break;
		} else {
			val[i] = atoi(ch);
		}
		// Extract next word
		ch = strtok(NULL, ", \n");
	}
	
	for (j = 0; j < i; j++) printf("%d\n", val[j]);
    
    return 0;
}
