/*
 ============================================================================
 Name        : threads.c
 Author      : Marcel
 Version     :
 Copyright   : 
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdlib.h>
#include <stdio.h>
#include <pthread.h>
#define NUMBER_OF_THREADS 10


void *print_hello_world(void *tid)
{
/*this function prints the thread's identifier and then exits.*/
printf("Hello World. Greetings from thread %d \r\n",tid);
pthread_exit(NULL);
}



int main (int argc, char * const argv[]) {
/* The main program creates 10 threads and then exits.*/

pthread_t threads[NUMBER_OF_THREADS];
int status;
int i;

for(i=0; i < NUMBER_OF_THREADS; ++i)
{

printf("Main here. Creating thread %d\n", (i));

status = pthread_create(&threads[i],NULL,print_hello_world,i);
pthread_join(threads[i],NULL);

//Create your thread here.

}



exit(0);
}





