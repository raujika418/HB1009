#include<list>
#include<iostream>

int main(void)
{  
   using namespace std; 
   int i;
   list<int> obj;//�Ыؤ@�ӪŪ�list�ﹳ
   list<int>::iterator ri;//�n��list���ri
   list<int>::reverse_iterator rj;//�n��list�ϦV���rj
   for(i=0;i<10;i++)
   {
       obj.push_back(i+1);//�Q��push_back()��ƹ�list�ﹳ�i���l��
   } 
   cout<<"���V�M��list�e�����������G"<<endl;
   for(ri=obj.begin();ri!=obj.end();ri++)//�Nlist������������L�X��
      cout<<(*ri)<<"  ";//���begin()�Mend()���O���Vlist����Y�����M������
   cout<<endl;   
   cout<<"�ϦV�M��list�e�����������G"<<endl;  
   for(rj=obj.rbegin();rj!=obj.rend();rj++)//�Nlist������������L�X��
      cout<<(*rj)<<"  ";//���begin()�Mend()���O���Vlist����Y�����M������
   cout<<endl;
   return 1;
}
