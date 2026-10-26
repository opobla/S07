#include <stdio.h>
#include <sys/wait.h>
#include <stdlib.h>
#include "my_math.h"
#include <unistd.h>


int main() {
	int pid;

	pid=fork();

	
	if (pid==0) {
		// This is the path that the child will follow 
		printf("Child: Starting here! \n");
		printf("Child: exiting here! \n");
		exit(0);
	} else {
		// This is the path that the father will follow 
		printf("Father: Starting here! \n");
		printf("Father: waits  zzZZ! \n");
		//waitpid(pid, NULL, NULL);
		printf("Father: waking up \n");
	}


	printf("pid from fork() is %d \n", pid);
	printf("This is my PID=%d \n", getpid());
	printf("This is my PPID=%d \n", getppid());

	printf("The sum of 2 + 2 is %d \n", my_add(2, 2));
	printf("The sub of 2 - 2 is %d \n", my_sub(2, 2));
	printf("End here! \n");
}


/* END */
