#include<unistd.h>
#include<stdio.h>
#define LEN 50
int main ()
{
  	int size,i;
	char str1[LEN],str2[LEN];//�n���@�Ӧr�żƲաA�ΨӦs��奻��󤤪��ƾ�
	FILE *fp1,*fp2;	
	fp1=fopen("data.txt","r+");//�HŪ�g���覡���}���data.txt
	fgets(str1,LEN,fp1);//����L��J�ƾ�
	for(i=0;i<LEN;i++)
	{
	if(islower(str1[i]))
	str2[i]=toupper(str1[i]);
	else
        str2[i]=tolower(str1[i]);
	}
	fp2=fopen("/home/data.txt","w+");//�b�ؿ�/home�U�Ыؤ@�ӥ������
	fwrite(str2,sizeof(char),LEN,fp2);   	 
	printf("%s\n",str1);
	printf("%s\n",str2);
	fclose(fp1);
	fclose(fp2);
	return 1;
}
