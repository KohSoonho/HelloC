# include <stdio.h>

int main (void) 
{
	int i;
	int data[10];
	
	printf("Please print 10 elements of array\n");
	
	for(i = 0; i < 10; i++) {
		scanf("%d", &data[i]);
	}
	
    printf("input numbers\n");
    
	for(i = 9; i >= 0; i--) {
		printf("%d ", data[i]);
	}
	
	printf("\n");

	return 0;
}
