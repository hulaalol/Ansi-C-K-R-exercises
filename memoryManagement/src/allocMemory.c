/*
 ============================================================================
 Name        : memoryManagement.c
 Author      : Marcel
 Version     :
 Copyright   : 
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/* Prototypes malloc, free,... */


int main(void) {
	const size_t blocksize = 1024 * 1024; /* 1 MB */
	size_t blocks = 1;
	char * ptr;
	do {

			ptr = (char*) malloc(blocks * blocksize);
			printf("Block at address %d\n", (size_t) ptr);
			printf("How many MB would you like to allocate? (0=end)\n");
			scanf("%d", &blocks);
			free(ptr);

			printf("Allocated %d blocks\n",blocks);

			ptr = (char*) malloc(blocks * blocksize);

			memset(ptr,'a',blocks*blocksize);
				} while (blocks != 0);





				exit(0);
			}

