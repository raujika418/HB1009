#include<unistd.h>
#include<stdio.h>
int main ()
{
	int fd,size;
	char c;
	FILE *stream=fopen("temp.txt","a+");//a+��ܥH���[���覡���}�iŪ�g�����
	c=fgetc(stream);
	printf("%c\n",c);
	c=fputc(c,stream);
	printf("%c\n",c);
	return 1;	
}
