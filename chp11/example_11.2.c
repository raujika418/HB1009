#include<list>
#include<iostream>

int main(void)
{  
   using namespace std; 
   int i;
   list<int> obj;//�Ыؤ@�ӪŪ�list�ﹳ
   list<int>::iterator j,k;//�n��list���i
   for(i=0;i<10;i++)
   {
       obj.push_back(i+1);//�Q��push_back()��ƹ�list�ﹳ�i���l��
       obj.push_back(i+1);
   }
   for(j=obj.begin();j!=obj.end();j++)
      cout<<(*j)<<"  ";
   cout<<endl;  
   obj.unique();//�R��obj���Ҧ��s�򭫽ƪ�����
   for(j=obj.begin();j!=obj.end();j++)
      cout<<(*j)<<"  ";
   cout<<endl;  
   obj.pop_front();//�R���Ĥ@�Ӥ���1
   obj.pop_back();//�R���̫�@�Ӥ���10
   j=obj.begin();//j���V���ﹳobj���Ĥ@�Ӥ���
   k=j;
   for(i=0;i<5;i++)//�N��Ы��V�ĤC�Ӥ���
      k++;
   obj.erase(j,k);//�R���϶�[0,5)��������
   for(j=obj.begin();j!=obj.end();j++)
      cout<<(*j)<<"  ";
   cout<<endl;
   obj.remove(8);//�R�������ȵ���8������
   for(j=obj.begin();j!=obj.end();j++)
      cout<<(*j)<<"  ";
   cout<<endl;
   obj.clear();//�R��obj�����Ҧ�����
   for(j=obj.begin();j!=obj.end();j++)
      cout<<(*j)<<"  ";
   cout<<endl;
   return 1;
}