#include<pthread.h>
#include<stdio.h>
void *m1();
void *m2();
int s=1;
int main()
{
pthread_t thread1,thread2;
pthread_create(&thread1,NULL,m1,NULL);
pthread_create(&thread2,NULL,m2,NULL);
pthread_join(thread1,NULL);
pthread_join(thread2,NULL);
printf("final value of shared is :: %d",s);
}

void *m1()
{
	int a;
	a=s;
	a++;
	sleep(2);
	s=a;
}
void *m2()
{
	int b;
	b=s;
	b--;
	sleep(2);
	s=b;
}

