/*
 ============================================================================
 Name        : priorities.c
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

#include <sys/time.h>
#include <sys/resource.h>

void doWork(const char* where, int number) {
	printf("Process %s working on number %d\n", where, number);
}

int main(int argc, char * const argv[]) {
	pid_t pid = fork();

	if (pid == 0) {
		setpriority(PRIO_PROCESS, 0, 19);


		int p1prio;
		p1prio = getpriority(PRIO_PROCESS, 0);


		int i;
		for(i=100;i>0;i--){
			doWork("child", p1prio);
		}


	} else {
		setpriority(PRIO_PROCESS, 0, 0);

		int p2prio;
		p2prio = getpriority(PRIO_PROCESS, 0);

		int i;
		for(i=100;i>0;i--){
		doWork("parent", p2prio);
		}

		nice(5);
		p2prio = getpriority(PRIO_PROCESS, 0);

		int k;
		for(i=100;i>0;i--){
				doWork("parent", p2prio);
				}


		waitpid(pid, 0, 0);

	}
	return 0;
}
