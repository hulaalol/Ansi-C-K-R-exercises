#include <stdio.h>

void f(int *a) {
*a*=*a**a;
}
int test(int argc, char* argv[]) {
int i=3;
f(&i);
printf("%d\n", i);
return 0;
}
