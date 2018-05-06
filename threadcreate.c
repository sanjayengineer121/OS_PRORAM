#include <pthread.h>//using structure
#include<string.h>
#include<unistd.h>
#include<stdio.h>
struct m_struct{
	int arg1;
	int arg2;
	};

void *mg(void *mg)

{
	struct m_struct *mj = mg;
	printf("%d \n",mj->arg1);
	printf("%d \n",mj->arg2);
	pthread_exit("Entered");
}
int main()
{	int sum=0;
	pthread_t s;
	struct m_struct mj;
	mj.arg1 = 11;
	mj.arg2 = 12;
sum=(mj.arg1+mj.arg2);
pthread_create(&s,NULL,mg,&mj);
pthread_join(s,NULL);
printf("sumis \t %d",sum);
}

