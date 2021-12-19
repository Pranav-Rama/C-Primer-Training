/* In this exercise I aim to show how the 3 types of standard inputs(scanf, gets, fgets)
 * and how they are used with strings. I also show here the #preprocessor and standard const. 
 */

// Chapter 4 C Primer. - Strings

#include <stdio.h>
#define LAPTOP "Chromebook"
#include <string.h>

void main(void)
{

int const postcode = 71200;
char name[40];
char fullname[100];
int age[2];

printf("\nEnter your name here: ___________\b\b\b\b\b\b\b\b\b");
scanf("%s", name);
printf("\nHi from scanf %s!", name);

printf("\nEnter your name here: ___________\b\b\b\b\b\b\b\b\b");
gets(fullname);
printf("\nHi from gets %s!", fullname);

printf("\vEnter your age here: ___________\b\b\b\b\b\b\b\b\b");
fgets(age, 2, stdin);

//LAPTOP = "Changed";
printf("Your preprocessor defined device is: %s", LAPTOP);
//postcode = 69000;
printf("\nYour standard const is: %d", postcode);

printf("\n\tSize of fullname is: %zd", sizeof(fullname));
printf("\n\tLength of fullname is: %zd", strlen(fullname));

print("\nRun Complete!\v");


}
