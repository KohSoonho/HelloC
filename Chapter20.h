/*.Chapter20.h */
// "header" is file contain declaration var or func

# ifndef _INCLUDE_FUNC
// #ifdef-#endif statement is done if ifndef is not defined.
# define _INCLUDE_FUNC
// Define _INCLUDE_FUNC
// When this header is called many times, _INCLUDE_FUNC is defined and ifndef is not done since second time.

// These are header, too.
# include <stdio.h>
# include <string.h>
# include <stdlib.h>

// Define necessary struct and func.

typedef struct {
	char name[64];
	int age;
	int sex;
} People;

// When declare var, You do declare and define var.
// If you declare var in header, compiler return error because he tyr to create same vars.
// "extern" let declaration only to declare but to define, so you can let compiler not to create duplicated var.

extern void InputPeople(People *data);
extern void ShowPeople(People data);

# endif
