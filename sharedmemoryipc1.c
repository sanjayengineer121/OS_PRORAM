#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/shm.h>
#include<string.h>

int main()
{
	int i;
	char mg[50];
	void *shared_memory;
	int shmid;
	shmid = shmget((key_t)2345,1000,0666);
	printf("KEY of shared memory is %d",shmid);
	shared_memory = shmat(shmid,NULL,0);
	printf("process attached at %X \n:",(int)shared_memory);
	printf("Process attached to write to shared memory\n ");
	printf("Written by u %s",shared_memory);
}
