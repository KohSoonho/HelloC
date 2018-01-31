# include <stdio.h> 

int main (void) 
{
	int juice, milk, cash, payment, change;
    double tax;
	juice = 198;
	milk  = 138;
    tax   = 1.05;
	cash  = 1000;
    
	payment = (int) ((juice + milk * 2) * tax);
    change  = cash - payment;
    
    printf("%d\n", change);
           
    return 0;
}
