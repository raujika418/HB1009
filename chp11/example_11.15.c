#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int array1[4]={11,16,47,52};
	int array2[6]={3,6,9,21,22,77};
	int result[10];
	int i;
	merge(array1,array1+4,array2,array2+6,result);
	cout<<"�ɧǦX�֫�A�������Ǭ��G";
	for(i=0;i<10;i++)
		cout<<result[i]<<"   ";
	cout<<endl;
	reverse(array1,array1+4);//�Ʋ�array1�Marray2���O�ϧ�
	reverse(array2,array2+6);
	merge(array1,array1+4,array2,array2+6,result,greater<int>());
	cout<<"���ǦX�֫�A�������Ǭ��G";
	for(i=0;i<10;i++)
		cout<<result[i]<<"   ";
	cout<<endl;	
	return 1;
}