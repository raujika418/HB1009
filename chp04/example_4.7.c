#include<stdio.h>
#include<unistd.h>
#include<sys/stat.h>
#include<sys/types.h>
#include<fcntl.h>

int main()
{
	int sign;
	char pathname[]="/root/sxy/temp";
	sign=mkdir(pathname,O_RDWR);//�HŪ�g�覡�Ыؤ@�ӥؿ�
	if(sign==0)
		printf("craete succeed!\n");
	else 
		printf("craete succeed!\n");
	sign=rmdir(pathname);
	if(sign==0)
		printf("delete succeed!\n");
	else 
		printf("delete failed!\n");
	return 1;
}
