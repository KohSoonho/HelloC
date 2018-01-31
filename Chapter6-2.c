# include <stdio.h>

int main (void) {
    // Declare variables
    int price;
	double discount10, discount30, discount50, discount80;
    
    // Set rate of discount
	discount10 = 0.9;
	discount30 = 0.7;
	discount50 = 0.5;
	discount80 = 0.2;
	
    // Input price
	printf("Please input price");
	scanf("%d", &price);
	
    // Output list of discounted price
	printf("The price is %d yen. \n", price);
	printf("10 percent discount is %d yen. \n", (int) (price * discount10));
	printf("30 percent discount is %d yen. \n", (int) (price * discount30));
	printf("50 percent discount is %d yen. \n", (int) (price * discount50));
	printf("80 percent discount is %d yen. \n", (int) (price * discount80));
	
	return 0; 
}
