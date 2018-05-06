#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
int main()
{
	int r;
	char sj[50];
	r = mkfifo("fifo1",0777);
	printf("\n Created named pipe");

}

