# include <stdio.h>

void range (int array[], int*, int*);

int main (void) 
{
	int array[10];
	int i = 0, min, max;
	
	printf("please input number\n");
	
    do {
        printf("No.%d: ", i + 1);
        scanf("%d", &array[i]);
        i++;
    } while (array[i -1] != -1);
    
	range(array, &min, &max);
    
	printf("min is %d, max is %d\n", min, max);

	return 0;
}

void range(int array[], int *Min, int *Max)
{
	int i = 0;
    
	*Min = 0;
	*Max = 100;
	
    while (array[i] != -1) {
        if(array[i] <= *Min) *Min = array[i];
        if(array[i] >= *Max) *Max = array[i];
        i++;
    }
    
    return;
}
