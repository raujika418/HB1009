#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int i;
	int array[100];
	for(i=0;i<100;i++)
		array[i]=i+1;
	for(i=0;i<100;i++)
		cout<<array[i]<<endl;
		if(binary_search(array,array+100,78))
		cout<<"�Χ�b�d��b�Ʋ�array����줸��78"<<endl;
	else
		cout<<"�Ʋ�array���S������78"<<endl;
	return 1;
}
