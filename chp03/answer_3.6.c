#include <stdio.h>
#define N 50
void main()
{
int n,i,j,k,a[N],b[N]; 
	for (k=0;k<N;k++) b[k]=a[k]=0; 
	/*�߰ݭn��X�h�ּh,���W�L50*/ 
printf("Input n=");
scanf("%d",&n); 
	b[1]=1; 
	for (i=1;i<=n;i++)/*�̦���X�C�@�h*/
	{ 
		/*�Ʋ�b�����W�@�h���ơA�U���y�y�Q�μƲ�b�ͦ���e�h���Ʋ�a*/ 
		a[0]=1;
		for (j=1;j<i;j++) 
			a[j]=b[j-1]+b[j]; 
		/*�U���y�y��X���䪺�Ů�G��i�h�����n-i�Ӯ�A�S��e�׬�3*/ 
		for (j=0;j<n-i;j++) 
			printf("%3c",32); 
		/*�U���y�y��X���h���Ʀr�A�C�Ӽe��3�A�ť�3*/ 
		for (j=0;j<i;j++) 
			printf("%3d%3c",a[j],32); 
		/*�U�����y�y��X����*/ 
		printf("\n"); 
		/*�U�����y�y���e�Ʋ�a�ƻs��b��*/ 
		for (k=0;k<N;k++) 
			b[k]=a[k]; 
	} 
	printf("\n");
}
