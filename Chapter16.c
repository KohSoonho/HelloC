# include <stdio.h>
# include <string.h>

// Struct
// `struct` is the type that can contain hetero type datas.
// `struct` can preserve related hetero type datas.

/*
To define struct you need two steps.

 + step1: declare type of struct
    struct tag {
        body
    };
 + step2: declare a variable which has "tag" type struct.
    struct tag var;
*/

// Use `typedef`, you can declare struct variable in only one step.
// typedef struct {body} var; (you do not need tag of struct type)
 typedef struct {
    char name[64];   // Component tags are defined "type var;".
	int age;
	int sex;
} member ;

// struct can be argument of func and can make pointer variable.
void input_member (member *data);
void print_member (member data);

int main (void)
{
    // You can make array of struct.
    // You can copy struct struct1 = struct2.
	member data[3];
    int i;
    
    for(i = 0; i <= 2; i++) {
        input_member(&data[i]);
    }

    printf("information of member\n");

    for (i = 0; i <= 2; i++) {
        print_member(data[i]);
    }
	
	return 0;
} 

// You can make func that have pointer struct variable.
void input_member (member *data)
{
	printf("please input name,age,sex\n");
    // Var of struct is accessed by "struct.var".
    // If you use pointer struct, you use "(*struct).var".
    // You can write struct->var instead of "(*struct).var".
    scanf("%s , %d , %d", data->name, &data->age, &data->sex);
	return;
}

void print_member (member data)
{
    char sex[16];
    
	printf("name: %s\n", data.name);
	printf("age: %d\n", data.age);

    if (data.sex == 0) {
        strcpy(sex, "male");
    } else {
        strcpy(sex, "female");
    }
    printf("sex: %s\n", sex);
    
    return;
}
	
