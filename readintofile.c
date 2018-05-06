#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>
int main()

{
	int r,n;
	char mg[50];
	r = open("fifo1",O_WRONLY);
	n=read(n,mg,100);
	printf("\n number of charector is \t \t %d",n);
	printf("\n string is %s",mg);
	printf("\n id is \t \t %d",getpid()); 
}
