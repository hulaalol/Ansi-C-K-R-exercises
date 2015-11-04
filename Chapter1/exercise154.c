/*
============================================================================
Name        : Chapter1.c
Author      :
Version     :
Copyright   : Your copyright notice
Description : Hello World in C, Ansi-style
============================================================================
*/

#include <stdio.h>

int main() {
	replaceTabBackspaceBackslash();
	return 0;
}

int removeAdditionalSpaces() {

	while (1 > 0) {
	char c;
	char previous='A';

	
	while ((c = getchar()) != '\n') {

		if (previous == ' ' && c == ' ') {
			;
		}
		else {
			printf("%c", c);
			previous = c;
		}

	}

	
		
	}
}


int replaceTabBackspaceBackslash() {

	while (1 > 0) {
		char c;
		char previous = 'A';


		while ((c = getchar()) != '\n') {

			if (previous == ' ' && c == ' ') {
				;
			}
			else if (c == '\t') {
				printf(" %c%c ", '\\', 't');
			}else if (c == '\b') {
				printf("%c%c", '\\', 'b');
			}else if (c == '\\') {
				printf("%c%c", '\\', '\\');
			}else {
				printf("%c", c);
				previous = c;
			}
			
		}

	}
	return 0;
}