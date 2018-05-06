#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<string.h>
int main()
{
	FILE *rd;
	char mg[80];
	sprintf(mg,"\nWRITE YOUR NAME");
	rd=popen("wc -c","w");
	fwrite(mg,sizeof(char),strlen(mg),rd);
	pclose(rd);
}
