#include <stdio.h>
#include <stdlib.h>

int test(){

int i=0;
int*ptr;
ptr = &i;

*ptr=4;

printf("Wert von i: %d\n", i);

return 0;

}
