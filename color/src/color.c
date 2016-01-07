#include <stdio.h>

typedef struct{
	int r;
	int g;
	int b;
} color;

void readColors(color* colors, int numberOfColors){

	int i=0;

	for(i=0; i<numberOfColors; i++){

		printf("\nBitte rot eingeben: ");

		scanf("%d",&colors[i].r);

		printf("\nBitte grün eingeben: ");

		scanf("%d",&colors[i].g);

		printf("\nBitte blau eingeben: ");

		scanf("%d",&colors[i].b);
	}



}


int main(){

	color colors[5];
	int numberOfColors=5;

	readColors(colors,numberOfColors);

	return 0;








}
