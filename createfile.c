#include<stdio.h>
#include<sys/stat.h>
#include<fcntl.h>
int main()
{	
	int n,f;
	char mg[20];
	f=open("file.txt",O_CREAT|O_RDWR,0777);
	n=read(0,mg,20);
	write(f,mg,n);
}
