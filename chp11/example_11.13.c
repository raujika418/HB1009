#include<algorithm>
#include<iostream>
#include<vector>
using namespace std;
int main()
{
	vector<int>v;
	vector<int>::iterator vi;
	v.push_back(11);
	v.push_back(25);
	v.push_back(9);
	v.push_back(15);
	v.push_back(37);
	cout<<"�Ƨǫe�Avector�e�������������Ǭ��G";
	for(vi=v.begin();vi!=v.end();vi++)
		cout<<*vi<<"   ";
	cout<<endl;
	sort(v.begin(),v.end(),greater<int>());
	cout<<"�Ƨǫ�Avector�e�������������Ǭ��G";
		for(vi=v.begin();vi!=v.end();vi++)
			cout<<*vi<<"   ";
	cout<<endl;
	return 1;
}