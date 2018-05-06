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
			for(int i=0;i<10;i++){
			printf("%d\n",i);
			sleep(1);
			}
			break;
		default://parent 
			wait();
			for(int i=0;i<10;i++){
			printf("%d\n",i);
			sleep(1);
			}
			break;
	}
}
