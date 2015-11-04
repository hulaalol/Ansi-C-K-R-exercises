#include <stdio.h>

#define IN 1 
#define OUT 0


/* count lines, words, and characters in input*/

int main() {

	int c;
	int state = OUT;

	while ((c = getchar()) != '\n') {


		if (c == ' ' || c == '\t') {
			
			if (state = IN) {
				printf("%c", '\n');
			}

			state = OUT;
		}
		else {
			state = IN;
			printf("%c", c);
		}


	}

	while (1 > 0) {
		;
	}


}