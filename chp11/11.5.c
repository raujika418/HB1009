#include<list>
#include<iostream>
#define SIZE 10
int main()
{
	using namespace std;    
	int i;
	char temp[SIZE];//�n���@���{�ɼƲաA�Ȧslist�����ƾ�
	list<char> l;//�Ыؤ@�ӪŪ�list�ﹳ	
	list<char>::iterator ri;//�n��list���ri
	list<char>::reverse_iterator rj;//�n��list�ϦV���rj
	for(i=0;i<SIZE;i++)
	{
		l.push_back('a'+i);//�Q��push_back()��ƹ�list�ﹳ�i���l��
	} 	
	cout<<"�ϧǫe�Alist�e�������������G"<<endl; 
	for(ri=l.begin();ri!=l.end();ri++) 
		cout<<(*ri)<<"  "; 
	cout<<endl;
	//cout<<"111";
	i=0;
	for(rj=l.rbegin();rj!=l.rend();rj++) 
		temp[i++]=(*rj);
	l.clear();
	for(i=0;i<SIZE;i++)
	{
		l.push_back(temp[i]);//�Q��push_back()��ƹ�list�ﹳ�i���l��
	} 	
	cout<<"�ϧǫ�Alist�e�������������G"<<endl;  
	for(ri=l.begin();ri!=l.end();ri++) 
		cout<<(*ri)<<"  "; 
	cout<<endl;
	return 1;
}