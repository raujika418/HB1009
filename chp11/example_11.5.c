#include<list>
#include<iostream>
int main()
{
   using namespace std;    
   list<int> l;//�Ыؤ@�ӪŪ�list�ﹳ
   l.push_back(11);
   l.push_back(2);
   l.push_back(25);
   l.push_back(7);
   l.push_back(31);	
   list<int>::iterator ri;//�n��list���ri 
   l.sort();//��list�e���i���q�{���ɧǱƧ�
   cout<<"�Ƨǫ�Alist�e���������������ܬ��G"<<endl;
   for(ri=l.begin();ri!=l.end();ri++)//�Nlist������������L�X��
      cout<<(*ri)<<"  ";
   cout<<endl; 
   l.reverse();//��list�e���i��ϧǱƧ�
   cout<<"�ϧǱƧǫ�Alist�e���������������ܬ��G"<<endl;
   for(ri=l.begin();ri!=l.end();ri++)//�Nlist������������L�X��
      cout<<(*ri)<<"  ";
   cout<<endl;  
}