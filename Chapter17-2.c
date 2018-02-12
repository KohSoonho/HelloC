# include <stdio.h>

int main (void)
{
	char i [100];
    int j;
	FILE *file;
	
	file = fopen("test.text", "r");
	
	// Set "%d" read only int
	fscanf(file, "%d", &j);
    // Set "%s" read String but 
    fscanf(file, "%s", i);
    
    fclose(file);
    
	printf("%s\n", i);
    printf("%d\n", j);
    
	return 0;
}
