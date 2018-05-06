#include<pthread.h>
#include<stdio.h>
void *m1();
void *m2();
s=1;
pthread_mutex_t l;
int main()
{
	pthread_mutex_init(&l,NULL);
	pthread_t thread1,thread2;
	pthread_create(&thread1,NULL,m1,NULL);
	pthread_create(&thread2,NULL,m2,NULL);
	pthread_join(thread1,NULL);
	pthread_join(thread2,NULL);
	printf("Shared variable is %d",s);
}
void *m1()
{
	int a;
	pthread_mutex_lock(&l);
	a=s;
	a++;
	sleep(2);
	s=a;
	pthread_mutex_unlock(&l);
}
void *m2()
{
	int b;
	pthread_mutex_lock(&l);
	b=s;
	b--;
	s=b;
	pthread_mutex_unlock(&l);
}
