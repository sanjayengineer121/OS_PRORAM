#include<stdio.h>
#include<sys/stat.h>
#include<fcntl.h>
int main()
{	
	int n,f,f1;
	char mg[20];
	f=open("file.txt",O_CREAT|O_RDWR,0777);
	
	f1=open("file1.txt",O_CREAT|O_WRONLY,0777);
	while(n=(read(f1,mg,1))!=0)
	{
	write(f1,mg,n);
	}
	printf("copy complete");
}
