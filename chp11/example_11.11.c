#include<set>
#include<iostream>
using namespace std;
int main()
{
	set<char>s;
	set<char>::iterator si;
	s.insert('b');
	s.insert('d');
	s.insert('t');
	s.insert('a');
	for(si=s.begin();si!=s.end();si++)
		cout<<*si<<"   ";
	cout<<endl;
	s.erase(s.begin(),s.end());//��{���clear�]�^���\��
	if(s.empty()==true)
		cout<<"set�e������"<<endl;
	return 1;
}