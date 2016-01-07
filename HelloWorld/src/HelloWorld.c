/*
 ============================================================================
 Name        : HelloWorld.c
 Author      : OberBaba
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

printReverse(char* string, int length) {
	int i = 0;

	// iterate over string in reverse order
	for(i = length-1; i >= 0 ; --i) {
		// print every character of string
		printf("%c", string[i]);
	}

	// print new line, just so it looks prettier
	printf("\n");
}

int main() {
	// declare string as array and fill with zeroes, so there is no gargabe in it
	char string[100] = {0};

	printf("Bitte was eingeben: \n");

	// read from command line and save to string. no "&", because string (array) is already an adress
	scanf("%s", string);

	// call function with string and its size
	printReverse(string, 100);


	return 0;
}



