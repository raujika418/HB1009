#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
	vector<char> v1,v2;
	vector<char>::iterator vi;
	v1.push_back('c');
	v1.push_back('h');
	v1.push_back('i');
	v1.push_back('n');
	v1.push_back('a');
	v2.push_back('h');
	v2.push_back('i');
	vi=search(v1.begin(),v1.end(),v2.begin(),v2.end());
	if(vi!=v1.end())
		cout<<"v2�������]�t�bv1���A�_�l������"<<*vi<<endl;
	else
		cout<<"v2���������]�t�bv1��"<<endl;
	return 1;
}
