#include<vector>
#include<iostream>
int main()
{
   using namespace std;    
   int i,size,maxsize,capacity;
   vector<int> v;//�Ыؤ@�ӪŪ�vector�ﹳ
   for(i=0;i<5;i++)
   {
       v.push_back(i+1);//�Q��push_back()��ƹ�list�ﹳ�i���l��
   } 	
   vector<int>::iterator ri;//�n��vector���ri     
   for(ri=v.begin();ri!=v.end();ri++)//�Nvector������������L�X��
      cout<<(*ri)<<"  ";
   cout<<endl; 
   size=v.size();
   maxsize=v.max_size();
   capacity=v.capacity(); 
   cout<<"size="<<size<<endl;
   cout<<"maxsize="<<maxsize<<endl;
   cout<<"capacity="<<capacity<<endl; 
   v.reserve(100);
   capacity=v.capacity();
   cout<<"capacity="<<capacity<<endl;
}