#include<list>
#include<vector>
#include<algorithm>
#include<iostream>
using namespace std;
int main()
{
	list<int> l;
	//list::iterator li;
	bool flag;
	l.push_back(42);
	l.push_back(37);
	l.push_back(77);
	l.push_back(10);
	l.push_back(28);
	l.push_back(9);
	l.sort();//��list�ﹳ�i��ɧǱƧ�
	flag=binary_search(l.begin(),l.end(),37);
	
	if(flag)
	{
		cout<<"�blist�ﹳ�����P37�ۦP������"<<endl;
	}	
	return 1;

}