/*
 ============================================================================
 Name        : CreateProcesses.c
 Author      : Marcel
 Version     :
 Copyright   : 
 Description : Hello World in C, Ansi-style
 ============================================================================
 */
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
void *doWork(const char *where)
{
printf("Entered work function (%s)\n",where);
sleep(60);
printf("Leaving work function (%s)\n",where);
return 0;
}
int main (int argc, char * const argv[]) {
pid_t pid = fork();

if(pid == 0){
sleep(10);
execv("/bin/echo", argv );

}else{

doWork("parent");
waitpid(pid,0,0);

}
return 0;
}
