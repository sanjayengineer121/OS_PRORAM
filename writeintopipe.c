#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<string.h>
int main()
{
char mg[10];
FILE *rd;
sprintf(mg,"Write your name");
rd = popen("w-c","w");
fwrite(strlen(mg),sizeof(char),mg,rd);
pclose(rd);
}
