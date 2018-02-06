# include <stdio.h>

int main (void)
{
	int data[] = {79, 42, 39, 79, 13, 75, 19};
	/*
	 Array can contain many elements
	 To define array, write "type name[number of elements]"
	{} defeine elements of array
	If elements of array are not defined, these elements are assigned 0
	*/

	int i, sum, average;

	for (i = 0; i < sizeof(data) / sizeof(data[0]); i++) {
	// `sizeof()` calculate data size
	// sizeof(data) / sizeof(data[0]) calculate number of elements in array
	// Note first element of array are accessed array[0] (not 1)
		sum += data[i];
		// calculate sum by for-loop and array (this is strong point of array)
	}

	average = sum / (sizeof(data) / sizeof(data[0])); 
	
	printf("average is %d.\n", average);
	return 0;
}
