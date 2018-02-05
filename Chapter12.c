# include <stdio.h>

int count1;  
// count1 is global variable, this variable is used in entire source

int countfunc1(void), countfunc2(void), countfunc3(void);

int main (void) 
{
	countfunc1();   // print 1, count1 are memorised in global sorce
	countfunc1();   // print 2
	countfunc1();   // print 3
	
	countfunc2();   // print 1, count2 are deleted when func finish
	countfunc2();   // print 1
	countfunc2();   // print 1
	
	countfunc3();   // print 1, count3 are memorised in func
	countfunc3();   // print 2
	countfunc3();   // print 3
			
	return 0;	
}

int countfunc1 (void)
{
	count1++;     // default of global varible are set 0
	printf("%d\n", count1);
	return 0; 
}

int countfunc2 (void)
{
	int count2 = 0;   // local variable only used in functiion
	count2++;
    printf("%d\n", count2);
	return 0;
}

int countfunc3 (void)
{
	// static local variable only used in function
	static int count3;  // but can use global variable in function
    count3++;
	printf("%d\n", count3);
	return 0;
}
