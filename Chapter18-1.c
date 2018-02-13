# include <stdio.h>

// If you want to declare constant, you use #define.

# define EXCISETAX 0.05  // declare constant. (you need not write ";" at end)

int main (void) 
{
	const double EXCISETAX2 = 0.08;    // "const" is another way of decleration of constant
	int price, price2;
	printf("please input price\n");
	scanf("%d", &price); 
	price = (int) ((1 + EXCISETAX) * price);
	price2 = (int)((1 + EXCISETAX2) * price);
	printf("%d, %d\n", price, price2);
	
	return 0;
}

// If you use same number many times, declaration of constant is very useful.
// When constant changed, you need to rewrite only #define or constant.
// #define is popular but const is useful if constant only is used in specific function.
