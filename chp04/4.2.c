#include<unistd.h>
#include<stdio.h>
#define SIZE 100
int main ()
{
  	int size;
	char strin[SIZE],strout[SIZE];//�n���@�Ӧr�żƲաA�ΨӦs���J���ƾ�	
	FILE *stream=fopen("data.txt","w+");//w+��ܥHŪ�g���覡���}���data.txt
	fgets(strin,SIZE,stdin);//����L��J�ƾ�
	fwrite(strin,sizeof(char),SIZE,stream);
	rewind(stream);
	//printf("%s\n",strin);
	//size=fread(strout,sizeof(char),SIZE,stream);	
    size=fread(strout, sizeof(char), SIZE, stream );      
    //printf( "%s\n", strout);  

	printf("%s",strout);
	fclose(stream);
	return 1;
}
