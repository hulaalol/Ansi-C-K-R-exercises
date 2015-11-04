#include <stdio.h>

#define IN 1		/*inside a word*/
#define OUT 0		/*outside a word*/

/* count lines, words, and characters in input*/

int main3() {

	int c;
	int nl;
	int nw;
	int nc;
	int state;

	state = OUT;
	nl = 0;
	nw = 0;
	nc = 0;

	while ((c = getchar()) != '\n') {

		++nc;

		if (c == '\n') {
			++nl;
		}

		if (c == ' ' || c == '\t') {
			state = OUT;
		}
		else if (state == OUT) {
			state = IN;
			++nw;
		}

	}

	printf("%d %d %d\n", nl, nw, nc);

	while (1 > 0) {
		;
	}


}