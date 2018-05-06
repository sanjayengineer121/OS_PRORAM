#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>
int main()

{
	int r,n;
	char mg[50];
	r = open("fifo1",O_WRONLY);
	write(r,"MAngeeta",7);
	printf("id is \t \t :: %d",getpid());
}
