# include <stdio.h>

int tri (int, int);  // declare prototype

int main (void) 
{
    int base, height;
    scanf("%d, %d", &base, &height);
	
    int value = tri(base, height);    // call `tri`
	printf("%d\n", value);            // print result
	return 0;                         // finish program
}

// make `tri` function
int tri (int base, int height) 
{
	int area;
	area = base * height / 2;
	return area;     // return number
}
