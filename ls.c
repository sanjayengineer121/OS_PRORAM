#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
int main()
{
pid_t pid;
int fd[2],n;
char buff[80];
pipe(fd);
pid = fork();
if(pid>0)
{	
	sleep(2);
	printf("\n\n Parent id is ::: %d",getpid());
	write(fd[0],"hello ",5);
}

else
{
	sleep(2);
	printf("\n\nChild id is :::  %d" ,pid);
	n=read(fd[1],buff,100);
	write(1,buff,n);	
}

}
