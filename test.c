/* This is a test hello world */

#include <stdio.h>
#define LAPTOP "Lenovo G500"

void main(void) 
{
	char name[40];
	printf("\nPlease Enter Your Name Here:__________\b\b\b\b\b\b\b\b");
	scanf("%s", name);
	printf("\nHi %s, you're on a %s.\n", name, LAPTOP);

}
