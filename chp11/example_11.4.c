#include<list>
#include<iostream>

int main()
{  
   using namespace std; 
   int i;
   list<int> l1;//�Ыؤ@�ӪŪ�list�ﹳ
   list<int> l2;//�Ыؤ@�ӪŪ�list�ﹳ
   list<int>::iterator ri;//�n��list���ri   
   for(i=0;i<10;i++)
   {
       l1.push_back(i+1);//�Q��push_back()��ƹ�list�ﹳ�i���l��
   }       
   l2.push_back(11);
   l2.push_back(12);
   l2.push_back(13);
   l1.swap(l2);
   cout<<"�g�L�洫�Al1���������ܬ�"<<endl;
   for(ri=l1.begin();ri!=l1.end();ri++)//�Nlist������������L�X��
      cout<<(*ri)<<"  ";
   cout<<endl;   
   l1.merge(l2);
   cout<<"l1�Ml2�X�֫�G"<<endl;
   for(ri=l1.begin();ri!=l1.end();ri++)//�Nlist������������L�X��
      cout<<(*ri)<<"  ";
   cout<<endl;   
   return 1;   
   
}