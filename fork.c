#include<stdio.h>
#include<sys/types.h>
#include<fcntl.h>
#include<unistd.h>
int main()
{	
	pid_t p;
	p=fork();
	switch(p)
	{
		case -1:
			printf("Error\n");
			break;
		case 0://child
			printf("child having id ::\t %d\n",getpid());
			printf("my parent having id ::\t %d\n",getppid());
			break;
		default://parent 
			printf("parent having id ::\t %d\n",getpid());
			printf("child having id ::\t %d\n",p);
			break;
	}
}
