#include<list>
#include<iostream>

int main(void)
{  
   using namespace std; 
   int i;
   list<int> obj;//�Ыؤ@�ӪŪ�list�ﹳ
   list<int>::iterator j;//�n��list���i
   for(i=0;i<10;i++)
   {
       obj.push_back(i+1);//�Q��push_back()��ƹ�list�ﹳ�i���l��
   }
   for(j=obj.begin();j!=obj.end();j++)
      cout<<(*j)<<"  ";
   cout<<endl;
   obj.push_front(0);//�blist�ﹳobj�Y�����J�@���Y�`�I
   
   j=obj.begin();//j���V���ﹳobj���Ĥ@�Ӥ���
   for(i=0;i<7;i++)//�N��Ы��V�ĤC�Ӥ���
      j++;
   obj.insert(j,11);//�b�ĤC�Ӥ������e���J�ƾ�11
   for(j=obj.begin();j!=obj.end();j++)
      cout<<(*j)<<"  ";
   cout<<endl;
   return 1;
}
