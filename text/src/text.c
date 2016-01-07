#include <stdio.h>





int main() {

typedef char Text[10];


int i;
int k;
Text input[10];

for(i=0; i<10; i++){

	printf("%s %d %s", "Bitte Text ",(i+1)," eingeben: ");

	fgets(input[i] , 10, stdin);




}

// char * fgets ( char * str, int num, FILE * stream );



for(i=0; i<10;i++){

	printf("%s",input[i]);
}

return 0;
}
