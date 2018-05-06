#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<string.h>
int main()
{
	FILE *s;
	char bg[50];
	s=popen("ls","r");
	fread(bg,1,50,s);
	printf("\n%s",bg);
	pclose(s);
}
