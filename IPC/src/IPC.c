#include <sys/wait.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

int main(int argc, char *argv[])
{
	int filedes[2]; /*file descriptor for pipe*/


	int filedes2[2];

	int pid; /* process id for child process */
	char buf; /* buffer to read from pipe */
	int errorcode = pipe(filedes); /* create the pipe */

	/* check if pipe could be created otherwise exit */
	if(errorcode!=0){exit(errorcode);}
	pid = fork(); /* fork a child process */

	if (pid==0) { /* child process reads from pipe */
		close(filedes[1]);/* close unused write end */
		close(filedes2[0]);/* close unused read end*/

		/* read 1 byte as long as file not closed */
		while (read(filedes[0], &buf, 1)>0)
		{

			write(STDOUT_FILENO, &buf, 1);/* write byte to the STDOUT */
			write(filedes2[1],&buf,strlen(argv[1])); /* write to pipe to inform parent process*/
		}


		write(STDOUT_FILENO, "\n", 1); /* write new line to the STDOUT */

		close(filedes[0]); /* close unused read end */
		sleep(10);
		close(filedes2[1]); /*close write end*/
		exit(0);/* exit child */

	} else { /* Parent writes argv[1] to pipe */
		close(filedes[0]); /* close unused read end */
		close(filedes2[1]); /* close unused write end */

		/* write argument 1 to pipe */
		write(filedes[1], argv[1], strlen(argv[1]));

		char buf2;


			printf("Child received Argument:");
			while(read(filedes2[0], &buf2, 1)>0){
				write(STDOUT_FILENO, &buf2, 1);/* write byte to the STDOUT */
			};





		close(filedes[1]);/* close write end, reader will see EOF */
		close(filedes2[0]); /*close read end of bi*/
		wait(0); /* wait for any child */

		return 0;
	}
}
