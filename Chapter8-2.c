# include <stdio.h>

int main (void) 
{
	int month;
	
	printf("Please input month! \n");
	
	scanf("%d", &month); 
	
    // switch sentence
    /*
     switch (condition) {
     case 1:
        body;
        break;
     case 2:
        body;
        break;
    ...
     
     default:
        body;
        break;
     
     }
     
     condition == n, -> do body at case "n"
     condition == m, but case "m" do not exist -> do body at default
     
     *NOTE
     In C language, condition of switch must be only int type.
     
     "break;" can omit when any case do same thing.
     But case can be connected. (ex. case 1, 3, 4: body;)
     So, when you ommit "break;" there may be accidental connection among cases.
     
    */
     
	switch (month) {
	case 1: 
		printf("mutsuki \n");
		break;
	case 2:
		printf("kisaragi \n"); 
		break; 
	case 3: 
		printf("yayoi \n"); 
		break; 
	case 4:
		printf("uzuki \n");
		break;
	case 5:
		printf("satsuki \n"); 
		break; 
	case 6:
		printf("minazuki \n"); 
		break; 
	case 7: 
		printf("fumizuki \n"); 
		break; 
	case 8: 
		printf("hazuki \n"); 
		break; 
	case 9:
		printf("nagatsuki \n"); 
		break; 
	case 10: 
		printf("kannazuki \n"); 
		break; 
	case 11: 
		printf("simozuki \n"); 
		break; 
	case 12: 
		printf("siwasu \n"); 
		break; 
	default: 
        printf("this month does not exist \n");
		break; 
	}
	
	return 0;
}
